# Install script for directory: /home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/plexmediaplayer-dist-ninja/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCorex" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/resources" TYPE FILE FILES "/home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/toolchain/aarch64-libreelec-linux-gnueabi/sysroot/usr/local/qt5/resources/qtwebengine_devtools_resources.pak")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCorex" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plexmediaplayer/web-client" TYPE DIRECTORY FILES "/home/longchair/.conan/data/web-client-tv2/3.33.0-5bff43d/plex/public/package/6924fb812022e5562d7d8ebcccd152feb83a7d26/tv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCorex" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/plexmediaplayer" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/plexmediaplayer")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/plexmediaplayer"
         RPATH "/home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/toolchain/aarch64-libreelec-linux-gnueabi/sysroot/usr/local/qt5/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/plexmediaplayer-dist-ninja/.aarch64-libreelec-linux-gnueabi/src/plexmediaplayer")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/plexmediaplayer" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/plexmediaplayer")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/plexmediaplayer"
         OLD_RPATH "/home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/toolchain/aarch64-libreelec-linux-gnueabi/sysroot/usr/local/qt5/lib:"
         NEW_RPATH "/home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/toolchain/aarch64-libreelec-linux-gnueabi/sysroot/usr/local/qt5/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/toolchain/bin/aarch64-libreelec-linux-gnueabi-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/plexmediaplayer")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/plexmediaplayer-dist-ninja/.aarch64-libreelec-linux-gnueabi/src/shared/cmake_install.cmake")
  include("/home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/plexmediaplayer-dist-ninja/.aarch64-libreelec-linux-gnueabi/src/core/cmake_install.cmake")
  include("/home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/plexmediaplayer-dist-ninja/.aarch64-libreelec-linux-gnueabi/src/display/cmake_install.cmake")
  include("/home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/plexmediaplayer-dist-ninja/.aarch64-libreelec-linux-gnueabi/src/player/cmake_install.cmake")
  include("/home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/plexmediaplayer-dist-ninja/.aarch64-libreelec-linux-gnueabi/src/utils/cmake_install.cmake")
  include("/home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/plexmediaplayer-dist-ninja/.aarch64-libreelec-linux-gnueabi/src/server/cmake_install.cmake")
  include("/home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/plexmediaplayer-dist-ninja/.aarch64-libreelec-linux-gnueabi/src/ui/cmake_install.cmake")
  include("/home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/plexmediaplayer-dist-ninja/.aarch64-libreelec-linux-gnueabi/src/input/cmake_install.cmake")
  include("/home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/plexmediaplayer-dist-ninja/.aarch64-libreelec-linux-gnueabi/src/system/cmake_install.cmake")
  include("/home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/plexmediaplayer-dist-ninja/.aarch64-libreelec-linux-gnueabi/src/breakpad/cmake_install.cmake")
  include("/home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/plexmediaplayer-dist-ninja/.aarch64-libreelec-linux-gnueabi/src/settings/cmake_install.cmake")
  include("/home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/plexmediaplayer-dist-ninja/.aarch64-libreelec-linux-gnueabi/src/power/cmake_install.cmake")
  include("/home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/plexmediaplayer-dist-ninja/.aarch64-libreelec-linux-gnueabi/src/remote/cmake_install.cmake")
  include("/home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/plexmediaplayer-dist-ninja/.aarch64-libreelec-linux-gnueabi/src/tools/cmake_install.cmake")

endif()

