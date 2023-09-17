// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#define MOSM_GUCL OSM(MOD_LCTL|MOD_LGUI)

#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),   \
KC_Z,              KC_X,              KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           \
U_NP,              U_NP,              LT(U_NAV,KC_TAB),  LT(U_SYM,KC_ESC),  LT(U_MOUSE,KC_SPC),LT(U_FUN,KC_BSPC), LT(U_NUM,KC_DEL),  LT(U_MEDIA,KC_ENT),U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
KC_EXLM,           KC_AT,             KC_HASH,           KC_DLR,            KC_PERC,           KC_QUES,           KC_CIRC,           KC_EQL,            KC_AMPR,           KC_PIPE,     \
KC_SLSH,           KC_TILD,           KC_ASTR,           KC_COLN,           KC_QUOT,           KC_MINS,           KC_LBRC,           KC_LPRN,           KC_LCBR,           KC_LT,       \
KC_BSLS,           U_NA,              KC_GRV,            KC_SCLN,           KC_DQUO,           KC_UNDS,           KC_RBRC,           KC_RPRN,           KC_RCBR,           KC_GT,       \
U_NP,              U_NP,              U_NA,              KC_ESC,            U_NA,              KC_BSPC,           U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_PST,             U_CPY,             U_CUT,             U_UND,             U_RDO,       \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           CW_TOGG,     \
MOSM_GUCL,         U_NA,              U_NA,              U_NA,              U_NA,              KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            KC_INS,      \
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
U_NU,              U_NU,              U_NU,              U_NU,              OU_AUTO,           U_NA,              U_NA,              U_NA,              U_NA,              U_NA,        \
U_NP,              U_NP,              KC_MUTE,           KC_MPLY,           KC_MSTP,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP
