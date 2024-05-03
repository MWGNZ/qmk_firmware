// Copyright 2021 MWGNZ (@MWGNZ)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define KEYMAP( \
	K000, K001, K002, K003, K004, K005,             R008, R009, R010, R011, R012, R013, R014, R015, \
	K100, K101, K102, K103, K104, K105, K106, R107, R108, R109, R110, R111, R112, R113, R114, R115, \
	K200, K201, K202, K203, K204, K205, K206, R207, R208, R209, R210, R211, R212, R213, R214, R215, \
	K300, K301, K302, K303, K304, K305, K306, R307, R308, R309, R310, R311, R312, R313,       R315, \
	K400, K401, K402, K403, K404, K405,             R408, R409, R410, R411, R412, R413,             \
	K500, K501, K502,       K504, K505,       R507, R508,             R511, R512, R513,             \
	                  K603, K604, K605,       R607, R608, R609,                                     \
	                  K703, K704,                   R708, R709                                      \
) { \
{	K000,  K001,  K002,  K003,  K004, K005,  KC_NO, KC_NO, KC_NO }, \
{	K100,  K101,  K102,  K103,  K104, K105,  K106,  R107,  KC_NO }, \
{	K200,  K201,  K202,  K203,  K204, K205,  K206,  R207,  KC_NO }, \
{	K300,  K301,  K302,  K303,  K304, K305,  K306,  R307,  KC_NO }, \
{	K400,  K401,  K402,  K403,  K404, K405,  KC_NO, KC_NO, KC_NO }, \
{	K500,  K501,  K502,  KC_NO, K504, K505,  KC_NO, KC_NO, KC_NO }, \
{	KC_NO, KC_NO, KC_NO, K603,  K604, K605,  KC_NO, KC_NO, KC_NO }, \
{	KC_NO, KC_NO, KC_NO, K703,  K704, KC_NO, KC_NO, KC_NO, KC_NO }, \
{ KC_NO, R008, R009,  R010,  R011,  R012,  R013,  R014,  R015  }, \
{ R107,  R108, R109,  R110,  R111,  R112,  R113,  R114,  R115  }, \
{ R207,  R208, R209,  R210,  R211,  R212,  R213,  R214,  R215  }, \
{ R307,  R308, R309,  R310,  R311,  R312,  R313,  KC_NO, R315  }, \
{ KC_NO, R408, R409,  R410,  R411,  R412,  R413,  KC_NO, KC_NO }, \
{ R507,  R508, KC_NO, KC_NO, R511,  R512,  R513,  KC_NO, KC_NO }, \
{ R607,  R608, R609,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
{ KC_NO, R708, R709,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }  \
}



