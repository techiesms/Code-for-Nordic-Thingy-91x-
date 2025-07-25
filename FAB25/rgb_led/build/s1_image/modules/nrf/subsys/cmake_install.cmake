# Install script for directory: C:/ncs/v2.9.1/nrf/subsys

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/Zephyr-Kernel")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "MinSizeRel")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "C:/ncs/toolchains/b620d30767/opt/zephyr-sdk/arm-zephyr-eabi/bin/arm-zephyr-eabi-objdump.exe")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/nordic/myApps/rgb_led/build/s1_image/modules/nrf/subsys/bootloader/bl_crypto/cmake_install.cmake")
  include("C:/nordic/myApps/rgb_led/build/s1_image/modules/nrf/subsys/net/cmake_install.cmake")
  include("C:/nordic/myApps/rgb_led/build/s1_image/modules/nrf/subsys/dfu/cmake_install.cmake")
  include("C:/nordic/myApps/rgb_led/build/s1_image/modules/nrf/subsys/mpsl/cmake_install.cmake")
  include("C:/nordic/myApps/rgb_led/build/s1_image/modules/nrf/subsys/fw_info/cmake_install.cmake")
  include("C:/nordic/myApps/rgb_led/build/s1_image/modules/nrf/subsys/logging/cmake_install.cmake")
  include("C:/nordic/myApps/rgb_led/build/s1_image/modules/nrf/subsys/shell/cmake_install.cmake")
  include("C:/nordic/myApps/rgb_led/build/s1_image/modules/nrf/subsys/debug/cmake_install.cmake")
  include("C:/nordic/myApps/rgb_led/build/s1_image/modules/nrf/subsys/partition_manager/cmake_install.cmake")
  include("C:/nordic/myApps/rgb_led/build/s1_image/modules/nrf/subsys/suit/cmake_install.cmake")

endif()

