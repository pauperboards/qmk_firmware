/*
 * 
 * Copyright 2023 Jason Chestnut <pauperboards@gmail.com> @pauperboards
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
#pragma once

#if (!defined(LAYOUT) && defined(KEYMAP))
#    define LAYOUT KEYMAP
#endif

#define LAYOUT_wrapper(...)          LAYOUT(__VA_ARGS__)
#define LAYOUT_reviung_wrapper(...)  LAYOUT_reviung39(__VA_ARGS__)
#define LAYOUT_corne_wrapper(...)    LAYOUT_split_3x6_3(__VA_ARGS__)
#define LAYOUT_preonic_wrapper(...)  LAYOUT_preonic_grid(__VA_ARGS__)
#define LAYOUT_niumini_wrapper(...)  LAYOUT_ortho_4x12(__VA_ARGS__)
#define LAYOUT_planck_wrapper(...)   LAYOUT_planck_2x2u(__VA_ARGS__)

#define LAYOUT_brick_2x2u_wrapper(...) LAYOUT_ortho_2x2u(__VA_ARGS__)

/*
 * My standard keymap is based on a 34-key split ortho board. This includes 5 columns and 2 thumb
 * keys per hand. The following macros define the base 34 key map, with any additional keys for a
 * given keyboard left to be defined in that specific keymap.c file.
 */

// Used as a blank number row for huge keyboards like the Preonic.
#define _________________BLANK_ROW_________________    _______, _______, _______, _______, _______
//
// Homerow mod macros, one for each hand.
#define HR_L(K1,K2,K3,K4) LCTL_T(K1),LALT_T(K2),LSFT_T(K3),LGUI_T(K4)
#define HR_R(K1,K2,K3,K4) LGUI_T(K1),LSFT_T(K2),LALT_T(K3),LCTL_T(K4)

/**
 * QWERTY
 * tab, ~, `, esc                                       BSP, [], \, -, +
 *      ┌─────┬─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┐
 * tab  │  Q  │  W  │  E  │  R  │  T  │  │  Y  │  U  │  I  │  O  │  P  │
 *      ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 * esc  │  A  │  S  │  D  │  F  │  G  │  │  H  │  J  │  K  │  L  │  ;  │ Return: L + ;
 *      ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 *      │  Z  │  X  │  C  │  V  │  B  │  │  N  │  M  │  ,  │  .  │  /  │
 *      └─────┴─────┴─────┼─────┼─────┤  ├─────┼─────┼─────┴─────┴─────┘
 *                        │ SH │ BSP │  │ SPC │ RT │              RETURN
 *                        └─────┴─────┘  └─────┴─────┘
 */
#define _______________QWERTY1_____________________    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I,     KC_O,   KC_P
#define _______________QWERTY2_____________________    KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K,     KC_L,   KC_SCLN
#define _______________QWERTY3_____________________    KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH
#define ____BASE_T4_____                                            KC_ESC, KC_LSFT, KC_SPC, KC_ENT
#define ____BASE_T6_____                                    KC_ESC, KC_ESC, KC_LSFT, KC_SPC, KC_ENT, KC_NO

/* Navigation - These are all Nav keys, like arrows, PgUp/PgDn, etc. Nav keys are on the right hand.
 * At the moment, the left hand home row keys are mods for using with the arrows, et. al.
 * ┌─────┬─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┐
 * │     │     │     │     │     │  │     │ End │ Hme │     │     │
 * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 * │ CTL │ ALT │ SFT │ GUI │     │  │    │    │    │    │     │
 * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 * │     │     │     │     │     │  │     │ PDn │ PUp │     │     │
 * └─────┴─────┴─────┼─────┼─────┤  ├─────┼─────┼─────┴─────┴─────┘
 *                   │     │     │  │     │     │
 *                   └─────┴─────┘  └─────┴─────┘
 */
#define _________________NAVI1_____________________    _______, _______, _______, _______, _______, _______, KC_END,  KC_HOME, _______, _______
#define _________________NAVI2_____________________    KC_LCTL, KC_LALT, KC_LSFT, KC_LGUI, KC_Q,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______
#define _________________NAVI3_____________________    _______, _______, _______, _______, _______, _______, KC_PGDN, KC_PGUP, _______, _______
#define ____NAVI_T4_____                                                              KC_NO, KC_NO, KC_NO, KC_NO
#define ____NAVI_T6_____                                                       KC_NO, KC_NO, TG(_NAV), KC_NO, KC_NO, KC_NO

/* Symbols - The symbol layer includes a shifted number pad on the right hand, giving access to all the
 * symbols that would be typed by shifted number row on a standard keyboard.
 * ┌─────┬─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┐
 * │  ~  │  `  │  {  │  }  │     │  │     │  &  │  *  │     │  |  │
 * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 * │     │     │  (  │  )  │  @  │  │  -  │  $  │  %  │  ^  │  '  │
 * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 * │     │     │  [  │  ]  │     │  │  _  │  #  │  @  │  !  │  \  │
 * └─────┴─────┴─────┼─────┼─────┤  ├─────┼─────┼─────┴─────┴─────┘
 *                   │     │     │  │     │     │
 *                   └─────┴─────┘  └─────┴─────┘
 */
#define _________________SYM1______________________    KC_TILD, KC_GRV,  KC_LCBR, KC_RCBR, _______, _______, KC_AMPR, KC_ASTR, _______, KC_PIPE 
#define _________________SYM2______________________    _______, _______, KC_LPRN, KC_RPRN, KC_AT,   KC_MINS, KC_DLR,  KC_PERC, KC_CIRC, KC_QUOT 
#define _________________SYM3______________________    _______, _______, KC_LBRC, KC_RBRC, _______, KC_UNDS, KC_EXLM, KC_AT,   KC_HASH, KC_BSLS 
#define ____SYM_T4______                                                           MOD_LSFT, KC_NO, KC_NO, _______
#define ____SYM_T6______                                                    KC_NO, TG(_NAV), KC_NO, KC_NO, _______, KC_NO

/* Numbers (ten-key style) - The number layer uses the right thumb keys for 0 and '.', so this layer includes those
 * two keys.
 * ┌─────┬─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┐
 * │     │     │     │     │     │  │  +  │  7  │  8  │  9  │     │
 * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 * │ CTL │ ALT │ SFT │ GUI │     │  │  -  │  4  │  5  │  6  │  *  │
 * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 * │     │     │     │     │     │  │  =  │  1  │  2  │  3  │  /  │
 * └─────┴─────┴─────┼─────┼─────┤  ├─────┼─────┼─────┴─────┴─────┘
 *                   │     │ XXX │  │  0  │  .  │
 *                   └─────┴─────┘  └─────┴─────┘
 */
#define _________________NUM1______________________ _______, _______, _______, _______, _______, KC_PPLS, KC_7, KC_8, KC_9, _______
#define _________________NUM2______________________ KC_LCTL, KC_LALT, KC_LSFT, KC_LGUI, _______, KC_PMNS, KC_4, KC_5, KC_6, KC_ASTR
#define _________________NUM3______________________ _______, _______, _______, _______, _______, KC_PEQL, KC_1, KC_2, KC_3, KC_SLSH
#define ____NUM_T4______                                                           KC_NO, KC_NO, KC_0, KC_DOT
#define ____NUM_T6______                                                    KC_NO, KC_NO, KC_NO, KC_0, KC_DOT, KC_NO

/* Function
 * ┌─────┬─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┐
 * │ F10 │ F7  │ F8  │ F9  │     │  │     │     │     │     │ DEL │
 * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 * │ F11 │ F6  │ F5  │ F4  │     │  │     │ GUI │ SFT │ ALT │ CTL │
 * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 * │ F12 │ F3  │ F2  │ F1  │     │  │     │     │     │     │ RST │
 * └─────┴─────┴─────┼─────┼─────┤  ├─────┼─────┼─────┴─────┴─────┘
 *                   │     │     │  │     │     │
 *                   └─────┴─────┘  └─────┴─────┘
 */
#define _________________FN1_______________________    KC_F10, KC_F9, KC_F8, KC_F7, KC_DEL,  _______, _______, _______, _______, _______
#define _________________FN2_______________________    KC_F11, KC_F6, KC_F5, KC_F4, _______, _______, KC_LGUI, KC_LSFT, KC_LALT, KC_LCTL
#define _________________FN3_______________________    KC_F12, KC_F3, KC_F2, KC_F1, _______, _______, _______, _______, _______, QK_BOOT
#define ____FN_T4_______                                                   _______, _______, _______, _______
#define ____FN_T6_______                                          _______, _______, _______, _______, _______, _______

// ----------------------------------------------------------------------------------------------------
#define LAYOUT_modtap_base_layer( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, \
                   K34, K35, K36, K37                 \
) \
     K01, K02, K03, K04,  K05, K06,      K07, K08, K09, K0A, \
     K11, K12, K13, K14,  K15, K16,      K17, K18, K19, K1A, \
HR_L(K21, K22, K23, K24), K25, K26, HR_R(K27, K28, K29, K2A),\
                   K34, K35, K36, K37
#define MODTAPS(...) LAYOUT_modtap_base_layer(__VA_ARGS__)

// ######################## -- Brick 2x2u -- ######################## //
#define LAYOUT_2x2u_base( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, \
                   K34, K35, K36, K37                 \
) \
LAYOUT_brick_2x2u_wrapper( \
             K01, K02, K03, K04,  K05, KC_NO, KC_NO, K06,      K07, K08, K09, K0A,  \
        HR_L(K11, K12, K13, K14), K15, KC_NO, KC_NO, K16, HR_R(K17, K18, K19, K1A), \
             K21, K22, K23, K24,  K25, KC_NO, KC_NO, K26,      K27, K28, K29, K2A,  \
 KC_NO, KC_NO, LT(_NAV,K34), LT(_NUMBER,K35), LT(_SYMBOL,K36), K37, KC_NO, KC_NO    \
 )
#define LAYOUT_brick_base_wrapper(...) LAYOUT_brick_base(__VA_ARGS__)
#define LAYOUT_brick_wrapper(...)      LAYOUT_brick_2x2u_wrapper(__VA_ARGS__)

// ######################## -- 3X5+3 -- ######################## //
// 1. Define the LAYOUT macro for the keyboard, if it doesn't already exist. This is defined in json.
// 2. Wrap it in a wrapper with (...) and __VA_ARGS__.
// 3. Define a new layout with all the keys used that redefines the wrapper from #2.
// 4. That new layout will have to be wrapped (in the target keymap file, I suppose).

#define LAYOUT_microdox_layer(...) LAYOUT_split_3x5_3(__VA_ARGS__)

#define LAYOUT_3x53_base_layer( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, \
              K33, K34, K35, K36, K37, K38            \
) \
LAYOUT_microdox_layer( \
            K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
            K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
            K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, \
       K33, LT(_NUMBER,K34), K35, K36, LT(_SYMBOL,K37), K38 \
 )
