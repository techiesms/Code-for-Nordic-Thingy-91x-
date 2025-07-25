#define CONFIG_PM_PARTITION_SIZE_MCUBOOT_SCRATCH 0x1e000
#define CONFIG_PM_PARTITION_SIZE_MCUBOOT_PAD 0x200
#define CONFIG_PM_PARTITION_SIZE_MCUBOOT 0xbe00
#define CONFIG_BOOT_USE_NRF_EXTERNAL_CRYPTO 1
#define CONFIG_MCUBOOT_NRF_CLEANUP_PERIPHERAL 1
#define CONFIG_BOOT_SIGNATURE_KEY_FILE "C:/ncs/v3.0.0/bootloader/mcuboot/root-ec-p256.pem"
#define CONFIG_BOOT_NRF_EXTERNAL_CRYPTO 1
#define CONFIG_BOOT_ERASE_PROGRESSIVELY 1
#define CONFIG_MCUBOOT_CLEANUP_UNUSABLE_SECONDARY 1
#define CONFIG_BOOT_SERIAL_IMG_GRP_HASH 1
#define CONFIG_MCUBOOT 1
#define CONFIG_NRFXLIB_CRYPTO 1
#define CONFIG_BOOT_IMG_HASH_ALG_SHA256_ALLOW 1
#define CONFIG_BOOT_IMG_HASH_ALG_SHA256 1
#define CONFIG_BOOT_SIGNATURE_TYPE_ECDSA_P256 1
#define CONFIG_MCUBOOT_CLEANUP_ARM_CORE 1
#define CONFIG_BOOT_VALIDATE_SLOT0 1
#define CONFIG_BOOT_PREFER_SWAP_MOVE 1
#define CONFIG_BOOT_SWAP_USING_MOVE 1
#define CONFIG_BOOT_ENCRYPTION_SUPPORT 1
#define CONFIG_BOOT_MAX_IMG_SECTORS 512
#define CONFIG_BOOT_SHARE_BACKEND_DISABLED 1
#define CONFIG_BOOT_FIH_PROFILE_LOW 1
#define CONFIG_BOOT_USB_DFU_NO 1
#define CONFIG_MCUBOOT_LOG_LEVEL_INF 1
#define CONFIG_MCUBOOT_LOG_LEVEL 3
#define CONFIG_MCUBOOT_LOG_THREAD_STACK_SIZE 768
#define CONFIG_MCUBOOT_SERIAL 1
#define CONFIG_BOOT_SERIAL_UART 1
#define CONFIG_MCUBOOT_SERIAL_DIRECT_IMAGE_UPLOAD 1
#define CONFIG_BOOT_SERIAL_UNALIGNED_BUFFER_SIZE 64
#define CONFIG_BOOT_MAX_LINE_INPUT_LEN 128
#define CONFIG_BOOT_LINE_BUFS 8
#define CONFIG_BOOT_SERIAL_MAX_RECEIVE_SIZE 1024
#define CONFIG_BOOT_SERIAL_ENTRANCE_GPIO 1
#define CONFIG_BOOT_SERIAL_DETECT_DELAY 0
#define CONFIG_BOOT_SERIAL_IMG_GRP_IMAGE_STATE 1
#define CONFIG_BOOT_SERIAL_IMG_GRP_SLOT_INFO 1
#define CONFIG_UPDATEABLE_IMAGE_NUMBER 2
#define CONFIG_BOOT_WATCHDOG_FEED 1
#define CONFIG_BOOT_WATCHDOG_FEED_NRFX_WDT 1
#define CONFIG_BOOT_FIH_PROFILE_DEFAULT_LOW 1
#define CONFIG_MCUBOOT_DEVICE_SETTINGS 1
#define CONFIG_MULTITHREADING 1
#define CONFIG_USB_DEVICE_PRODUCT "MCUBOOT"
#define CONFIG_UART_INTERRUPT_DRIVEN 1
#define CONFIG_FLASH_LOAD_SIZE 0x40000
#define CONFIG_FLASH_LOAD_OFFSET 0x10000
#define CONFIG_HW_STACK_PROTECTION 1
#define CONFIG_SECURE_BOOT 1
#define CONFIG_SRAM_SIZE 256
#define CONFIG_HEAP_MEM_POOL_SIZE 0
#define CONFIG_NUM_IRQS 65
#define CONFIG_SYS_CLOCK_HW_CYCLES_PER_SEC 32768
#define CONFIG_FLASH_SIZE 1024
#define CONFIG_FLASH_BASE_ADDRESS 0x0
#define CONFIG_MP_MAX_NUM_CPUS 1
#define CONFIG_SOC_RESET_HOOK 1
#define CONFIG_MAIN_STACK_SIZE 10240
#define CONFIG_IDLE_STACK_SIZE 320
#define CONFIG_ISR_STACK_SIZE 2048
#define CONFIG_CLOCK_CONTROL 1
#define CONFIG_SYS_CLOCK_TICKS_PER_SEC 32768
#define CONFIG_ROM_START_OFFSET 0x0
#define CONFIG_KERNEL_ENTRY "__start"
#define CONFIG_BUILD_OUTPUT_BIN 1
#define CONFIG_XIP 1
#define CONFIG_HAS_FLASH_LOAD_OFFSET 1
#define CONFIG_CPU_HAS_ARM_MPU 1
#define CONFIG_TICKLESS_KERNEL 1
#define CONFIG_SYSTEM_WORKQUEUE_STACK_SIZE 1024
#define CONFIG_CLOCK_CONTROL_INIT_PRIORITY 30
#define CONFIG_USE_DT_CODE_PARTITION 1
#define CONFIG_GEN_IRQ_VECTOR_TABLE 1
#define CONFIG_GEN_ISR_TABLES 1
#define CONFIG_TIMESLICE_SIZE 0
#define CONFIG_SYS_CLOCK_EXISTS 1
#define CONFIG_INIT_ARCH_HW_AT_BOOT 1
#define CONFIG_FLASH_FILL_BUFFER_SIZE 32
#define CONFIG_ARCH_HAS_CUSTOM_BUSY_WAIT 1
#define CONFIG_GPIO 1
#define CONFIG_SERIAL 1
#define CONFIG_SPI 1
#define CONFIG_LOG 1
#define CONFIG_CMSIS_CORE_HAS_SYSTEM_CORE_CLOCK 1
#define CONFIG_DCACHE_LINE_SIZE 32
#define CONFIG_ARCH_SW_ISR_TABLE_ALIGN 4
#define CONFIG_NRF_RTC_TIMER 1
#define CONFIG_LOG_DOMAIN_NAME ""
#define CONFIG_BUILD_OUTPUT_HEX 1
#define CONFIG_SOC_HAS_TIMING_FUNCTIONS 1
#define CONFIG_SERIAL_INIT_PRIORITY 50
#define CONFIG_COMMON_LIBC_MALLOC_ARENA_SIZE 0
#define CONFIG_SOC_TOOLCHAIN_NAME "amd_acp_6_0_adsp"
#define CONFIG_GEN_SW_ISR_TABLE 1
#define CONFIG_REBOOT 1
#define CONFIG_FLASH_INIT_PRIORITY 50
#define CONFIG_GEN_IRQ_START_VECTOR 0
#define CONFIG_SRAM_OFFSET 0x0
#define CONFIG_ARCH_IRQ_VECTOR_TABLE_ALIGN 4
#define CONFIG_SPI_NOR 1
#define CONFIG_MINIMAL_LIBC_OPTIMIZE_STRING_FOR_SIZE 1
#define CONFIG_ICACHE_LINE_SIZE 32
#define CONFIG_DT_HAS_ARM_ARMV8M_MPU_ENABLED 1
#define CONFIG_DT_HAS_ARM_CORTEX_M33F_ENABLED 1
#define CONFIG_DT_HAS_ARM_CRYPTOCELL_310_ENABLED 1
#define CONFIG_DT_HAS_ARM_V8M_NVIC_ENABLED 1
#define CONFIG_DT_HAS_FIXED_PARTITIONS_ENABLED 1
#define CONFIG_DT_HAS_GPIO_KEYS_ENABLED 1
#define CONFIG_DT_HAS_GPIO_LEDS_ENABLED 1
#define CONFIG_DT_HAS_JEDEC_SPI_NOR_ENABLED 1
#define CONFIG_DT_HAS_MMIO_SRAM_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NPM1300_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NPM1300_CHARGER_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NPM1300_GPIO_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NPM1300_REGULATOR_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_CLOCK_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_CTRLAPPERI_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_DPPIC_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_EGU_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_FICR_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_GPIO_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_GPIOTE_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_GPREGRET_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_IPC_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_KMU_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_PINCTRL_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_POWER_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_PWM_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_SAADC_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_SPIM_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_SPU_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_TIMER_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_TWIM_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_UARTE_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_UICR_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_VMC_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_WDT_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF91_FLASH_CONTROLLER_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF91X_REGULATORS_ENABLED 1
#define CONFIG_DT_HAS_PWM_LEDS_ENABLED 1
#define CONFIG_DT_HAS_SOC_NV_FLASH_ENABLED 1
#define CONFIG_DT_HAS_ZEPHYR_BT_HCI_ENTROPY_ENABLED 1
#define CONFIG_NUM_METAIRQ_PRIORITIES 0
#define CONFIG_MPSL_WORK_STACK_SIZE 1024
#define CONFIG_WARN_EXPERIMENTAL 1
#define CONFIG_MCUMGR_TRANSPORT_NETBUF_SIZE 1024
#define CONFIG_NORDIC_QSPI_NOR_FLASH_LAYOUT_PAGE_SIZE 4096
#define CONFIG_NRF_SECURITY_ENABLER 1
#define CONFIG_SB_MONOTONIC_COUNTER 1
#define CONFIG_SB_NUM_VER_COUNTER_SLOTS 20
#define CONFIG_PM_PARTITION_SIZE_PROVISION 0x280
#define CONFIG_PM_PARTITION_SIZE_B0_IMAGE 0x8000
#define CONFIG_IS_BOOTLOADER_IMG 1
#define CONFIG_SECURE_BOOT_CRYPTO 1
#define CONFIG_SB_ECDSA_SECP256R1 1
#define CONFIG_SB_SHA256 1
#define CONFIG_SB_SIGNATURE_LEN 64
#define CONFIG_SB_PUBLIC_KEY_LEN 64
#define CONFIG_SB_HASH_LEN 32
#define CONFIG_SB_CRYPTO_CLIENT_ECDSA_SECP256R1 1
#define CONFIG_SB_CRYPTO_CLIENT_SHA256 1
#define CONFIG_BL_ROT_VERIFY_EXT_API_UNUSED 1
#define CONFIG_BL_SHA256_EXT_API_REQUIRED 1
#define CONFIG_BL_SHA256_EXT_API_AT_LEAST_REQUIRED 1
#define CONFIG_BL_SHA256_EXT_API_ID 0x1002
#define CONFIG_BL_SHA256_EXT_API_FLAGS 0
#define CONFIG_BL_SHA256_EXT_API_VER 1
#define CONFIG_BL_SHA256_EXT_API_MAX_VER 255
#define CONFIG_BL_SECP256R1_EXT_API_REQUIRED 1
#define CONFIG_BL_SECP256R1_EXT_API_AT_LEAST_REQUIRED 1
#define CONFIG_BL_SECP256R1_EXT_API_ID 0x1003
#define CONFIG_BL_SECP256R1_EXT_API_FLAGS 1
#define CONFIG_BL_SECP256R1_EXT_API_VER 1
#define CONFIG_BL_SECP256R1_EXT_API_MAX_VER 255
#define CONFIG_SB_CRYPTO_LOG_LEVEL_DEFAULT 1
#define CONFIG_SB_CRYPTO_LOG_LEVEL 0
#define CONFIG_SB_VALIDATION_INFO_MAGIC 0x86518483
#define CONFIG_SB_VALIDATION_POINTER_MAGIC 0x6919b47e
#define CONFIG_SB_VALIDATION_INFO_CRYPTO_ID 1
#define CONFIG_SB_VALIDATION_INFO_VERSION 2
#define CONFIG_SB_VALIDATION_METADATA_OFFSET 0
#define CONFIG_SB_VALIDATION_STRUCT_HAS_HASH 1
#define CONFIG_SB_VALIDATION_STRUCT_HAS_PUBLIC_KEY 1
#define CONFIG_SB_VALIDATE_FW_SIGNATURE 1
#define CONFIG_SYSTEM_WORKQUEUE_PRIORITY -1
#define CONFIG_PCD_VERSION_PAGE_BUF_SIZE 2046
#define CONFIG_FW_INFO 1
#define CONFIG_FW_INFO_OFFSET 0x200
#define CONFIG_FW_INFO_FIRMWARE_VERSION 2
#define CONFIG_FW_INFO_MAGIC_COMMON 0x281ee6de
#define CONFIG_FW_INFO_MAGIC_FIRMWARE_INFO 0x8fcebb4c
#define CONFIG_FW_INFO_MAGIC_EXT_API 0xb845acea
#define CONFIG_FW_INFO_HARDWARE_ID 91
#define CONFIG_FW_INFO_VERSION 2
#define CONFIG_FW_INFO_CRYPTO_ID 0
#define CONFIG_FW_INFO_MAGIC_COMPATIBILITY_ID 0
#define CONFIG_FW_INFO_MAGIC_LEN 12
#define CONFIG_FW_INFO_VALID_VAL 0x9102FFFF
#define CONFIG_EXT_API_PROVIDE_EXT_API_UNUSED 1
#define CONFIG_MPSL_FEM_LOG_LEVEL_DEFAULT 1
#define CONFIG_MPSL_FEM_LOG_LEVEL 0
#define CONFIG_MPSL_THREAD_COOP_PRIO 8
#define CONFIG_MPSL_TIMESLOT_SESSION_COUNT 0
#define CONFIG_MPSL_HFCLK_LATENCY 1400
#define CONFIG_MPSL_INIT_PRIORITY 40
#define CONFIG_MPSL_LOG_LEVEL_DEFAULT 1
#define CONFIG_MPSL_LOG_LEVEL 0
#define CONFIG_PARTITION_MANAGER_ENABLED 1
#define CONFIG_FLASH_MAP_CUSTOM 1
#define CONFIG_SRAM_BASE_ADDRESS 0x20000000
#define CONFIG_NRF_TRUSTZONE_FLASH_REGION_SIZE 0x8000
#define CONFIG_NRF_TRUSTZONE_RAM_REGION_SIZE 0x2000
#define CONFIG_PM_EXTERNAL_FLASH_HAS_DRIVER 1
#define CONFIG_PM_EXTERNAL_FLASH_BASE 0x0
#define CONFIG_PM_EXTERNAL_FLASH_ENABLED 1
#define CONFIG_PM_EXTERNAL_FLASH_PATH "/soc/peripheral@50000000/spi@b000/GD25LE255E@0"
#define CONFIG_PM_EXTERNAL_FLASH_SIZE_BITS 268435456
#define CONFIG_PM_EXTERNAL_FLASH_MCUBOOT_SECONDARY 1
#define CONFIG_PM_OVERRIDE_EXTERNAL_DRIVER_CHECK 1
#define CONFIG_PM_SRAM_BASE 0x20000000
#define CONFIG_PM_SRAM_SIZE 0x40000
#define CONFIG_MCUBOOT_APPLICATION_IMAGE_NUMBER 0
#define CONFIG_MCUBOOT_NETWORK_CORE_IMAGE_NUMBER -1
#define CONFIG_MCUBOOT_WIFI_PATCHES_IMAGE_NUMBER -1
#define CONFIG_MCUBOOT_QSPI_XIP_IMAGE_NUMBER -1
#define CONFIG_MCUBOOT_MCUBOOT_IMAGE_NUMBER 1
#define CONFIG_MCUBOOT_MCUBOOT_S0_S1_VERSION_MAJOR 0
#define CONFIG_MCUBOOT_MCUBOOT_S0_S1_VERSION_MINOR 0
#define CONFIG_MCUBOOT_MCUBOOT_S0_S1_VERSION_REVISION 0
#define CONFIG_MCUBOOT_MCUBOOT_S0_S1_VERSION_BUILD_NUMBER 0
#define CONFIG_WFA_QT_LOG_LEVEL_DEFAULT 1
#define CONFIG_WFA_QT_LOG_LEVEL 0
#define CONFIG_WFA_QT_THREAD_STACK_SIZE 5200
#define CONFIG_WFA_QT_REBOOT_TIMEOUT_MS 1000
#define CONFIG_WFA_QT_DEFAULT_INTERFACE "wlan0"
#define CONFIG_WPAS_READY_TIMEOUT_MS 10000
#define CONFIG_NRF_SPU_FLASH_REGION_SIZE 0x8000
#define CONFIG_FPROTECT_BLOCK_SIZE 0x8000
#define CONFIG_FPROTECT 1
#define CONFIG_HW_UNIQUE_KEY_SUPPORTED 1
#define CONFIG_HW_UNIQUE_KEY_PARTITION_SIZE 0x0
#define CONFIG_NCS_BOOT_BANNER 1
#define CONFIG_NCS_APPLICATION_BOOT_BANNER_STRING "MCUboot"
#define CONFIG_NCS_NCS_BOOT_BANNER_STRING "nRF Connect SDK"
#define CONFIG_NCS_ZEPHYR_BOOT_BANNER_STRING "Zephyr OS"
#define CONFIG_HW_CC3XX 1
#define CONFIG_SOC_FLASH_NRF_RADIO_SYNC_MPSL_TIMESLOT_SESSION_COUNT 0
#define CONFIG_NRFX_GPIOTE_NUM_OF_EVT_HANDLERS 1
#define CONFIG_ZEPHYR_NRF_MODULE 1
#define CONFIG_ZEPHYR_HOSTAP_MODULE 1
#define CONFIG_DT_FLASH_WRITE_BLOCK_SIZE 4
#define CONFIG_ZEPHYR_MCUBOOT_MODULE 1
#define CONFIG_ZEPHYR_MBEDTLS_MODULE 1
#define CONFIG_ZEPHYR_OBERON_PSA_CRYPTO_MODULE 1
#define CONFIG_TFM_BOARD "C:/ncs/v3.0.0/zephyr/modules/trusted-firmware-m/nordic/nrf9120"
#define CONFIG_ZEPHYR_TRUSTED_FIRMWARE_M_MODULE 1
#define CONFIG_ZEPHYR_PSA_ARCH_TESTS_MODULE 1
#define CONFIG_ZEPHYR_CJSON_MODULE 1
#define CONFIG_ZEPHYR_AZURE_SDK_FOR_C_MODULE 1
#define CONFIG_ZEPHYR_CIRRUS_LOGIC_MODULE 1
#define CONFIG_ZEPHYR_OPENTHREAD_MODULE 1
#define CONFIG_SUIT_ENVELOPE_TEMPLATE_FILENAME ""
#define CONFIG_SUIT_ENVELOPE_TARGET ""
#define CONFIG_SUIT_ENVELOPE_OUTPUT_ARTIFACT "merged.hex"
#define CONFIG_ZEPHYR_SUIT_GENERATOR_MODULE 1
#define CONFIG_SUIT_PLATFORM_DRY_RUN_SUPPORT 1
#define CONFIG_ZEPHYR_SUIT_PROCESSOR_MODULE 1
#define CONFIG_ZEPHYR_MEMFAULT_FIRMWARE_SDK_MODULE 1
#define CONFIG_ZEPHYR_COREMARK_MODULE 1
#define CONFIG_ZEPHYR_CANOPENNODE_MODULE 1
#define CONFIG_ZEPHYR_CHRE_MODULE 1
#define CONFIG_ZEPHYR_LZ4_MODULE 1
#define CONFIG_ZEPHYR_NANOPB_MODULE 1
#define CONFIG_ZEPHYR_TF_M_TESTS_MODULE 1
#define CONFIG_ZEPHYR_ZSCILIB_MODULE 1
#define CONFIG_ZEPHYR_CMSIS_MODULE 1
#define CONFIG_HAS_CMSIS_CORE 1
#define CONFIG_HAS_CMSIS_CORE_M 1
#define CONFIG_ZEPHYR_CMSIS_DSP_MODULE 1
#define CONFIG_ZEPHYR_CMSIS_NN_MODULE 1
#define CONFIG_ZEPHYR_FATFS_MODULE 1
#define CONFIG_ZEPHYR_HAL_NORDIC_MODULE 1
#define CONFIG_HAS_NRFX 1
#define CONFIG_NRFX_CLOCK 1
#define CONFIG_NRFX_CLOCK_LFXO_TWO_STAGE_ENABLED 1
#define CONFIG_NRFX_DPPI 1
#define CONFIG_NRFX_DPPI0 1
#define CONFIG_NRFX_GPIOTE 1
#define CONFIG_NRFX_GPIOTE0 1
#define CONFIG_NRFX_GPPI 1
#define CONFIG_NRFX_NVMC 1
#define CONFIG_NRFX_SPIM 1
#define CONFIG_NRFX_SPIM3 1
#define CONFIG_NRFX_WDT 1
#define CONFIG_NRFX_WDT0 1
#define CONFIG_NRFX_RESERVED_RESOURCES_HEADER "nrfx_config_reserved_resources_ncs.h"
#define CONFIG_ZEPHYR_HAL_ST_MODULE 1
#define CONFIG_ZEPHYR_HAL_TDK_MODULE 1
#define CONFIG_ZEPHYR_HAL_WURTHELEKTRONIK_MODULE 1
#define CONFIG_ZEPHYR_LIBLC3_MODULE 1
#define CONFIG_ZEPHYR_LIBMETAL_MODULE 1
#define CONFIG_ZEPHYR_LITTLEFS_MODULE 1
#define CONFIG_ZEPHYR_LORAMAC_NODE_MODULE 1
#define CONFIG_ZEPHYR_LVGL_MODULE 1
#define CONFIG_ZEPHYR_MIPI_SYS_T_MODULE 1
#define CONFIG_ZEPHYR_NRF_WIFI_MODULE 1
#define CONFIG_ZEPHYR_OPEN_AMP_MODULE 1
#define CONFIG_ZEPHYR_PERCEPIO_MODULE 1
#define CONFIG_ZEPHYR_PICOLIBC_MODULE 1
#define CONFIG_ZEPHYR_SEGGER_MODULE 1
#define CONFIG_HAS_SEGGER_RTT 1
#define CONFIG_ZEPHYR_TINYCRYPT_MODULE 1
#define CONFIG_ZEPHYR_UOSCORE_UEDHOC_MODULE 1
#define CONFIG_ZEPHYR_ZCBOR_MODULE 1
#define CONFIG_ZCBOR 1
#define CONFIG_ZCBOR_MAX_STR_LEN 256
#define CONFIG_NRF_MODEM_SHMEM_CTRL_SIZE 0x4e8
#define CONFIG_HAS_HW_NRF_CC3XX 1
#define CONFIG_NRF_OBERON 1
#define CONFIG_NRF_CC3XX_PLATFORM 1
#define CONFIG_CC3XX_MUTEX_LOCK 1
#define CONFIG_NRF_802154_SOURCE_NRFXLIB 1
#define CONFIG_ZEPHYR_NRFXLIB_MODULE 1
#define CONFIG_ZEPHYR_NRF_HW_MODELS_MODULE 1
#define CONFIG_ZEPHYR_CONNECTEDHOMEIP_MODULE 1
#define CONFIG_MCUBOOT_BOOTUTIL_LIB 1
#define CONFIG_BOARD "thingy91x"
#define CONFIG_BOARD_REVISION ""
#define CONFIG_BOARD_TARGET "thingy91x/nrf9151"
#define CONFIG_BOARD_THINGY91X 1
#define CONFIG_BOARD_THINGY91X_NRF9151 1
#define CONFIG_BOARD_QUALIFIERS "nrf9151"
#define CONFIG_BOARD_LOG_LEVEL_DEFAULT 1
#define CONFIG_BOARD_LOG_LEVEL 0
#define CONFIG_SOC "nrf9151"
#define CONFIG_SOC_SERIES "nrf91"
#define CONFIG_SOC_FAMILY "nordic_nrf"
#define CONFIG_SOC_FAMILY_NORDIC_NRF 1
#define CONFIG_SOC_SERIES_NRF91X 1
#define CONFIG_SOC_NRF9120 1
#define CONFIG_SOC_NRF9151_LACA 1
#define CONFIG_HAS_HW_NRF_CC310 1
#define CONFIG_HAS_HW_NRF_CLOCK 1
#define CONFIG_HAS_HW_NRF_CTRLAP 1
#define CONFIG_HAS_HW_NRF_DPPIC 1
#define CONFIG_HAS_HW_NRF_EGU0 1
#define CONFIG_HAS_HW_NRF_EGU1 1
#define CONFIG_HAS_HW_NRF_EGU2 1
#define CONFIG_HAS_HW_NRF_EGU3 1
#define CONFIG_HAS_HW_NRF_EGU4 1
#define CONFIG_HAS_HW_NRF_EGU5 1
#define CONFIG_HAS_HW_NRF_GPIO0 1
#define CONFIG_HAS_HW_NRF_GPIOTE0 1
#define CONFIG_HAS_HW_NRF_KMU 1
#define CONFIG_HAS_HW_NRF_NVMC_PE 1
#define CONFIG_HAS_HW_NRF_POWER 1
#define CONFIG_HAS_HW_NRF_PWM0 1
#define CONFIG_HAS_HW_NRF_SAADC 1
#define CONFIG_HAS_HW_NRF_SPIM3 1
#define CONFIG_HAS_HW_NRF_SPU 1
#define CONFIG_HAS_HW_NRF_TIMER0 1
#define CONFIG_HAS_HW_NRF_TIMER1 1
#define CONFIG_HAS_HW_NRF_TIMER2 1
#define CONFIG_HAS_HW_NRF_TWIM2 1
#define CONFIG_HAS_HW_NRF_UARTE0 1
#define CONFIG_HAS_HW_NRF_UARTE1 1
#define CONFIG_HAS_HW_NRF_VMC 1
#define CONFIG_HAS_HW_NRF_WDT0 1
#define CONFIG_NRF_ENABLE_ICACHE 1
#define CONFIG_NRF_SPU_RAM_REGION_SIZE 0x2000
#define CONFIG_NRF_RTC_TIMER_USER_CHAN_COUNT 0
#define CONFIG_NRF_SOC_SECURE_SUPPORTED 1
#define CONFIG_NRF_APPROTECT_USE_UICR 1
#define CONFIG_NRF_SECURE_APPROTECT_USE_UICR 1
#define CONFIG_GPIO_INIT_PRIORITY 40
#define CONFIG_SOC_LOG_LEVEL_DEFAULT 1
#define CONFIG_SOC_LOG_LEVEL 0
#define CONFIG_SOC_COMPATIBLE_NRF 1
#define CONFIG_ARCH "arm"
#define CONFIG_ARCH_HAS_SINGLE_THREAD_SUPPORT 1
#define CONFIG_CPU_CORTEX 1
#define CONFIG_ARM_MPU_REGION_MIN_ALIGN_AND_SIZE 4
#define CONFIG_CPU_CORTEX_M 1
#define CONFIG_ISA_THUMB2 1
#define CONFIG_ASSEMBLER_ISA_THUMB2 1
#define CONFIG_COMPILER_ISA_THUMB2 1
#define CONFIG_STACK_ALIGN_DOUBLE_WORD 1
#define CONFIG_FAULT_DUMP 2
#define CONFIG_BUILTIN_STACK_GUARD 1
#define CONFIG_ARM_STACK_PROTECTION 1
#define CONFIG_FP16 1
#define CONFIG_FP16_IEEE 1
#define CONFIG_CPU_CORTEX_M33 1
#define CONFIG_CPU_CORTEX_M_HAS_SYSTICK 1
#define CONFIG_CPU_CORTEX_M_HAS_DWT 1
#define CONFIG_CPU_CORTEX_M_HAS_BASEPRI 1
#define CONFIG_CPU_CORTEX_M_HAS_VTOR 1
#define CONFIG_CPU_CORTEX_M_HAS_SPLIM 1
#define CONFIG_CPU_CORTEX_M_HAS_PROGRAMMABLE_FAULT_PRIOS 1
#define CONFIG_CPU_CORTEX_M_HAS_CMSE 1
#define CONFIG_ARMV7_M_ARMV8_M_MAINLINE 1
#define CONFIG_ARMV8_M_MAINLINE 1
#define CONFIG_ARMV8_M_SE 1
#define CONFIG_ARMV7_M_ARMV8_M_FP 1
#define CONFIG_ARMV8_M_DSP 1
#define CONFIG_NULL_POINTER_EXCEPTION_DETECTION_NONE 1
#define CONFIG_ARM_TRUSTZONE_M 1
#define CONFIG_CPU_HAS_NRF_IDAU 1
#define CONFIG_ARM 1
#define CONFIG_ARCH_IS_SET 1
#define CONFIG_ARCH_LOG_LEVEL_DEFAULT 1
#define CONFIG_ARCH_LOG_LEVEL 0
#define CONFIG_LITTLE_ENDIAN 1
#define CONFIG_GEN_PRIV_STACKS 1
#define CONFIG_ISR_TABLES_LOCAL_DECLARATION_SUPPORTED 1
#define CONFIG_IRQ_VECTOR_TABLE_JUMP_BY_ADDRESS 1
#define CONFIG_EXCEPTION_DEBUG 1
#define CONFIG_ARCH_HAS_TIMING_FUNCTIONS 1
#define CONFIG_ARCH_HAS_TRUSTED_EXECUTION 1
#define CONFIG_ARCH_HAS_STACK_PROTECTION 1
#define CONFIG_ARCH_HAS_RAMFUNC_SUPPORT 1
#define CONFIG_ARCH_HAS_NESTED_EXCEPTION_DETECTION 1
#define CONFIG_ARCH_SUPPORTS_COREDUMP 1
#define CONFIG_ARCH_SUPPORTS_COREDUMP_THREADS 1
#define CONFIG_ARCH_SUPPORTS_ARCH_HW_INIT 1
#define CONFIG_ARCH_SUPPORTS_ROM_START 1
#define CONFIG_ARCH_HAS_EXTRA_EXCEPTION_INFO 1
#define CONFIG_ARCH_HAS_THREAD_LOCAL_STORAGE 1
#define CONFIG_ARCH_HAS_SUSPEND_TO_RAM 1
#define CONFIG_ARCH_HAS_THREAD_ABORT 1
#define CONFIG_ARCH_HAS_CODE_DATA_RELOCATION 1
#define CONFIG_CPU_HAS_TEE 1
#define CONFIG_CPU_HAS_FPU 1
#define CONFIG_CPU_HAS_MPU 1
#define CONFIG_TOOLCHAIN_HAS_BUILTIN_FFS 1
#define CONFIG_ARCH_HAS_CUSTOM_SWAP_TO_MAIN 1
#define CONFIG_KERNEL_LOG_LEVEL_DEFAULT 1
#define CONFIG_KERNEL_LOG_LEVEL 0
#define CONFIG_NUM_COOP_PRIORITIES 16
#define CONFIG_NUM_PREEMPT_PRIORITIES 15
#define CONFIG_MAIN_THREAD_PRIORITY 0
#define CONFIG_COOP_ENABLED 1
#define CONFIG_PREEMPT_ENABLED 1
#define CONFIG_PRIORITY_CEILING -127
#define CONFIG_THREAD_STACK_INFO 1
#define CONFIG_SCHED_SIMPLE 1
#define CONFIG_WAITQ_SIMPLE 1
#define CONFIG_ERRNO 1
#define CONFIG_BOOT_DELAY 0
#define CONFIG_BARRIER_OPERATIONS_ARCH 1
#define CONFIG_ATOMIC_OPERATIONS_BUILTIN 1
#define CONFIG_TIMESLICING 1
#define CONFIG_TIMESLICE_PRIORITY 0
#define CONFIG_NUM_MBOX_ASYNC_MSGS 10
#define CONFIG_KERNEL_MEM_POOL 1
#define CONFIG_SWAP_NONATOMIC 1
#define CONFIG_TIMEOUT_64BIT 1
#define CONFIG_SYS_CLOCK_MAX_TIMEOUT_DAYS 365
#define CONFIG_TOOLCHAIN_SUPPORTS_THREAD_LOCAL_STORAGE 1
#define CONFIG_TOOLCHAIN_SUPPORTS_STATIC_INIT_GNU 1
#define CONFIG_KERNEL_INIT_PRIORITY_OBJECTS 30
#define CONFIG_KERNEL_INIT_PRIORITY_LIBC 35
#define CONFIG_KERNEL_INIT_PRIORITY_DEFAULT 40
#define CONFIG_KERNEL_INIT_PRIORITY_DEVICE 50
#define CONFIG_APPLICATION_INIT_PRIORITY 90
#define CONFIG_FLASH 1
#define CONFIG_CLOCK_CONTROL_LOG_LEVEL_DEFAULT 1
#define CONFIG_CLOCK_CONTROL_LOG_LEVEL 0
#define CONFIG_CLOCK_CONTROL_NRF 1
#define CONFIG_CLOCK_CONTROL_NRF_K32SRC_XTAL 1
#define CONFIG_CLOCK_CONTROL_NRF_K32SRC_50PPM 1
#define CONFIG_CLOCK_CONTROL_NRF_ACCURACY 50
#define CONFIG_FLASH_HAS_DRIVER_ENABLED 1
#define CONFIG_FLASH_HAS_EX_OP 1
#define CONFIG_FLASH_HAS_EXPLICIT_ERASE 1
#define CONFIG_FLASH_HAS_PAGE_LAYOUT 1
#define CONFIG_FLASH_JESD216 1
#define CONFIG_FLASH_PAGE_LAYOUT 1
#define CONFIG_SPI_NOR_SFDP_DEVICETREE 1
#define CONFIG_SPI_NOR_INIT_PRIORITY 80
#define CONFIG_SPI_NOR_CS_WAIT_DELAY 0
#define CONFIG_SPI_NOR_SLEEP_WHILE_WAITING_UNTIL_READY 1
#define CONFIG_SPI_NOR_FLASH_LAYOUT_PAGE_SIZE 4096
#define CONFIG_SOC_FLASH_NRF 1
#define CONFIG_SOC_FLASH_NRF_RADIO_SYNC_NONE 1
#define CONFIG_FLASH_LOG_LEVEL_DEFAULT 1
#define CONFIG_FLASH_LOG_LEVEL 0
#define CONFIG_GPIO_LOG_LEVEL_DEFAULT 1
#define CONFIG_GPIO_LOG_LEVEL 0
#define CONFIG_GPIO_NRFX 1
#define CONFIG_GPIO_NRFX_INTERRUPT 1
#define CONFIG_INTC_INIT_PRIORITY 40
#define CONFIG_INTC_LOG_LEVEL_DEFAULT 1
#define CONFIG_INTC_LOG_LEVEL 0
#define CONFIG_PINCTRL 1
#define CONFIG_PINCTRL_LOG_LEVEL_DEFAULT 1
#define CONFIG_PINCTRL_LOG_LEVEL 0
#define CONFIG_PINCTRL_STORE_REG 1
#define CONFIG_PINCTRL_NRF 1
#define CONFIG_SERIAL_HAS_DRIVER 1
#define CONFIG_SERIAL_SUPPORT_ASYNC 1
#define CONFIG_SERIAL_SUPPORT_INTERRUPT 1
#define CONFIG_UART_LOG_LEVEL_DEFAULT 1
#define CONFIG_UART_LOG_LEVEL 0
#define CONFIG_UART_NRFX 1
#define CONFIG_UART_NRFX_UARTE 1
#define CONFIG_UART_NRFX_UARTE_LEGACY_SHIM 1
#define CONFIG_UART_0_INTERRUPT_DRIVEN 1
#define CONFIG_UART_0_ENHANCED_POLL_OUT 1
#define CONFIG_UART_0_NRF_TX_BUFFER_SIZE 32
#define CONFIG_UART_1_INTERRUPT_DRIVEN 1
#define CONFIG_UART_1_ENHANCED_POLL_OUT 1
#define CONFIG_UART_1_NRF_TX_BUFFER_SIZE 32
#define CONFIG_SPI_INIT_PRIORITY 50
#define CONFIG_SPI_COMPLETION_TIMEOUT_TOLERANCE 200
#define CONFIG_SPI_LOG_LEVEL_DEFAULT 1
#define CONFIG_SPI_LOG_LEVEL 0
#define CONFIG_SPI_NRFX 1
#define CONFIG_SPI_NRFX_SPIM 1
#define CONFIG_SPI_NRFX_RAM_BUFFER_SIZE 8
#define CONFIG_SPI_NRFX_WAKE_TIMEOUT_US 200
#define CONFIG_SYSTEM_CLOCK_INIT_PRIORITY 0
#define CONFIG_TICKLESS_CAPABLE 1
#define CONFIG_SYSTEM_TIMER_HAS_DISABLE_SUPPORT 1
#define CONFIG_SYSTEM_CLOCK_WAIT_FOR_STABILITY 1
#define CONFIG_NRF_USBD_COMMON_LOG_LEVEL_DEFAULT 1
#define CONFIG_NRF_USBD_COMMON_LOG_LEVEL 0
#define CONFIG_USBC_LOG_LEVEL_DEFAULT 1
#define CONFIG_USBC_LOG_LEVEL 0
#define CONFIG_FULL_LIBC_SUPPORTED 1
#define CONFIG_MINIMAL_LIBC_SUPPORTED 1
#define CONFIG_NEWLIB_LIBC_SUPPORTED 1
#define CONFIG_PICOLIBC_SUPPORTED 1
#define CONFIG_MINIMAL_LIBC 1
#define CONFIG_HAS_NEWLIB_LIBC_NANO 1
#define CONFIG_COMMON_LIBC_ABORT 1
#define CONFIG_COMMON_LIBC_ASCTIME 1
#define CONFIG_COMMON_LIBC_ASCTIME_R 1
#define CONFIG_COMMON_LIBC_CTIME 1
#define CONFIG_COMMON_LIBC_CTIME_R 1
#define CONFIG_COMMON_LIBC_GMTIME_R 1
#define CONFIG_COMMON_LIBC_LOCALTIME_R_UTC 1
#define CONFIG_COMMON_LIBC_MALLOC 1
#define CONFIG_COMMON_LIBC_CALLOC 1
#define CONFIG_COMMON_LIBC_REALLOCARRAY 1
#define CONFIG_COMMON_LIBC_STRNLEN 1
#define CONFIG_MINIMAL_LIBC_NON_REENTRANT_FUNCTIONS 1
#define CONFIG_MINIMAL_LIBC_TIME 1
#define CONFIG_NEED_LIBC_MEM_PARTITION 1
#define CONFIG_CRC 1
#define CONFIG_SYS_HEAP_ALLOC_LOOPS 3
#define CONFIG_SYS_HEAP_AUTO 1
#define CONFIG_ZVFS_OPEN_MAX 4
#define CONFIG_HAS_POWEROFF 1
#define CONFIG_CBPRINTF_NANO 1
#define CONFIG_CBPRINTF_FULL_INTEGRAL 1
#define CONFIG_CBPRINTF_LIBC_SUBSTS 1
#define CONFIG_CBPRINTF_PACKAGE_LOG_LEVEL_DEFAULT 1
#define CONFIG_CBPRINTF_PACKAGE_LOG_LEVEL 0
#define CONFIG_CBPRINTF_CONVERT_CHECK_PTR 1
#define CONFIG_POSIX_AEP_CHOICE_NONE 1
#define CONFIG_POSIX_C_LANG_SUPPORT_R 1
#define CONFIG_POSIX_OPEN_MAX 4
#define CONFIG_POSIX_PAGE_SIZE 0x40
#define CONFIG_EVENTFD_MAX 0
#define CONFIG_MAX_PTHREAD_COUNT 0
#define CONFIG_MAX_PTHREAD_KEY_COUNT 0
#define CONFIG_MAX_TIMER_COUNT 0
#define CONFIG_MSG_COUNT_MAX 0
#define CONFIG_POSIX_LIMITS_RTSIG_MAX 0
#define CONFIG_POSIX_MAX_FDS 4
#define CONFIG_POSIX_MAX_OPEN_FILES 4
#define CONFIG_TIMER_DELAYTIMER_MAX 0
#define CONFIG_SEM_NAMELEN_MAX 0
#define CONFIG_SEM_VALUE_MAX 0
#define CONFIG_LIBGCC_RTLIB 1
#define CONFIG_NOTIFY 1
#define CONFIG_BASE64 1
#define CONFIG_ONOFF 1
#define CONFIG_PRINTK 1
#define CONFIG_EARLY_CONSOLE 1
#define CONFIG_ASSERT_VERBOSE 1
#define CONFIG_LLEXT_EDK_NAME "llext-edk"
#define CONFIG_LOG_CORE_INIT_PRIORITY 0
#define CONFIG_LOG_MODE_MINIMAL 1
#define CONFIG_LOG_DEFAULT_LEVEL 0
#define CONFIG_LOG_OVERRIDE_LEVEL 0
#define CONFIG_LOG_MAX_LEVEL 4
#define CONFIG_LOG_USE_VLA 1
#define CONFIG_LOG_SIMPLE_MSG_OPTIMIZE 1
#define CONFIG_TIMER_RANDOM_INITIAL_STATE 123456789
#define CONFIG_CSPRNG_AVAILABLE 1
#define CONFIG_FLASH_MAP 1
#define CONFIG_TOOLCHAIN_ZEPHYR_0_17 1
#define CONFIG_TOOLCHAIN_ZEPHYR_SUPPORTS_THREAD_LOCAL_STORAGE 1
#define CONFIG_TOOLCHAIN_ZEPHYR_SUPPORTS_GNU_EXTENSIONS 1
#define CONFIG_LINKER_ORPHAN_SECTION_WARN 1
#define CONFIG_ROM_END_OFFSET 0x0
#define CONFIG_LD_LINKER_SCRIPT_SUPPORTED 1
#define CONFIG_LD_LINKER_TEMPLATE 1
#define CONFIG_LINKER_SORT_BY_ALIGNMENT 1
#define CONFIG_LINKER_GENERIC_SECTIONS_PRESENT_AT_BOOT 1
#define CONFIG_LINKER_LAST_SECTION_ID 1
#define CONFIG_LINKER_LAST_SECTION_ID_PATTERN 0xE015E015
#define CONFIG_LINKER_USE_RELAX 1
#define CONFIG_LINKER_ITERABLE_SUBALIGN 4
#define CONFIG_LINKER_DEVNULL_SUPPORT 1
#define CONFIG_STD_C99 1
#define CONFIG_TOOLCHAIN_SUPPORTS_GNU_EXTENSIONS 1
#define CONFIG_COMPILER_FREESTANDING 1
#define CONFIG_SIZE_OPTIMIZATIONS 1
#define CONFIG_COMPILER_TRACK_MACRO_EXPANSION 1
#define CONFIG_COMPILER_COLOR_DIAGNOSTICS 1
#define CONFIG_FORTIFY_SOURCE_NONE 1
#define CONFIG_COMPILER_OPT ""
#define CONFIG_RUNTIME_ERROR_CHECKS 1
#define CONFIG_KERNEL_BIN_NAME "zephyr"
#define CONFIG_OUTPUT_STAT 1
#define CONFIG_OUTPUT_PRINT_MEMORY_USAGE 1
#define CONFIG_BUILD_GAP_FILL_PATTERN 0xFF
#define CONFIG_BUILD_OUTPUT_STRIP_PATHS 1
#define CONFIG_CHECK_INIT_PRIORITIES 1
#define CONFIG_WARN_DEPRECATED 1
#define CONFIG_ENFORCE_ZEPHYR_STDINT 1
#define CONFIG_LEGACY_GENERATED_INCLUDE_PATH 1
