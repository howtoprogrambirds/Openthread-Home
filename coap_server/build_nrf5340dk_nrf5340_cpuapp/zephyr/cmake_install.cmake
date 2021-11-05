# Install script for directory: /home/dylan/ncs/zephyr

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
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
  set(CMAKE_OBJDUMP "/opt/gnu-mcu-eclipse/arm-none-eabi-gcc/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/arch/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/lib/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/soc/arm/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/boards/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/subsys/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/drivers/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/nrf/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/mcuboot/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/trusted-firmware-m/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/cjson/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/openthread/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/pelion-dm/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/cddl-gen/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/memfault-firmware-sdk/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/CANopenNode/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/civetweb/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/cmsis/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/fatfs/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/hal_nordic/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/st/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/libmetal/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/littlefs/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/loramac-node/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/lvgl/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/lz4/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/mbedtls/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/mcumgr/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/mipi-sys-t/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/nanopb/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/nrf_hw_models/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/open-amp/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/segger/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/tinycbor/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/tinycrypt/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/TraceRecorder/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/nrfxlib/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/modules/connectedhomeip/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/kernel/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/cmake/flash/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/cmake/usage/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/cmake/reports/cmake_install.cmake")
endif()

