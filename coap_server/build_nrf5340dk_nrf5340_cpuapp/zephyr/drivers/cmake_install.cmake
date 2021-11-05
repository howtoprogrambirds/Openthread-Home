# Install script for directory: /home/dylan/ncs/zephyr/drivers

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
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/drivers/console/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/drivers/interrupt_controller/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/drivers/misc/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/drivers/pcie/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/drivers/disk/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/drivers/clock_control/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/drivers/gpio/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/drivers/ieee802154/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/drivers/ipm/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/drivers/flash/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/drivers/serial/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/drivers/net/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/drivers/entropy/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/dylan/ncs/nrf/samples/openthread/coap_server_OT_HOME/build_nrf5340dk_nrf5340_cpuapp/zephyr/drivers/timer/cmake_install.cmake")
endif()

