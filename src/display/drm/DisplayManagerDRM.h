#ifndef DISPLAYMANAGERDRM_H_
#define DISPLAYMANAGERDRM_H_

#include <xf86drm.h>
#include <xf86drmMode.h>

#include "display/DisplayManager.h"

#define DRM_DEFAULT_DEVICE "/dev/dri/card0"

class DisplayManagerDRM : public DisplayManager
{
  Q_OBJECT
private:
    int fd;
    drmModeResPtr drm_mode_res;
    drmModePlaneResPtr drm_plane_res;
    drmModeCrtcPtr initial_crtc;
    int current_mode;

    drmModeConnectorPtr findConnectorForDisplay(int display);
    int findCrtcIdFromConnector(drmModeConnectorPtr connector);
    drmModeModeInfoPtr findMode(int display, int mode);
    drmModeCrtcPtr getCurrentCrtcForDisplay(int display);
    int readCurrentDisplayMode(int display);

    void terminate();

public:
  DisplayManagerDRM(QObject* parent) : DisplayManager(parent), fd(0), drm_mode_res(0), drm_plane_res(0), current_mode(-1) {};
  virtual ~DisplayManagerDRM();

  virtual bool initialize();
  virtual bool setDisplayMode(int display, int mode);
  virtual int getCurrentDisplayMode(int display);
  virtual int getMainDisplay();
  virtual int getDisplayFromPoint(int x, int y);
};

#endif /* DISPLAYMANAGERDRM_H_ */
