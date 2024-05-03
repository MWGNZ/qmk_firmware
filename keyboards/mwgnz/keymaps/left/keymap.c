// Copyright 2021 MWGNZ (@MWGNZ)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define QWERTY 0 // Base qwerty

enum layer_names {
    _BASE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	KEYMAP(
		KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, 
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_PAST, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_PSLS, 
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_PMNS, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, 
		KC_LCTL, KC_LGUI, KC_LALT, KC_UP, KC_MUTE, 
		KC_LEFT, KC_DOWN, KC_RGHT, 
		KC_F22, KC_SPC)
};

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   // If console is enabled, it will print the matrix position and status of each key pressed
// #ifdef CONSOLE_ENABLE
//     uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
// #endif 
//   return true;
// }