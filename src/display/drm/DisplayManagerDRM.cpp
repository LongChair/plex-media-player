
#include <unistd.h>
#include <fcntl.h>

#include "QsLog.h"
#include "DisplayManagerDRM.h"

#define DRM_DEFAULT_CARD    "/dev/dri/card0"

///////////////////////////////////////////////////////////////////////////////////////////////////
DisplayManagerDRM::~DisplayManagerDRM()
{
    terminate();
}

///////////////////////////////////////////////////////////////////////////////////////////////////
void DisplayManagerDRM::terminate()
{
    if (fd > 0)
        close(fd);

    fd = 0;

    if (drm_mode_res)
    {
        drmModeFreeResources(drm_mode_res);
        drm_mode_res = NULL;
    }

    if (drm_plane_res)
    {
        drmModeFreePlaneResources(drm_plane_res);
        drm_plane_res = NULL;
    }

}

///////////////////////////////////////////////////////////////////////////////////////////////////
bool DisplayManagerDRM::initialize()
{
    terminate();

    fd = open(DRM_DEFAULT_CARD, O_RDWR | O_CLOEXEC);
    if (fd < 0)
    {
        QLOG_ERROR() << "Unable to open device " << DRM_DEFAULT_CARD;
        goto fail;
    }

    drm_mode_res = drmModeGetResources(fd);
    if (!drm_mode_res)
    {
        QLOG_ERROR() << "Unable to retrieve DRM mode ressources ";
        goto fail;
    }

    drm_plane_res = drmModeGetPlaneResources(fd);
    if (!drm_plane_res)
    {
        QLOG_ERROR() << "Unable to retrieve DRM plane ressources ";
        goto fail;
    }

    m_displays.clear();

    for (int iConnector=0; iConnector < drm_mode_res->count_connectors; iConnector++)
    {
        drmModeConnector *connector = drmModeGetConnector(fd, drm_mode_res->connectors[iConnector]);
        if (connector)
        {
            if (connector->connection == DRM_MODE_CONNECTED)
            {
                // we have a valid display there
                DMDisplayPtr display = DMDisplayPtr(new DMDisplay);
                display->m_id = m_displays.size();
                display->m_name = QString("Display %1").arg(display->m_id);
                m_displays[display->m_id] = display;

                for (int iMode=0; iMode < connector->count_modes; iMode++)
                {
                    // add the videomode to the display
                    DMVideoModePtr mode = DMVideoModePtr(new DMVideoMode);
                    mode->m_id = iMode;
                    display->m_videoModes[iMode] = mode;

                    mode->m_width       = connector->modes[iMode].hdisplay;
                    mode->m_height      = connector->modes[iMode].vdisplay;
                    mode->m_refreshRate = connector->modes[iMode].vrefresh;
                    mode->m_bitsPerPixel= 32;
                    mode->m_interlaced  = (connector->modes[iMode].flags & DRM_MODE_FLAG_INTERLACE);
                }
            }
            drmModeFreeConnector(connector);
        }
    }

    if (current_mode == -1)
        current_mode = readCurrentDisplayMode(getMainDisplay());

    return true;

fail:
    terminate();
    return false;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
drmModeConnectorPtr DisplayManagerDRM::findConnectorForDisplay(int display)
{
    int count = 0;
    for (int iConnector=0; iConnector < drm_mode_res->count_connectors; iConnector++)
    {
        drmModeConnector *connector = drmModeGetConnector(fd, drm_mode_res->connectors[iConnector]);
        if (connector)
        {
            if (connector->connection == DRM_MODE_CONNECTED)
            {
                if (display == count)
                {
                    return connector;
                }
                count++;
            }

            drmModeFreeConnector(connector);
        }
    }

    return nullptr;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
drmModeCrtcPtr DisplayManagerDRM::getCurrentCrtcForDisplay(int display)
{
    drmModeCrtcPtr current_crtc = NULL;
    int crtc_id;
    drmModeConnector *connector = findConnectorForDisplay(display);
    if (!connector)
    {
        QLOG_ERROR() << "Could not find DRM connector for display" << display;
        goto fail;
    }

    crtc_id = findCrtcIdFromConnector(connector);
    if (crtc_id <= 0)
    {
        QLOG_ERROR() << "Could not find CRTC ID for display" << display;
        goto fail;
    }

    current_crtc = drmModeGetCrtc(fd, crtc_id);
    if (!current_crtc)
    {
        QLOG_ERROR() << "Could not find current CRTC for display" << display;
        goto fail;
    }

    return current_crtc;
fail:
    if (connector)
        drmModeFreeConnector(connector);
    return nullptr;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
int DisplayManagerDRM::findCrtcIdFromConnector(drmModeConnectorPtr connector)
{
    if ((!connector) || (!drm_mode_res))
        return -1;

    for (int iEncoder=0; iEncoder < connector->count_encoders; iEncoder++)
    {
        drmModeEncoder *encoder = drmModeGetEncoder(fd, connector->encoders[iEncoder]);
        if (encoder)
        {
            for(int iCrtc=0; iCrtc < drm_mode_res->count_crtcs; iCrtc++)
            {
                if (encoder->possible_crtcs & (1 << iCrtc))
                {
                    drmModeFreeEncoder(encoder);
                    return drm_mode_res->crtcs[iCrtc];
                }
            }
            drmModeFreeEncoder(encoder);
        }
    }

    return -1;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
bool DisplayManagerDRM::setDisplayMode(int display, int mode)
{
    drmModeCrtcPtr current_crtc = NULL;
    int ret, crtc_id;
    drmModeConnector *connector = findConnectorForDisplay(display);
    if (!connector)
    {
        QLOG_ERROR() << "Could not find DRM connector for display" << display;
        goto fail;
    }

    crtc_id = findCrtcIdFromConnector(connector);
    if (crtc_id <= 0)
    {
        QLOG_ERROR() << "Could not find CRTC ID for display" << display;
        goto fail;
    }

    current_crtc = drmModeGetCrtc(fd, crtc_id);
    if (!current_crtc)
    {
        QLOG_ERROR() << "Could not find current CRTC for display" << display;
        goto fail;
    }

    ret = drmModeSetCrtc(fd, crtc_id, current_crtc->buffer_id, current_crtc->x, current_crtc->y, &connector->connector_id, 1, &connector->modes[mode]);
    if (ret)
    {
        QLOG_ERROR() << "Setting CRTC failed with code" << ret;
        return false;
    }

    current_mode = mode;

    return true;

fail:
    current_mode = readCurrentDisplayMode(display);

    if (connector)
        drmModeFreeConnector(connector);
    if (current_crtc)
        drmModeFreeCrtc(current_crtc);

    return false;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
int DisplayManagerDRM::readCurrentDisplayMode(int display)
{
    return 0;
    drmModeCrtcPtr current_crtc = getCurrentCrtcForDisplay(display);
    drmModeConnector *connector = findConnectorForDisplay(display);
    int mode = -1;
    if ((connector) && (current_crtc))
    {
        for (int iMode=0; iMode < connector->count_modes; iMode++)
        {
            QLOG_DEBUG() << "Checking mode " << iMode << connector->modes[iMode].hdisplay << connector->modes[iMode].vdisplay << connector->modes[iMode].vrefresh << connector->modes[iMode].flags;
            if ((connector->modes[iMode].hdisplay == current_crtc->mode.hdisplay) &&
                (connector->modes[iMode].vdisplay == current_crtc->mode.vdisplay) &&
                (connector->modes[iMode].vrefresh == current_crtc->mode.vrefresh) &&
                (connector->modes[iMode].flags == current_crtc->mode.flags))
            {
                mode = iMode;
                break;
            }
        }
    }

    return mode;
}

int DisplayManagerDRM::getCurrentDisplayMode(int display)
{
    return current_mode;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
int DisplayManagerDRM::getMainDisplay()
{
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
int DisplayManagerDRM::getDisplayFromPoint(int x, int y)
{
    return 0;
}
