
#include <unistd.h>
#include <fcntl.h>
#include <QGuiApplication>
#include <QWindow>
#include <qpa/qplatformnativeinterface.h>
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
    fd = 0;
    crtc_id = 0;
    connector_id = 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
bool DisplayManagerDRM::initialize()
{
    drmModeConnector *connector;
    terminate();

    QGuiApplication *app = static_cast<QGuiApplication *>(QGuiApplication::instance());
    if (!app)
    {
        QLOG_ERROR() << "Failed to retrieve current application";
        return false;
    }

    void *p;
    p = app->platformNativeInterface()->nativeResourceForIntegration("dri_fd");
    if (!p)
    {
        QLOG_ERROR() "Failed to retrieve DRI fd from native interface";
        goto fail;
    }

    fd = (int)(qintptr)p;

    p =  app->platformNativeInterface()->nativeResourceForScreen("dri_crtcid",app->primaryScreen());
    if (!p)
    {
        QLOG_ERROR() "Failed to retrieve DRI crtc id from native interface";
        goto fail;
    }

    crtc_id = (int)(qintptr)p;

    p =  app->platformNativeInterface()->nativeResourceForScreen("dri_connectorid",app->primaryScreen());
    if (!p)
    {
        QLOG_ERROR() "Failed to retrieve DRI connector id from native interface";
        goto fail;
    }

    connector_id = (int)(qintptr)p;
    m_displays.clear();

    connector = drmModeGetConnector(fd, connector_id);
    if (connector)
    {
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
        drmModeFreeConnector(connector);
    }
    else
    {
        QLOG_ERROR() "Failed to retrieve DRI connector from id " << connector_id;
        goto fail;
    }

    if (current_mode == -1)
        current_mode = readCurrentDisplayMode(getMainDisplay());

    return true;

fail:
    terminate();
    return false;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
int DisplayManagerDRM::setProperty(drmModeAtomicReq *request, int object_id, int object_type,
                                   const char *name, uint64_t value)
{
    drmModeObjectProperties *props = drmModeObjectGetProperties(fd, object_id, object_type);
    if (props)
    {
        for (unsigned int i = 0; i < props->count_props; i++)
        {
             drmModePropertyRes *prop = drmModeGetProperty(fd, props->props[i]);
             if (prop)
             {
                 if (strcasecmp(prop->name, name) == 0)
                 {
                     return drmModeAtomicAddProperty(request, object_id,prop->prop_id, value);
                 }
             }
        }
    }

    return -1;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
bool DisplayManagerDRM::setDisplayMode(int display, int mode)
{
    uint32_t blob_id = 0;
    drmModeConnector *connector;
    drmModeAtomicReq *request;

    request = drmModeAtomicAlloc();
    if (!request)
        return false;

    connector = drmModeGetConnector(fd, connector_id);
    if (connector)
    {

        if (drmModeCreatePropertyBlob(fd, &connector->modes[mode], sizeof(drmModeModeInfo), &blob_id))
        {
            QLOG_ERROR() << "Failed to create mode property blob";
            goto fail;
        }

        setProperty(request, crtc_id, DRM_MODE_OBJECT_CRTC, "MODE_ID", blob_id);


        int ret = drmModeAtomicCommit(fd, request, DRM_MODE_ATOMIC_NONBLOCK |
                                      DRM_MODE_ATOMIC_ALLOW_MODESET, NULL);

        if (ret) {
            QLOG_ERROR() << "Failed to commit display mode request, code " << ret;
            goto fail;
        }


        drmModeFreeConnector(connector);
    }

    current_mode = mode;
    return true;

fail:
    if (blob_id)

    if (connector)
        drmModeFreeConnector(connector);

    current_mode = readCurrentDisplayMode(display);
    return false;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
int DisplayManagerDRM::readCurrentDisplayMode(int display)
{
    drmModeCrtcPtr current_crtc = drmModeGetCrtc(fd, crtc_id);
    drmModeConnector *connector = drmModeGetConnector(fd, connector_id);
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
