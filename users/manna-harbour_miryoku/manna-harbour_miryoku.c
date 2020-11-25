// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

#include "manna-harbour_miryoku.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#if defined MIRYOKU_ALPHAS_COLEMAK
  [BASE] = LAYOUT_miryoku(
    KC_Q,              KC_W,              KC_F,              KC_P,              KC_G,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
    LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_D,              KC_H,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_K,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  U_NP,              U_NP
  ),
#elif defined MIRYOKU_ALPHAS_COLEMAKDH
  [BASE] = LAYOUT_miryoku(
    KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
    LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_K,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_M,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  U_NP,              U_NP
  ),
#elif defined MIRYOKU_ALPHAS_DVORAK
  [BASE] = LAYOUT_miryoku(
    KC_QUOT,           KC_COMM,           KC_DOT,            KC_P,              KC_Y,              KC_F,              KC_G,              KC_C,              KC_R,              KC_L,
    LGUI_T(KC_A),      LALT_T(KC_O),      LCTL_T(KC_E),      LSFT_T(KC_U),      KC_I,              KC_D,              LSFT_T(KC_H),      LCTL_T(KC_T),      LALT_T(KC_N),      LGUI_T(KC_S),
    KC_SLSH,           ALGR_T(KC_Q),      KC_J,              KC_K,              KC_X,              KC_B,              KC_M,              KC_W,              ALGR_T(KC_V),      KC_Z,
    U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  U_NP,              U_NP
  ),
#elif defined MIRYOKU_ALPHAS_HALMAK
  [BASE] = LAYOUT_miryoku(
    KC_W,              KC_L,              KC_R,              KC_B,              KC_Z,              KC_QUOT,           KC_Q,              KC_U,              KC_D,              KC_J,
    LGUI_T(KC_S),      LALT_T(KC_H),      LCTL_T(KC_N),      LSFT_T(KC_T),      KC_COMM,           KC_DOT,            LSFT_T(KC_A),      LCTL_T(KC_E),      LALT_T(KC_O),      LGUI_T(KC_I),
    KC_F,              ALGR_T(KC_M),      KC_V,              KC_C,              KC_SLSH,           KC_G,              KC_P,              KC_X,              ALGR_T(KC_K),      KC_Y,
    U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  U_NP,              U_NP
  ),
#elif defined MIRYOKU_ALPHAS_WORKMAN
  [BASE] = LAYOUT_miryoku(
    KC_Q,              KC_D,              KC_R,              KC_W,              KC_B,              KC_J,              KC_F,              KC_U,              KC_P,              KC_QUOT,
    LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_H),      LSFT_T(KC_T),      KC_G,              KC_Y,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_O),      LGUI_T(KC_I),
    KC_Z,              ALGR_T(KC_X),      KC_M,              KC_C,              KC_V,              KC_K,              KC_L,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  U_NP,              U_NP
  ),
#elif defined MIRYOKU_ALPHAS_QWERTY
  [BASE] = LAYOUT_miryoku(
    KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,
    LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  U_NP,              U_NP
  ),
#else
  [BASE] = LAYOUT_miryoku(
    KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
    LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  U_NP,              U_NP
  ),
#endif
#if defined MIRYOKU_NAV_VI
  [NAVR] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_CAPS,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_ENT,  KC_BSPC, KC_DEL,  U_NP,    U_NP
  ),
  [MOUR] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U_NU,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, U_NU,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  ),
  [MEDR] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, U_NU,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_MSTP, KC_MPLY, KC_MUTE, U_NP,    U_NP
  ),
#else
  [NAVR] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_ENT,  KC_BSPC, KC_DEL,  U_NP,    U_NP
  ),
  [MOUR] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    U_NU,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  ),
  [MEDR] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    U_NU,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_MSTP, KC_MPLY, KC_MUTE, U_NP,    U_NP
  ),
#endif
  [MBO] = LAYOUT_miryoku(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    U_NP,    U_NP,    KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  ),
  [FUNL] = LAYOUT_miryoku(
    KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK, U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_APP,  KC_SPC,  KC_TAB,  U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  [NSL] = LAYOUT_miryoku(
    KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_DOT,  KC_0,    KC_MINS, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  [NSSL] = LAYOUT_miryoku(
    KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_LPRN, KC_RPRN, KC_UNDS, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  )
};
