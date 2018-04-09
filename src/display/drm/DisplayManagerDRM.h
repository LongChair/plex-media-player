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
    int crtc_id;
    int connector_id;
    int current_mode;

    int readCurrentDisplayMode(int display);
    int setProperty(drmModeAtomicReq *request, int object_id, int object_type, const char *name, uint64_t value);
    void terminate();

public:
  DisplayManagerDRM(QObject* parent) : DisplayManager(parent), fd(0), current_mode(-1) {};
  virtual ~DisplayManagerDRM();

  virtual bool initialize();
  virtual bool setDisplayMode(int display, int mode);
  virtual int getCurrentDisplayMode(int display);
  virtual int getMainDisplay();
  virtual int getDisplayFromPoint(int x, int y);
};

#endif /* DISPLAYMANAGERDRM_H_ */
