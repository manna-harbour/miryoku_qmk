#pragma once

#include "config_common.h"


//#define VENDOR_ID 0x9953 // keypad WYLD

/* mouse config */
#define MOUSEKEY_INTERVAL    20
#define MOUSEKEY_DELAY       0
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED   7
#define MOUSEKEY_WHEEL_DELAY 0

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */

// PINS ARE DEFINED IN SUBDIRECTORIES.
//#define SOFT_SERIAL_PIN
//#define SERIAL_USART_TX_PIN GP0
//#define SERIAL_USART_RX_PIN GP1

//#define SERIAL_USART_FULL_DUPLEX
#define HAL_USE_SIO TRUE

//#define split_usb_detect 
//#define split_layer_state_enable

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Enables This makes it easier for fast typists to use dual-function keys */
#define PERMISSIVE_HOLD

