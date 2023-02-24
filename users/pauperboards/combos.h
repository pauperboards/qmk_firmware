/*
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
#include "quantum.h"

// #ifdef PAUPER_EXPERIMENTAL
// #   include "experimental.h"
// #else
#   include "wrappers.h"
// #endif

/*
 * Common key combos used in multiple keymaps.
 */

enum combo_events {
    // PC_ESC,
    PC_TAB,
    PC_LCTL, // Left control/[ mod-tap.
    PC_LALT, // Right control/] mod-tap.
    PC_LGUI,
    PC_RCTL,
    PC_RALT,
    PC_RGUI,
    PC_NAVTAP,

    /** base layer combos for symbols and tab/bspc */
    PC_LCBR,
    PC_RCBR,
    PC_LPRN,
    PC_RPRN,
    PC_BSL,
    PC_BSPC,
    PC_QOT,

    COMBO_LENGTH
};

