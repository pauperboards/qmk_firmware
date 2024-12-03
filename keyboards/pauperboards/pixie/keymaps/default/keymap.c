// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include "keycodes.h"
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │
     * └───┴─┬─┴─┬─┴─┬─┴───┼───┴─┬─┴─┬─┴─┬─┴───┘
     *       │   │   │     │     │   │   │
     *       └───┴───┴─────┴─────┴───┴───┘
     */
    [0] = LAYOUT_6key (
        KC_Q, KC_W, KC_E, KC_R, KC_T,  KC_Y, KC_U, KC_I,     KC_O,   KC_P,
        KC_A, KC_S, KC_D, KC_F, KC_G,  KC_H, KC_J, KC_K,     KC_L,   KC_SCLN,
        KC_Z, KC_X, KC_C, KC_V, KC_B,  KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLSH,
              KC_ESC, MO(1), KC_BSPC,  KC_SPC, MO(2), KC_ENT
    ),
    [1] = LAYOUT_6key (
        KC_Q, KC_W, KC_E, KC_R, KC_T,  KC_Y, KC_U, KC_I,     KC_O,   KC_P,
        KC_A, KC_S, KC_D, KC_F, KC_G,  KC_H, KC_J, KC_K,     KC_L,   KC_SCLN,
        KC_Z, KC_X, KC_C, KC_V, KC_B,  KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLSH,
              KC_ESC, MO(1), KC_BSPC,  KC_SPC, MO(2), KC_ENT
    ),
    [2] = LAYOUT_6key (
        KC_Q, KC_W, KC_E, KC_R, KC_T,  KC_Y, KC_U, KC_I,     KC_O,   KC_P,
        KC_A, KC_S, KC_D, KC_F, KC_G,  KC_H, KC_J, KC_K,     KC_L,   KC_SCLN,
        KC_Z, KC_X, KC_C, KC_V, KC_B,  KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLSH,
              KC_ESC, MO(1), KC_BSPC,  KC_SPC, MO(2), KC_ENT
    )
};
//
// Credit to tominabox1 -- I stole this from the header file for Le Chiffre.
/*#define XXX KC_NO*/
/**/
/*#define LAYOUT( \*/
/*    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \*/
/*    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, \*/
/*    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, \*/
/*              k32, k33, k34, k35, k36, k37            \*/
/*) { \*/
/*    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09 }, \*/
/*    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19 }, \*/
/*    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29 }, \*/
/*    { XXX, XXX, k32, k33, k34, k35, k36, k37, XXX, XXX }  \*/
/*}*/
