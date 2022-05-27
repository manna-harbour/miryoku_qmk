// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define XXX KC_NO

#define LAYOUT_miryoku( \
      K00,  K01,  K02,  K03,  K04,        K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,        K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,        K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,        K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT( \
XXX,  XXX,  K34,  K24,  K14,  K04,        K05,  K15,  K25,  K35,  XXX,  XXX, \
XXX,  XXX,  K33,  K23,  K13,  K03,        K06,  K16,  K26,  K36,  XXX,  XXX, \
XXX,  XXX,  K32,  K22,  K12,  K02,        K07,  K17,  K27,  K37,  XXX,  XXX, \
XXX,  XXX,  XXX,  K21,  K11,  K01,        K08,  K18,  K28,  XXX,  XXX,  XXX, \
XXX,  XXX,  XXX,  K20,  K10,  K00,        K09,  K19,  K29,  XXX,  XXX,  XXX \
)
