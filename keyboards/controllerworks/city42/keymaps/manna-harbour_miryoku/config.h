// Copyright 2023 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define MATRIX_ROW_PINS { GP12, GP13, GP14, GP15 }
#define MATRIX_COL_PINS { GP28, GP27, GP26, GP25, GP24, GP23, GP0, GP1, GP2, GP3, GP4, GP5 }

#define XXX KC_NO

#define LAYOUT_miryoku( \
K00,   K01,   K02,   K03,   K04,          K05,   K06,   K07,   K08,   K09, \
K10,   K11,   K12,   K13,   K14,          K15,   K16,   K17,   K18,   K19, \
K20,   K21,   K22,   K23,   K24,          K25,   K26,   K27,   K28,   K29, \
N30,   N31,   K32,   K33,   K34,          K35,   K36,   K37,   N38,   N39 \
) \
LAYOUT_split_3x6_3( \
XXX,   K00,   K01,   K02,   K03,   K04,          K05,   K06,   K07,   K08,   K09,   XXX, \
XXX,   K10,   K11,   K12,   K13,   K14,          K15,   K16,   K17,   K18,   K19,   XXX, \
XXX,   K20,   K21,   K22,   K23,   K24,          K25,   K26,   K27,   K28,   K29,   XXX, \
XXX,   XXX,   K32,   K33,   K34,   XXX,          XXX,   K35,   K36,   K37,   XXX,   XXX \
)
