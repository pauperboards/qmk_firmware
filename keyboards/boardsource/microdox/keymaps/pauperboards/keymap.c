/*
Copyright 2022 Cole Smith <cole@boadsource.xyz>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "pauperboards.h"

// My standard keymap is a 3x5+2, so there are two extra thumb keys to define per layer for
// the microdox.
#define PAUPER_microdox_base(...) LAYOUT_3x53_base_layer(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = PAUPER_microdox_base(
    _______________QWERTY1_____________________,
    _______________QWERTY2_____________________,
    _______________QWERTY3_____________________,
         TG(_NAV), ____BASE_T4_____, KC_NO
  ),

  [_NUMBER] = LAYOUT_microdox_layer(
    _________________NUM1______________________,
    _________________NUM2______________________,
    _________________NUM3______________________,
                ____NUM_T6______
  ),

  [_SYMBOL] = LAYOUT_microdox_layer(
    _________________SYM1______________________,
    _________________SYM2______________________,
    _________________SYM3______________________,
                ____SYM_T6______
  ),

  [_NAV] = LAYOUT_microdox_layer(
    _________________NAVI1_____________________,
    _________________NAVI2_____________________,
    _________________NAVI3_____________________,
                ____NAVI_T6_____
  ),
};
