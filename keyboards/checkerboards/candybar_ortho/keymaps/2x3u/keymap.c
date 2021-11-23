/* Copyright 2021 Nathan Spears
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.s
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H


// Defines for task manager and such
#define CALTDEL LCTL(LALT(KC_DEL))
#define TSKMGR LCTL(LSFT(KC_ESC))


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* 0
 * .----------------------------------------------------------------------------------------------------------------------.
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Home | Tab  |   Q  |   W  |   E  |   R  |   T  |  N7  |  N8  |  N9  | NLCK |  Y   |   U  |   I  |   O  |  P  |  Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | PgUp |C(ESC)|   A  |   S  |   D  |   F  |   G  |  N4  |  N5  |  N6  |  +   |  H   |  J   |   K  |   L  | '"  |  ;:   |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | PgDn |Shift |   Z  |   X  |   C  |   V  |   B  |  N1  |  N2  |  N3  |   -  |   N  |  M   |   ,  |   .  |   ?  |  Ent |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Grv  | L-OS | LAlt |  RGB |       Lay1-TT      |  NO |  Dot  |   /  |     Spac(Lay2)     | RALT |RCTRL |C.A.D.| Caps |
 * '----------------------------------------------------------------------------------------------------------------------'
 */
[0] = LAYOUT_2x3u(
  KC_HOME, KC_TAB,          KC_Q,      KC_W,     KC_E,    KC_R,    KC_T,    KC_P7,   KC_P8,   KC_P9,   KC_NLCK,  KC_Y,     KC_U,   KC_I,     KC_O,     KC_P,      KC_BSPC,
  KC_PGUP, CTL_T(KC_ESC),   KC_A,      KC_S,     KC_D,    KC_F,    KC_G,    KC_P4,   KC_P5,   KC_P6,   KC_PPLS,  KC_H,     KC_J,   KC_K,     KC_L,     KC_SCLN,   KC_QUOT,
  KC_PGDN, KC_LSFT,         KC_Z,      KC_X,     KC_C,    KC_V,    KC_B,    KC_P1,   KC_P2,   KC_P3,   KC_PMNS,  KC_N,     KC_M,   KC_COMM,  KC_DOT,   KC_SLSH,   KC_ENT,
  KC_GRV,  KC_LGUI,         KC_LALT,   RGB_TOG,           TT(1),            KC_P0,   KC_PDOT, KC_BSLS,        LT(2, KC_SPC),       KC_RALT,  KC_RCTRL, CALTDEL,   KC_CAPS
),

/* 1
 * .----------------------------------------------------------------------------------------------------------------------.
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |  ~   |      |   !  |  @   |   #  |  $   |  %   |      |      |      |      |  ^   |  &   |  *   |  (   |  )  |  Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |   \  |      |   1  |   2  |   3  |   4  |   5  |      |      |      |      |  6   |   7  |   8  |   9  |   0  |  /   |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |   +  |   =  |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |C.A.D.| TMGR |      |      |                    |      |      |      |                    |      |  SPC |   |  |   `  |
 * '----------------------------------------------------------------------------------------------------------------------'
 */
[1] = LAYOUT_2x3u(
  KC_TILD, _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, _______, _______, _______, _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN,  KC_RPRN, KC_BSPC,
  KC_SLSH, _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, _______, _______, _______, _______,    KC_6,    KC_7,    KC_8,    KC_9,     KC_0, KC_BSLS,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  KC_PPLS,  KC_EQL, _______, _______, _______,
  CALTDEL,  TSKMGR, _______, _______, _______, _______, _______, _______, _______, _______, KC_SPC, KC_NUBS,   KC_GRV
),

/* 2
 * .----------------------------------------------------------------------------------------------------------------------.
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | RHUI | RSAI |      |      |  UP  |      |      |      |      |      |      |      |   _  |      |  (   |  )  |  RVAI |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | RHUD | RSAD |      | LEFT | DOWN |RIGHT |      |      |      |      |      |      |   -  |      |   [  |   ]  | RVAD |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |  F1  |  F2  |  F3  |  F4  |  F5  |      |      |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |RESET | RTOG |      |      |                    |      |      |      |                    |      |      | RMOD |RRMOD |
 * '----------------------------------------------------------------------------------------------------------------------'
 */
[2] = LAYOUT_2x3u(
  RGB_HUI,  RGB_SAI, _______, _______, KC_UP,   _______, _______, _______, _______, _______, _______, _______, KC_UNDS, _______, KC_LBRC, KC_RBRC, RGB_VAI,
  RGB_HUD,  RGB_SAD, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, KC_MINS, _______, KC_LCBR, KC_RCBR, RGB_VAD,
  _______,  _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, _______, _______,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, _______,
  RESET, RGB_TOG,  _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_MOD, RGB_RMOD
),
};
