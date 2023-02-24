/*
 * Copyright 2020 Jason Chestnut <jason.chestnut@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "combos.h"

const uint16_t COMBO_LEN = COMBO_LENGTH;
// const uint16_t PROGMEM pc_esc  [] = { KC_A, KC_S, COMBO_END };
const uint16_t PROGMEM pc_tab  [] = { KC_Q, KC_W, COMBO_END };
const uint16_t PROGMEM pc_lctl [] = { KC_D, KC_F, COMBO_END };
const uint16_t PROGMEM pc_lgui [] = { KC_F, KC_S, COMBO_END };
const uint16_t PROGMEM pc_lalt [] = { KC_F, KC_A, COMBO_END };
const uint16_t PROGMEM pc_rctl [] = { KC_J, KC_K, COMBO_END };
const uint16_t PROGMEM pc_rgui [] = { KC_J, KC_L, COMBO_END };
const uint16_t PROGMEM pc_ralt [] = { KC_J, KC_SCLN, COMBO_END };
const uint16_t PROGMEM pc_nav  [] = { KC_ESC, KC_ENT, COMBO_END }; // Thumb Esc and Enter keys
const uint16_t PROGMEM pc_lcbr [] = { KC_E, KC_R, COMBO_END };
const uint16_t PROGMEM pc_rcbr [] = { KC_U, KC_I, COMBO_END };
const uint16_t PROGMEM pc_lprn [] = { KC_C, KC_V, COMBO_END };
const uint16_t PROGMEM pc_rprn [] = { KC_M, KC_COMM, COMBO_END };
const uint16_t PROGMEM pc_bsl  [] = { KC_O, KC_P, COMBO_END };
const uint16_t PROGMEM pc_bsp  [] = { KC_I, KC_O, COMBO_END };
const uint16_t PROGMEM pc_qot  [] = { KC_L, KC_SCLN, COMBO_END };

combo_t key_combos[] = {
    COMBO(pc_tab,  KC_TAB),
    COMBO(pc_lctl, CTL_T(KC_LBRC)),
    COMBO(pc_lgui, KC_LGUI),
    COMBO(pc_lalt, KC_LALT),
    COMBO(pc_rctl, CTL_T(KC_RBRC)),
    COMBO(pc_rgui, KC_RGUI),
    COMBO(pc_ralt, KC_RALT),
    // COMBO(pc_nav, TG(_NAV)),
    COMBO(pc_lcbr, S(KC_LBRC)),
    COMBO(pc_rcbr, S(KC_RBRC)),
    COMBO(pc_lprn, KC_LPRN),
    COMBO(pc_rprn, KC_RPRN),
    COMBO(pc_bsl, KC_BSLS),
    COMBO(pc_bsp, KC_BSPC),
    COMBO(pc_qot, KC_QUOT),
    COMBO_ACTION(pc_nav),
};
