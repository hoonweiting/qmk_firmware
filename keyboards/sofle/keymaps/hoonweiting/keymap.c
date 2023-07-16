 /* Copyright 2023 Hoon Wei Ting
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

#include QMK_KEYBOARD_H

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),           ENCODER_CCW_CW(KC_PGDN, KC_PGUP) },
    [1] = { ENCODER_CCW_CW(_______, _______),           ENCODER_CCW_CW(_______, _______) },
    [2] = { ENCODER_CCW_CW(_______, _______),           ENCODER_CCW_CW(_______, _______) },
    [3] = { ENCODER_CCW_CW(_______, _______),           ENCODER_CCW_CW(_______, _______) }
};
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |   -  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |Layer1|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |   '  |
 * |------+------+------+------+------+------|  Mute |    |       |------+------+------+------+------+------|
 * |LShift|   /  |   Z  |   X  |   C  |   V  |-------|    |-------|   B  |   N  |   M  |   ,  |   .  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LCtl | LAlt | LGUI |Space | /Layer2 /       \Layer3\  |Enter | RGUI | RAlt | RCtl |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `-----------------------------------'           '------''---------------------------'
 */

[0] = LAYOUT(
  KC_GRV,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                        KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  MO(1),    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                        KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT,  KC_SLSH, KC_Z,    KC_X,    KC_C,    KC_V,   KC_MUTE,    XXXXXXX, KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_RSFT,
                     KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, MO(2),      MO(3),   KC_ENT, KC_RGUI, KC_RALT, KC_RCTL
),
/* LAYER1
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | Esc  |   !  |   @  |   #  |   $  |   %  |                    |   ^  |   &  |   *  |   (  |   )  | Del  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |      |      |      |      |      |                    |   _  |   +  |   {  |   }  |   \  |   |  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |Layer1|      |      |CapsW | Caps |  SS  |-------.    ,-------|   -  |   =  |   [  |   ]  |   :  |   "  |
 * |------+------+------+------+------+------|  Mute |    |       |------+------+------+------+------+------|
 * |LShift|      | Undo | Cut  | Copy |Paste |-------|    |-------|   ,  |   .  |   ?  |   <  |   >  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LCtl | LAlt | LGUI |Space | /Layer2 /       \Layer3\  |Enter | RGUI | RAlt | RCtl |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `-----------------------------------'           '------''---------------------------'
 */

[1] = LAYOUT(
  KC_ESC,  S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),                      S(KC_6),    S(KC_7),   S(KC_8),    S(KC_9),    S(KC_0),    KC_DEL,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      S(KC_MINS), S(KC_EQL), S(KC_LBRC), S(KC_RBRC), KC_BSLS,    S(KC_BSLS),
  _______, XXXXXXX, XXXXXXX, CW_TOGG, KC_CAPS, MEH(4),                       KC_MINS,    KC_EQL,    KC_LBRC,    KC_RBRC,    S(KC_SCLN), S(KC_QUOT),
  _______, XXXXXXX, G(KC_Z), G(KC_X), G(KC_C), G(KC_V), _______,    _______, KC_COMM,    KC_DOT,    S(KC_SLSH), S(KC_COMM), S(KC_DOT),  _______,
                    _______, _______, _______, _______, _______,    _______, _______,    _______,   _______,    _______
),
/* LAYER2
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | Esc  |MiCtl | LPad | Prev | Play | Next |                    |      |      |      |      |      | Del  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |      | Home |  Up  | End  | PgUp |                    |      |   7  |   8  |   9  |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |Layer1|      | Left | Down |Right | PgDn |-------.    ,-------|   .  |   4  |   5  |   6  |      |      |
 * |------+------+------+------+------+------|  Mute |    |       |------+------+------+------+------+------|
 * |LShift|BrgDn |BrgUp | Mute |VolDn |VolUp |-------|    |-------|   0  |   1  |   2  |   3  |      |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LCtl | LAlt | LGUI |Space | /Layer2 /       \Layer3\  |Enter | RGUI | RAlt | RCtl |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[2] = LAYOUT(
  KC_ESC,  KC_MCTL, KC_LPAD, KC_MPRV, KC_MPLY, KC_MNXT,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_DEL,
  _______, XXXXXXX, KC_HOME, KC_UP,   KC_END,  KC_PGUP,                      XXXXXXX, KC_P7,   KC_P8,   KC_P9,   XXXXXXX, XXXXXXX,
  _______, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,                      KC_PDOT, KC_P4,   KC_P5,   KC_P6,   XXXXXXX, XXXXXXX,
  _______, KC_BRID, KC_BRIU, KC_MUTE, KC_VOLD, KC_VOLU, _______,    _______, KC_P0,   KC_P1,   KC_P2,   KC_P3,   XXXXXXX, _______,
                    _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______
),
/* LAYER3
 * ,----------------------------------------.                     ,-----------------------------------------.
 * | Esc  |      |      |      |      |      |                    |  F1  |  F2  |  F3  |  F4  |  F5  | Del  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |      |      |      |      |      |                    | PgUp | Home |  Up  | End  |      | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |Layer1|      |      |      |      |      |-------.    ,-------| PgDn | Left | Down |Right |      | F12  |
 * |------+------+------+------+------+------|  Mute  |   |       |------+------+------+------+------+------|
 * |LShift|      |      |      |      |      |--------|   |-------|  F6  |  F7  |  F8  |  F9  | F10  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LCtl | LAlt | LGUI |Space | /Layer2 /       \Layer3\  |Enter | RGUI | RAlt | RCtl |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[3] = LAYOUT(
  KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_F1,   KC_F2  , KC_F3,   KC_F4,   KC_F5,   KC_DEL,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_DEL,  KC_F12,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, KC_F11,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,    _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
                    _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______
)
};
