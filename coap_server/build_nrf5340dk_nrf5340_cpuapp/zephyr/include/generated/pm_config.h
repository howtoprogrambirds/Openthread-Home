/* File generated by /home/dylan/ncs/nrf/scripts/partition_manager_output.py, do not modify */
#ifndef PM_CONFIG_H__
#define PM_CONFIG_H__
#define PM_APP_OFFSET 0x0
#define PM_APP_ADDRESS 0x0
#define PM_APP_END_ADDRESS 0xfe000
#define PM_APP_SIZE 0xfe000
#define PM_APP_NAME app
#define PM_APP_ID 0
#define PM_app_ID PM_APP_ID
#define PM_app_IS_ENABLED 1
#define PM_0_LABEL APP
#define PM_APP_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_SETTINGS_STORAGE_OFFSET 0xfe000
#define PM_SETTINGS_STORAGE_ADDRESS 0xfe000
#define PM_SETTINGS_STORAGE_END_ADDRESS 0x100000
#define PM_SETTINGS_STORAGE_SIZE 0x2000
#define PM_SETTINGS_STORAGE_NAME settings_storage
#define PM_SETTINGS_STORAGE_ID 1
#define PM_settings_storage_ID PM_SETTINGS_STORAGE_ID
#define PM_settings_storage_IS_ENABLED 1
#define PM_1_LABEL SETTINGS_STORAGE
#define PM_SETTINGS_STORAGE_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_OTP_OFFSET 0x0
#define PM_OTP_ADDRESS 0xff8100
#define PM_OTP_END_ADDRESS 0xff83fc
#define PM_OTP_SIZE 0x2fc
#define PM_OTP_NAME otp
#define PM_SRAM_PRIMARY_OFFSET 0x0
#define PM_SRAM_PRIMARY_ADDRESS 0x20000000
#define PM_SRAM_PRIMARY_END_ADDRESS 0x20080000
#define PM_SRAM_PRIMARY_SIZE 0x80000
#define PM_SRAM_PRIMARY_NAME sram_primary
#define PM_NUM 2
#define PM_ALL_BY_SIZE "otp settings_storage sram_primary app"
#define PM_CPUNET_802154_RPMSG_OFFSET 0x0
#define PM_CPUNET_802154_RPMSG_ADDRESS 0x1000000
#define PM_CPUNET_802154_RPMSG_END_ADDRESS 0x1040000
#define PM_CPUNET_802154_RPMSG_SIZE 0x40000
#define PM_CPUNET_802154_RPMSG_NAME 802154_rpmsg
#define PM_CPUNET_802154_RPMSG_ID 2
#define PM_CPUNET_802154_rpmsg_ID PM_802154_RPMSG_ID
#define PM_CPUNET_802154_rpmsg_IS_ENABLED 1
#define PM_2_LABEL CPUNET_802154_RPMSG
#define PM_CPUNET_802154_RPMSG_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_CPUNET_APP_OFFSET 0x0
#define PM_CPUNET_APP_ADDRESS 0x1000000
#define PM_CPUNET_APP_END_ADDRESS 0x1040000
#define PM_CPUNET_APP_SIZE 0x40000
#define PM_CPUNET_APP_NAME app
#define PM_CPUNET_APP_ID 3
#define PM_CPUNET_app_ID PM_APP_ID
#define PM_CPUNET_app_IS_ENABLED 1
#define PM_3_LABEL CPUNET_APP
#define PM_CPUNET_APP_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_CPUNET_SRAM_PRIMARY_OFFSET 0x0
#define PM_CPUNET_SRAM_PRIMARY_ADDRESS 0x21000000
#define PM_CPUNET_SRAM_PRIMARY_END_ADDRESS 0x21010000
#define PM_CPUNET_SRAM_PRIMARY_SIZE 0x10000
#define PM_CPUNET_SRAM_PRIMARY_NAME sram_primary
#define PM_CPUNET_NUM 4
#define PM_CPUNET_ALL_BY_SIZE "sram_primary 802154_rpmsg app"
#define PM_ADDRESS 0x0
#define PM_SIZE 0xfe000
#define PM_SRAM_ADDRESS 0x20000000
#define PM_SRAM_SIZE 0x80000
#endif /* PM_CONFIG_H__ */