// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include "custom_config.h"

// default but used in macros
#undef TAPPING_TERM
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64

// Thumb Combos
#if defined (MIRYOKU_KLUDGE_THUMBCOMBOS)
  #define COMBO_COUNT 8
  #define COMBO_TERM 200
  #define EXTRA_SHORT_COMBOS
#endif

// Thumb Keys
#if !defined (MIRYOKU_THUMBKEY_LO_LAYER)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #define MIRYOKU_THUMBKEY_LO_LAYER FUN
  #else
    #define MIRYOKU_THUMBKEY_LO_LAYER MEDIA
  #endif
#endif
#if !defined (MIRYOKU_THUMBKEY_LM_LAYER)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #define MIRYOKU_THUMBKEY_LM_LAYER NUM
  #else
    #define MIRYOKU_THUMBKEY_LM_LAYER NAV
  #endif
#endif
#if !defined (MIRYOKU_THUMBKEY_LI_LAYER)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #define MIRYOKU_THUMBKEY_LI_LAYER SYM
  #else
    #define MIRYOKU_THUMBKEY_LI_LAYER MOUSE
  #endif
#endif
#if !defined (MIRYOKU_THUMBKEY_RI_LAYER)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #define MIRYOKU_THUMBKEY_RI_LAYER MOUSE
  #else
    #define MIRYOKU_THUMBKEY_RI_LAYER SYM
  #endif
#endif
#if !defined (MIRYOKU_THUMBKEY_RM_LAYER)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #define MIRYOKU_THUMBKEY_RM_LAYER NAV
  #else
    #define MIRYOKU_THUMBKEY_RM_LAYER NUM
  #endif
#endif
#if !defined (MIRYOKU_THUMBKEY_RO_LAYER)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #define MIRYOKU_THUMBKEY_RO_LAYER MEDIA
  #else
    #define MIRYOKU_THUMBKEY_RO_LAYER FUN
  #endif
#endif

#if !defined (MIRYOKU_THUMBKEY_LO_KC)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #define MIRYOKU_THUMBKEY_LO_KC KC_DEL
  #else
    #define MIRYOKU_THUMBKEY_LO_KC KC_ESC
  #endif
#endif
#if !defined (MIRYOKU_THUMBKEY_LM_KC)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #define MIRYOKU_THUMBKEY_LM_KC KC_BSPC
  #else
    #define MIRYOKU_THUMBKEY_LM_KC KC_SPC
  #endif
#endif
#if !defined (MIRYOKU_THUMBKEY_LI_KC)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #define MIRYOKU_THUMBKEY_LI_KC KC_ENT
  #else
    #define MIRYOKU_THUMBKEY_LI_KC KC_TAB
  #endif
#endif
#if !defined (MIRYOKU_THUMBKEY_RI_KC)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #define MIRYOKU_THUMBKEY_RI_KC KC_TAB
  #else
    #define MIRYOKU_THUMBKEY_RI_KC KC_ENT
  #endif
#endif
#if !defined (MIRYOKU_THUMBKEY_RM_KC)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #define MIRYOKU_THUMBKEY_RM_KC KC_SPC
  #else
    #define MIRYOKU_THUMBKEY_RM_KC KC_BSPC
  #endif
#endif
#if !defined (MIRYOKU_THUMBKEY_RO_KC)
  #if defined (MIRYOKU_LAYERS_FLIP)
    #define MIRYOKU_THUMBKEY_RO_KC KC_ESC
  #else
    #define MIRYOKU_THUMBKEY_RO_KC KC_DEL
  #endif
#endif

#define MIRYOKU_LAYER_NAME_(layer) U_##layer
#define MIRYOKU_LAYER_NAME(layer) MIRYOKU_LAYER_NAME_(layer)
#define MIRYOKU_THUMBKEY(position) \
  LT(\
    MIRYOKU_LAYER_NAME(MIRYOKU_THUMBKEY_##position##_LAYER),\
    MIRYOKU_THUMBKEY_##position##_KC\
  )

#define MIRYOKU_THUMBKEY_LO MIRYOKU_THUMBKEY(LO)
#define MIRYOKU_THUMBKEY_LM MIRYOKU_THUMBKEY(LM)
#define MIRYOKU_THUMBKEY_LI MIRYOKU_THUMBKEY(LI)
#define MIRYOKU_THUMBKEY_RI MIRYOKU_THUMBKEY(RI)
#define MIRYOKU_THUMBKEY_RM MIRYOKU_THUMBKEY(RM)
#define MIRYOKU_THUMBKEY_RO MIRYOKU_THUMBKEY(RO)
