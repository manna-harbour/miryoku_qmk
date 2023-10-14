// Copyright 2023 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define XXX KC_NO

#define LAYOUT_miryoku( \
K00,   K01,   K02,   K03,   K04,          K05,   K06,   K07,   K08,   K09, \
K10,   K11,   K12,   K13,   K14,          K15,   K16,   K17,   K18,   K19, \
K20,   K21,   K22,   K23,   K24,          K25,   K26,   K27,   K28,   K29, \
N30,   N31,   K32,   K33,   K34,          K35,   K36,   K37,   N38,   N39 \
) \
LAYOUT( \
/*       C,   N,   E,   S,   W   */ \
/* R1 */ K16, K06, XXX, K26, K15, \
/* R2 */ K17, K07, XXX, K27, K05, \
/* R3 */ K18, K08, XXX, K28, K25, \
/* R4 */ K19, K09, XXX, K29, XXX, \
\
/* L1 */ K13, K03, K14, K23, XXX, \
/* L2 */ K12, K02, K04, K22, XXX, \
/* L3 */ K11, K01, K24, K21, XXX, \
/* L4 */ K10, K00, XXX, K20, XXX, \
\
/*       D,   I,   U,   OU,  OL,  PT  */ \
/* RT */ K36, K37, XXX, K35, XXX, XXX, \
/* LT */ K33, K32, XXX, K34, XXX, XXX \
)
