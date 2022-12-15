// Dactyl Manuform Hotswap
#pragma once

#include "config_common.h"

//#define PRODUCT_ID 0x0004

// Basic Config
#define SPLIT_HAND_PIN      GP26  // high = left, low = right

// Using Serial instead of I2C
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP16
#define SERIAL_USART_RX_PIN GP17
#define SERIAL_PIO_USE_PIO0
#define SERIAL_USART_TIMEOUT 100  // USART driver timeout. default 100
#define SERIAL_USART_SPEED 921600
#define SERIAL_USART_PIN_SWAP

// RP2040 Settings
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED_MASK 0U
// More RP2040 Settings
#define RP2040_FLASH_AT25SF128A
#define RP2040_FLASH_GD25Q64CS
#define RP2040_FLASH_W25X10CL
#define RP2040_FLASH_IS25LP080
#define RP2040_FLASH_GENERIC_03H

// Bootmagic keys
//#define BOOTMAGIC_LITE_ROW 0           // Esc key on left side
//#define BOOTMAGIC_LITE_COLUMN 0
//#define BOOTMAGIC_LITE_ROW_RIGHT 5     // P key on right side
//#define BOOTMAGIC_LITE_COLUMN_RIGHT 4


/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 5
// Matrix COL and ROW
#define MATRIX_COL_PINS { GP3, GP4, GP5, GP6, GP7 }
#define MATRIX_ROW_PINS { GP10, GP11, GP12, GP13, GP14 }
#define DIODE_DIRECTION COL2ROW

// WS2812 RGB LED strip input and number of LEDs
#ifdef RGBLIGHT_ENABLE
#define RGB_DI_PIN GP17
#define RGBLED_NUM 34
//#define DRIVER_LED_TOTAL 34
#define RGBLED_SPLIT { 17, 17 }
#define STM32_SYSCLK KINETIS_SYSCLK_FREQUENCY
#define NOP_FUDGE 0.4
#endif

// OLED Pins and Driver
#ifdef OLED_ENABLE
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP18
#define I2C1_SCL_PIN GP19
// OLED Options
#define SPLIT_OLED_ENABLE
#define SPLIT_WPM_ENABLE
#define OLED_DISPLAY_WIDTH 128
#define OLED_DISPLAY_HEIGHT 32
#define OLED_MATRIX_SIZE 512
#define OLED_RESET -1
#define OLED_DISPLAY_ADDRESS 0x3C
#define OLED_BRIGHTNESS 255
#define OLED_TIMEOUT 32000
#define OLED_FADE_OUT
#define OLED_FADE_OUT_INTERVAL 0
#endif

// Misc settings                                              -=hy
// Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap
#define LOCKING_SUPPORT_ENABLE
// Locking resynchronize hack
#define LOCKING_RESYNC_ENABLE
// Enables This makes it easier for fast typists to use dual-function keys
#define PERMISSIVE_HOLD

// End of Basic Config
