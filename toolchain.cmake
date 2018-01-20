# This file allows to use a dev env with QtCreator
# 1 - Open the CMakeLists.txt in the sources
# 2 - Run cmake with -DCMAKE_TOOLCHAIN_FILE=toolchhin.cmake

set(ENV{CFLAGS} "-march=armv8-a+crc+crypto -mabi=lp64 -Wno-psabi -mcpu=cortex-a53+crc+crypto -fomit-frame-pointer -Wall -pipe -Os ")
set(ENV{CXXFLAGS} "-march=armv8-a+crc+crypto -mabi=lp64 -Wno-psabi -mcpu=cortex-a53+crc+crypto -fomit-frame-pointer -Wall -pipe -Os ")
set(ENV{LD_FLAGS} "-march=armv8-a+crc+crypto -mtune=cortex-a53 -Wl,--as-needed -fuse-ld=gold ")
set(ENV{MAKEFLAGS} "-j16")
set(ENV{PMP_BUILD_TARGET} "ROCKCHIP")

set(ENABLE_CODECS off CACHE BOOL "Enable Codecs" FORCE)
set(DEPENDCY_FOLDER )
set(DISABLE_BUNDLED_DEPS on CACHE BOOL "Disable bundle deps" FORCE)
set(OE_ARCH "")

set(OPENELEC ON CACHE BOOL "Embedded Target" FORCE)
set(BUILD_TARGET ROCKCHIP CACHE STRING "PMP build Target")

set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_VERBOSE_MAKEFILE true)
set(CMAKE_SYSROOT /home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/toolchain/aarch64-libreelec-linux-gnueabi/sysroot)
set(CMAKE_INSTALL_PREFIX "/usr")

#Disable PMP helper
set(ENABLE_HELPER OFF)

set(BUILD_PREFIX /home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/toolchain/bin/aarch64-libreelec-linux-gnueabi-)
set(BUILD_TARGET "ROCKCHIP")

set(SYSROOT_PREFIX /home/longchair/github/longchair/LibreELEC.tv/build.PlexMediaPlayer-ROCK64.aarch64-9.0-devel/toolchain/aarch64-libreelec-linux-gnueabi/sysroot)
set(CMAKE_SYSROOT ${SYSROOT_PREFIX})
set(CMAKE_FIND_ROOT_PATH ${SYSROOT_PREFIX})

set(CMAKE_LIBRARY_PATH "${SYSROOT_PREFIX}/usr/lib" "${SYSROOT_PREFIX}/lib")
set(CMAKE_PREFIX_PATH "${SYSROOT_PREFIX};${SYSROOT_PREFIX}/usr/local/qt5")
set(CMAKE_INCLUDE_PATH "${SYSROOT_PREFIX}/usr/include")

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)

set(QTROOT ${SYSROOT_PREFIX}/usr/local/qt5)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

#Now Create the QtCreatorDeployment.txt file
#file(WRITE "${CMAKE_SOURCE_DIR}/QtCreatorDeployment.txt" "<deployment/prefix>\n")
#file(APPEND "${CMAKE_SOURCE_DIR}/QtCreatorDeployment.txt" "${CMAKE_BINARY_DIR}/src/plexmediaplayer:debug/plexmediaplayer\n")
#file(APPEND "${CMAKE_SOURCE_DIR}/QtCreatorDeployment.txt" "${CMAKE_BINARY_DIR}/src/tools/helper/pmphelper:debug/pmphelper\n")
