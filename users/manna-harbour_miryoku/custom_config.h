// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.


#define TAPPING_FORCE_HOLD_PER_KEY
#define TAPPING_TERM_PER_KEY

#define MT_MOUSE LT(U_MOUSE,KC_TAB) 
#define MT_SYM   LT(U_SYM,KC_ESC)
#define MT_NAV   LT(U_NAV,KC_SPC)
#define MT_FUN   LT(U_FUN,KC_BSPC)
#define MT_NUM   LT(U_NUM,KC_DEL)
#define MT_MEDIA LT(U_MEDIA,KC_ENT)

//Left Hand
#define MT_GUI_A LGUI_T(KC_A)
#define MT_ALT_S LALT_T(KC_S)
#define MT_CTL_D LCTL_T(KC_D)
#define MT_SFT_F LSFT_T(KC_F)

//Right Hand
#define MT_SFT_J LSFT_T(KC_J)
#define MT_CTL_K LCTL_T(KC_K)
#define MT_ALT_L LALT_T(KC_L)
#define MT_GUI_QUO   LGUI_T(KC_QUOT)

#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
MT_GUI_A,          MT_ALT_S,          MT_CTL_D,          MT_SFT_F,          KC_G,              KC_H,              MT_SFT_J,          MT_CTL_K,          MT_ALT_L,          MT_GUI_QUO,        \
KC_Z,              KC_X,              KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           \
U_NP,              U_NP,              MT_MOUSE,          MT_SYM,            MT_NAV,            MT_FUN,            MT_NUM,            MT_MEDIA,          U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
KC_EXLM,           KC_AT,             KC_HASH,           KC_DLR,            KC_PERC,           KC_QUES,           KC_CIRC,           KC_EQL,            KC_AMPR,           KC_PIPE,     \
KC_SLSH,           KC_TILD,           KC_ASTR,           KC_COLN,           KC_DQUO,          KC_MINS,            KC_LPRN,           KC_LBRC,           KC_LCBR,           KC_LT,       \
KC_BSLS,           U_NA,              KC_GRV,            KC_SCLN,           KC_QUOT,           KC_UNDS,           KC_RPRN,           KC_RBRC,           KC_RCBR,           KC_GT,       \
U_NP,              U_NP,              U_NA,              KC_ESC,            U_NA,              KC_BSPC,           U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              KC_WBAK,           U_NA,              U_NA,              KC_WFWD,           KC_WREF,       \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           CW_TOGG,     \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            KC_INS,      \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
KC_F12,            KC_F7,             KC_F8,             KC_F9,             KC_PSCR,           U_NA,              U_NA,              U_NA,              U_NA,              U_NA,        \
KC_F11,            KC_F4,             KC_F5,             KC_F6,             KC_SCRL,           U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,     \
KC_F10,            KC_F1,             KC_F2,             KC_F3,             KC_PAUS,           U_NA,              U_NA,              U_NA,              U_NA,              U_NA,        \
U_NP,              U_NP,              KC_APP,            KC_SPC,            KC_TAB,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
KC_LBRC,           KC_7,              KC_8,              KC_9,              KC_RBRC,           U_NA,              U_NA,              U_NA,              U_NA,              U_NA,        \
KC_SCLN,           KC_4,              KC_5,              KC_6,              KC_EQL,            U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,     \
KC_GRV,            KC_1,              KC_2,              KC_3,              KC_BSLS,           U_NA,              U_NA,              U_NA,              U_NA,              U_NA,        \
U_NP,              U_NP,              KC_DOT,            KC_0,              KC_MINS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_MEDIA \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,        \
KC_MPRV,           KC_VOLD,           KC_VOLU,           KC_MNXT,           U_NU,              U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,     \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,        \
U_NP,              U_NP,              KC_MUTE,           KC_MPLY,           KC_MSTP,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP


