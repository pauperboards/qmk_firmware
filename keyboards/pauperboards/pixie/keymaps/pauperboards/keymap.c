#include QMK_KEYBOARD_H
#include "pauperboards.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_3x10_2(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                                 KC_ESC, KC_LSFT,    KC_SPC,  KC_ENT
    ),
    [1] = LAYOUT_ortho_3x10_2(
        KC_TILD, KC_GRV,  _______, _______, _______, _______, KC_7, KC_8, KC_9, KC_PMNS,
        _______, _______, _______, KC_LSFT, _______, _______, KC_4, KC_5, KC_6, KC_EQL,
        _______, _______, _______, _______, _______, _______, KC_1, KC_2, KC_3, KC_PAST,
                                   _______, _______, KC_0, KC_DOT
    ),
    [2] = LAYOUT_ortho_3x10_2(
        KC_TILD, KC_GRV,  _______, _______, _______, _______, KC_AMPR, KC_ASTR, _______, KC_PIPE,
        _______, _______, _______, _______, _______, _______, KC_DLR,  KC_PERC, KC_CIRC, _______,
        _______, _______, _______, _______, _______, _______, KC_EXLM, KC_AT,   KC_HASH, KC_BSLS,
                                   _______, _______, _______, _______
    ),
    [2] = LAYOUT_ortho_3x10_2(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
        _______, _______, _______, _______, _______, _______, KC_PGDN, KC_PGUP, _______, _______,
                                   _______, _______, _______, _______
    )
};
