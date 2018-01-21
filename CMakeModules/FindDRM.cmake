# - find where dlopen and friends are located.
# DRM_FOUND - system has dynamic linking interface available
# DRM_INCLUDE_DIR - where libdrm.h is located.
# DRM_LIBRARIES - libraries needed to use dlopen

include(CheckFunctionExists)

Find_Path(DRM_INCLUDE_DIR
  NAMES drm.h
  PATHS /usr/include usr/local/include
  PATH_SUFFIXES libdrm
  HINTS ${_DRM_INCLUDEDIR}
)

find_library(DRM_LIBRARIES NAMES drm)
if(DRM_LIBRARIES)
  set(DRM_FOUND TRUE)
  add_definitions(-DUSE_DRM)
  Message(STATUS "Found DRM Library")
else(DRM_LIBRARIES)
  set(DRM_LIBRARIES "")
endif(DRM_LIBRARIES)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(DRM DEFAULT_MSG DRM_LIBRARIES DRM_INCLUDE_DIR)

