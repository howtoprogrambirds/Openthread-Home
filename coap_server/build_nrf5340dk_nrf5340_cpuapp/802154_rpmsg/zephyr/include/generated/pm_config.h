/* File generated by /home/dylan/ncs/nrf/scripts/partition_manager_output.py, do not modify */
#ifndef PM_CONFIG_H__
#define PM_CONFIG_H__
#define PM__APP_OFFSET 0x0
#define PM__APP_ADDRESS 0x0
#define PM__APP_END_ADDRESS 0xfe000
#define PM__APP_SIZE 0xfe000
#define PM__APP_NAME app
#define PM__APP_ID 0
#define PM__app_ID PM_APP_ID
#define PM__app_IS_ENABLED 1
#define PM_0_LABEL _APP
#define PM__APP_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM__SETTINGS_STORAGE_OFFSET 0xfe000
#define PM__SETTINGS_STORAGE_ADDRESS 0xfe000
#define PM__SETTINGS_STORAGE_END_ADDRESS 0x100000
#define PM__SETTINGS_STORAGE_SIZE 0x2000
#define PM__SETTINGS_STORAGE_NAME settings_storage
#define PM__SETTINGS_STORAGE_ID 1
#define PM__settings_storage_ID PM_SETTINGS_STORAGE_ID
#define PM__settings_storage_IS_ENABLED 1
#define PM_1_LABEL _SETTINGS_STORAGE
#define PM__SETTINGS_STORAGE_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM__OTP_OFFSET 0x0
#define PM__OTP_ADDRESS 0xff8100
#define PM__OTP_END_ADDRESS 0xff83fc
#define PM__OTP_SIZE 0x2fc
#define PM__OTP_NAME otp
#define PM__SRAM_PRIMARY_OFFSET 0x0
#define PM__SRAM_PRIMARY_ADDRESS 0x20000000
#define PM__SRAM_PRIMARY_END_ADDRESS 0x20080000
#define PM__SRAM_PRIMARY_SIZE 0x80000
#define PM__SRAM_PRIMARY_NAME sram_primary
#define PM__NUM 2
#define PM__ALL_BY_SIZE "otp settings_storage sram_primary app"
#define PM_802154_RPMSG_OFFSET 0x0
#define PM_802154_RPMSG_ADDRESS 0x1000000
#define PM_802154_RPMSG_END_ADDRESS 0x1040000
#define PM_802154_RPMSG_SIZE 0x40000
#define PM_802154_RPMSG_NAME 802154_rpmsg
#define PM_802154_RPMSG_ID 2
#define PM_802154_rpmsg_ID PM_802154_RPMSG_ID
#define PM_802154_rpmsg_IS_ENABLED 1
#define PM_2_LABEL 802154_RPMSG
#define PM_802154_RPMSG_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_APP_OFFSET 0x0
#define PM_APP_ADDRESS 0x1000000
#define PM_APP_END_ADDRESS 0x1040000
#define PM_APP_SIZE 0x40000
#define PM_APP_NAME app
#define PM_APP_ID 3
#define PM_app_ID PM_APP_ID
#define PM_app_IS_ENABLED 1
#define PM_3_LABEL APP
#define PM_APP_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_SRAM_PRIMARY_OFFSET 0x0
#define PM_SRAM_PRIMARY_ADDRESS 0x21000000
#define PM_SRAM_PRIMARY_END_ADDRESS 0x21010000
#define PM_SRAM_PRIMARY_SIZE 0x10000
#define PM_SRAM_PRIMARY_NAME sram_primary
#define PM_NUM 4
#define PM_ALL_BY_SIZE "sram_primary 802154_rpmsg app"
#define PM_ADDRESS 0x1000000
#define PM_SIZE 0x40000
#define PM_SRAM_ADDRESS 0x21000000
#define PM_SRAM_SIZE 0x10000
#endif /* PM_CONFIG_H__ */