// Copyright 2021 MWGNZ (@MWGNZ)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0xDEAD
#define DEVICE_VER   0xBEEF
#define MANUFACTURER MWGNZ
#define PRODUCT      mwgnz

/* key matrix size */
#define MATRIX_ROWS 16
#define MATRIX_COLS 9

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS       { D1, D0, D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS_RIGHT { B3, B2, B1, F7, B6, F4, F5, F6 }
#define MATRIX_COL_PINS       { F5, F6, F7, B1, B3, B2, B6, NO_PIN, NO_PIN }
#define MATRIX_COL_PINS_RIGHT { D3, D1, D0, D4, C6, E6, D7, B5, B4 }

#define EE_HANDS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION ROW2COL

/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
#define SOFT_SERIAL_PIN D2  // or D1, D2, D3, E6
#define USE_SERIAL

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 15

#define FORCE_NKRO

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
#define NO_ACTION_LAYER
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
#define BOOTMAGIC_LITE_ROW_RIGHT 0
#define BOOTMAGIC_LITE_COLUMN_RIGHT 15