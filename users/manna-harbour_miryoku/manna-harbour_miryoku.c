// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#include QMK_KEYBOARD_H

#include "manna-harbour_miryoku.h"

enum layers { MIRYOKU_LAYER_NAMES };



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE]   = U_MACRO_VA_ARGS(LAYOUT_miryoku, MIRYOKU_LAYER_BASE),
  [NAV]    = U_MACRO_VA_ARGS(LAYOUT_miryoku, MIRYOKU_LAYER_NAV),
  [MOUSE]  = U_MACRO_VA_ARGS(LAYOUT_miryoku, MIRYOKU_LAYER_MOUSE),
  [MEDIA]  = U_MACRO_VA_ARGS(LAYOUT_miryoku, MIRYOKU_LAYER_MEDIA),
  [NUM]    = U_MACRO_VA_ARGS(LAYOUT_miryoku, MIRYOKU_LAYER_NUM),
  [SYM]    = U_MACRO_VA_ARGS(LAYOUT_miryoku, MIRYOKU_LAYER_SYM),
  [FUN]    = U_MACRO_VA_ARGS(LAYOUT_miryoku, MIRYOKU_LAYER_FUN),
  [BUTTON] = U_MACRO_VA_ARGS(LAYOUT_miryoku, MIRYOKU_LAYER_BUTTON)
};


#ifdef OLED_ENABLE
uint16_t        oled_timer;

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_left()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_BASE 0
#define L_LOWER 2
#define L_Nav 4
#define L_Mouse 8
#define L_Media 16
#define L_Num 32
#define L_Sym 64
#define L_Fun 128

/*
void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case L_Nav:
            oled_write_ln_P(PSTR("Navigation"), false);
            break;
        case L_Mouse:
            oled_write_ln_P(PSTR("Mouse"), false);
            break;
        case L_Media:
            oled_write_ln_P(PSTR("Media"), false);
            break;
        case L_Num:
            oled_write_ln_P(PSTR("Numbers"), false);
            break;
        case L_Sym:
            oled_write_ln_P(PSTR("Synmbol"), false);
            break;
        case L_Fun:
            oled_write_ln_P(PSTR("Function"), false);
            break;
    }
    oled_write_P(PSTR("Caspar Boekhoudt"), false);
}

void render_bootmagic_status(bool status) {
    // Show Ctrl-Gui Swap options 
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
    } else {
        oled_render_logo();
    }
}


#endif // OLED_ENABLE

#ifdef OLED_ENABLE




void render_logo(void) {
    static const char PROGMEM logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(logo, false);
}



__attribute__((weak))
void matrix_scan_keymap(void) {}

extern bool oled_initialized;
void matrix_scan_user(void) {
  if(!oled_initialized) {
    wait_ms(200);
    oled_init(0);
    return;
  }
  matrix_scan_keymap();
  }
__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  #ifdef CONSOLE_ENABLE
      uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
  #endif

    if (record->event.pressed) {
      #ifdef OLED_ENABLE
        oled_timer = timer_read();
        oled_on();
        #endif // OLED_ENABLE
    /*
    switch (keycode) {
            case KC_BBB:
                if (record->event.pressed) {
                    SEND_STRING(":b:");
                } else {}
                break;
            case KC_BEPIS:
                if (record->event.pressed) {
                    SEND_STRING("BEPIS");
                } else {}
                break;
        }
        
    }
    return true;

}

void render_status_main(void) {
    // Host Keyboard USB Status
    oled_write_P(PSTR("USB: "), false);
    switch (USB_DeviceState) {
        case DEVICE_STATE_Unattached:
            oled_write_P(PSTR("Unattached\n"), false);
            break;
        case DEVICE_STATE_Suspended:
             oled_write_P(PSTR("Suspended\n"), false);
            break;
        case DEVICE_STATE_Configured:
             oled_write_P(PSTR("Connected\n"), false);
            break;
        case DEVICE_STATE_Powered:
             oled_write_P(PSTR("Powered\n"), false);
            break;
        case DEVICE_STATE_Default:
             oled_write_P(PSTR("Default\n"), false);
            break;
        case DEVICE_STATE_Addressed:
             oled_write_P(PSTR("Addressed\n"), false);
            break;
        default:
             oled_write_P(PSTR("Invalid\n"), false);
        }

    // Host Keyboard Layer Status
     oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case L_Nav:
            oled_write_ln_P(PSTR("Navigation"), false);
            break;
        case L_Mouse:
            oled_write_ln_P(PSTR("Mouse"), false);
            break;
        case L_Media:
            oled_write_ln_P(PSTR("Media"), false);
            break;
        case L_Num:
            oled_write_ln_P(PSTR("Numbers"), false);
            break;
        case L_Sym:
            oled_write_ln_P(PSTR("Synmbol"), false);
            break;
        case L_Fun:
            oled_write_ln_P(PSTR("Function"), false);
            break;
    }
    //oled_write_P(PSTR("Caspar Boekhoudt"), false);

    // Host Keyboard LED Status

    oled_write_ln_P(IS_HOST_LED_ON(USB_LED_CAPS_LOCK) ? PSTR("Caps Lock\n") : PSTR("         \n"), false);
}
__attribute__ ((weak))
void oled_task_keymap(void) {}

void oled_task_user(void) {

    if (timer_elapsed(oled_timer) > 20000) {
        oled_off();
        return;
    }
        if (is_keyboard_master()) {
            render_status_main();  // Renders the current keyboard state (layer, lock, caps, scroll, etc)
        } else {
            render_logo();
            oled_scroll_left();
        }
        oled_task_keymap();
    }

#endif // OLED_Driver
*/


#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}



void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
     switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case L_Nav:
            oled_write_ln_P(PSTR("Navigation"), false);
            break;
        case L_Mouse:
            oled_write_ln_P(PSTR("Mouse"), false);
            break;
        case L_Media:
            oled_write_ln_P(PSTR("Media"), false);
            break;
        case L_Num:
            oled_write_ln_P(PSTR("Numbers"), false);
            break;
        case L_Sym:
            oled_write_ln_P(PSTR("Synmbol"), false);
            break;
        case L_Fun:
            oled_write_ln_P(PSTR("Function"), false);
            break;
    }
}


char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  return true;
}
#endif // OLED_ENABLE
