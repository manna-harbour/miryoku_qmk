// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define MIRYOKU_ALTERNATIVES_BASE_ISRT_FLIP \
KC_Y,              KC_C,              KC_L,              KC_M,              KC_K,              KC_Z,              KC_F,              KC_U,              KC_COMM,           KC_QUOT,           \
LGUI_T(KC_I),      LALT_T(KC_S),      LCTL_T(KC_R),      LSFT_T(KC_T),      KC_G,              KC_P,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_A),      LGUI_T(KC_O),      \
LT(U_BUTTON,KC_Q), ALGR_T(KC_V),      KC_W,              KC_D,              KC_J,              KC_B,              KC_H,              KC_SLSH,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_X), \
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_ISRT \
KC_Y,              KC_C,              KC_L,              KC_M,              KC_K,              KC_Z,              KC_F,              KC_U,              KC_COMM,           KC_QUOT,           \
LGUI_T(KC_I),      LALT_T(KC_S),      LCTL_T(KC_R),      LSFT_T(KC_T),      KC_G,              KC_P,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_A),      LGUI_T(KC_O),      \
LT(U_BUTTON,KC_Q), ALGR_T(KC_V),      KC_W,              KC_D,              KC_J,              KC_B,              KC_H,              KC_SLSH,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_X), \
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_ISRT_FLIP \
KC_Y,              KC_C,              KC_L,              KC_M,              KC_K,              KC_Z,              KC_F,              KC_U,              KC_COMM,           KC_QUOT,           \
KC_I,              KC_S,              KC_R,              KC_T,              KC_G,              KC_P,              KC_N,              KC_E,              KC_A,              KC_O,              \
KC_Q,              KC_V,              KC_W,              KC_D,              KC_J,              KC_B,              KC_H,              KC_SLSH,           KC_DOT,            KC_X,              \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_ISRT \
KC_Y,              KC_C,              KC_L,              KC_M,              KC_K,              KC_Z,              KC_F,              KC_U,              KC_COMM,           KC_QUOT,           \
KC_I,              KC_S,              KC_R,              KC_T,              KC_G,              KC_P,              KC_N,              KC_E,              KC_A,              KC_O,              \
KC_Q,              KC_V,              KC_W,              KC_D,              KC_J,              KC_B,              KC_H,              KC_SLSH,           KC_DOT,            KC_X,              \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP
