// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#include "manna-harbour_miryoku.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE]   = U_EXPAND(LAYOUT_miryoku, MIRYOKU_LAYER_BASE),
  [NAV]    = U_EXPAND(LAYOUT_miryoku, MIRYOKU_LAYER_NAV),
  [MOUSE]  = U_EXPAND(LAYOUT_miryoku, MIRYOKU_LAYER_MOUSE),
  [MEDIA]  = U_EXPAND(LAYOUT_miryoku, MIRYOKU_LAYER_MEDIA),
  [NUM]    = U_EXPAND(LAYOUT_miryoku, MIRYOKU_LAYER_NUM),
  [SYM]    = U_EXPAND(LAYOUT_miryoku, MIRYOKU_LAYER_SYM),
  [FUN]    = U_EXPAND(LAYOUT_miryoku, MIRYOKU_LAYER_FUN),
  [BUTTON] = U_EXPAND(LAYOUT_miryoku, MIRYOKU_LAYER_BUTTON)
};
