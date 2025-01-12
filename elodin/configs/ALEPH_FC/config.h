#pragma once

#define FC_TARGET_MCU       STM32H743

#define BOARD_NAME          ALEPH_FC
#define MANUFACTURER_ID     ELODIN

#define USE_ACC
#define USE_GYRO
#define USE_ACCGYRO_BMI270

#define SYSTEM_HSE_MHZ      16

#define MOTOR1_PIN          PE11
#define MOTOR2_PIN          PE9
#define MOTOR3_PIN          PE14
#define MOTOR4_PIN          PE13

#define SPI1_SCK_PIN        PG11
#define SPI1_SDI_PIN        PG9
#define SPI1_SDO_PIN        PD7

#define SPI4_SCK_PIN        PE2
#define SPI4_SDI_PIN        PE6
#define SPI4_SDO_PIN        PE5

#define UART1_TX_PIN        PA9
#define UART1_RX_PIN        PA10
#define UART2_TX_PIN        PD5
#define UART2_RX_PIN        PD6
#define UART3_TX_PIN        PD8
#define UART3_RX_PIN        PD9
#define UART4_TX_PIN        PB9
#define UART4_RX_PIN        PB8

#define LED0_PIN            PB15
#define LED1_PIN            PD11
#define LED2_PIN            PD10

#define ADC_VBAT_PIN        PF12
#define ADC_CURR_PIN        PF11

#define TIMUP1_DMA_OPT      0
#define TIMUP2_DMA_OPT      0
#define ADC1_DMA_OPT        8

// SD card
#define USE_SDCARD
#define USE_SDCARD_SDIO
#define SDIO_DEVICE         SDIODEV_1
#define SDIO_USE_4BIT       1
#define SDIO_CK_PIN         PC12
#define SDIO_CMD_PIN        PD2
#define SDIO_D0_PIN         PC8
#define SDIO_D1_PIN         PC9
#define SDIO_D2_PIN         PC10
#define SDIO_D3_PIN         PC11

#define DEFAULT_BLACKBOX_DEVICE         BLACKBOX_DEVICE_SDCARD
#define DEFAULT_CURRENT_METER_SOURCE    CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE    VOLTAGE_METER_ADC
// Defaults are based on PM02 V3 Power Module (12S)
#define DEFAULT_VOLTAGE_METER_SCALE     182
#define DEFAULT_CURRENT_METER_SCALE     275

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PE9,  1, 0) \
    TIMER_PIN_MAP( 1, PE11, 1, 0) \
    TIMER_PIN_MAP( 2, PE13, 1, 0) \
    TIMER_PIN_MAP( 3, PE14, 1, 0)

#define GYRO_1_CS_PIN        PG10
#define GYRO_1_EXTI_PIN      NONE
#define GYRO_1_SPI_INSTANCE  SPI1

#define MSP_UART             SERIAL_PORT_USART1
