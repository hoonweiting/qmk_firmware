#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Layer1|   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   /  |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | Alt  | GUI  |Layer4|Layer2|Space |Enter |Layer3|      | GUI  | Alt  | Ctrl |
 * `-----------------------------------------------------------------------------------'
 */
[0] = LAYOUT_ortho_4x12(
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  MO(1),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT, KC_SLSH, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_RSFT,
  KC_LCTL, KC_LALT, KC_LGUI, TG(4),   MO(2),   KC_SPC,  KC_ENT,  MO(3),   XXXXXXX, KC_RGUI, KC_RALT, KC_RCTL
),

/* Layer1
 * ,-----------------------------------------------------------------------------------.
 * |  Esc |      |      |      |      |      |   _  |   +  |   {  |   }  |   \  |  |   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Layer1|      |      |      | Caps |  SS  |   -  |   =  |   [  |   ]  |   :  |   "  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|      |      |      |      |      |   ,  |   .  |   ?  |   <  |   >  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | Alt  | GUI  |Layer4|Layer2|Space |Enter |Layer3|      | GUI  | Alt  | Ctrl |
 * `-----------------------------------------------------------------------------------'
 */
[1] = LAYOUT_ortho_4x12(
  KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_BSLS, KC_PIPE,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, KC_CAPS, KC_PSCR, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_COLN, KC_DQUO,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_COMM, KC_DOT,  KC_QUES, KC_LT,   KC_GT,   _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

/* Layer2
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |VolUp | Home |  Up  | End  | PgUp |      |   7  |   8  |   9  |      | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   `  |VolDn | Left | Down |Right | PgDn |   .  |   4  |   5  |   6  |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift| Mute | Prev | Play | Next | BOOT |   0  |   1  |   2  |   3  |      |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | Alt  | GUI  |Layer4|Layer2|Space |Enter |Layer3|      | GUI  | Alt  | Ctrl |
 * `-----------------------------------------------------------------------------------'
 */
[2] = LAYOUT_ortho_4x12(
  KC_ESC,  KC_VOLU, KC_HOME, KC_UP,   KC_END,  KC_PGUP, XXXXXXX, KC_7,    KC_8,    KC_9,    XXXXXXX, KC_DEL,
  KC_GRV,  KC_VOLD, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_DOT,  KC_4,    KC_5,    KC_6,    XXXXXXX, XXXXXXX,
  _______, KC_MUTE, KC_MPRV, KC_MPLY, KC_MNXT, QK_BOOT, KC_0,    KC_1,    KC_2,    KC_3,    XXXXXXX, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

/* Layer3
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |  F1  |  F2  |  F3  |  F4  |  F5  | PgUp | Home |  Up  | End  |      | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   `  |  F6  |  F7  |  F8  |  F9  | F10  | PgDn | Left | Down |Right |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift| F11  | F12  |      |      |      | BOOT |      |      |      |      |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | Alt  | GUI  |Layer4|Layer2|Space |Enter |Layer3|      | GUI  | Alt  | Ctrl |
 * `-----------------------------------------------------------------------------------'
 */
[3] =  LAYOUT_ortho_4x12(
  KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_PGUP, KC_HOME, KC_UP,   KC_END,  XXXXXXX, KC_DEL,
  KC_GRV,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
  _______, KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

/* Layer4
 * ,-----------------------------------------------------------------------------------.
 * |   C  |  C#  |   D  |  D#  |   E  |   F  |  F#  |   G  |  G#  |   A  |  A#  |  B   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   C  |  C#  |   D  |  D#  |   E  |   F  |  F#  |   G  |  G#  |   A  |  A#  |  B   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   C  |  C#  |   D  |  D#  |   E  |   F  |  F#  |   G  |  G#  |   A  |  A#  |  B   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | MscOn|MscOff|MscNxt|Layer4|      |OctDn |OctUp |      |      |      |MidOff|MidOn |
 * `-----------------------------------------------------------------------------------'
 */
[4] =  LAYOUT_ortho_4x12(
  MI_C2,   MI_Cs2,  MI_D2,   MI_Ds2,  MI_E2,   MI_F2,   MI_Fs2,  MI_G2,   MI_Gs2,  MI_A2,   MI_As2,  MI_B2,
  MI_C1,   MI_Cs1,  MI_D1,   MI_Ds1,  MI_E1,   MI_F1,   MI_Fs1,  MI_G1,   MI_Gs1,  MI_A1,   MI_As1,  MI_B1,
  MI_C,    MI_Cs,   MI_D,    MI_Ds,   MI_E,    MI_F,    MI_Fs,   MI_G,    MI_Gs,   MI_A,    MI_As,   MI_B,
  MU_ON,   MU_OFF,  MU_NEXT, _______, XXXXXXX, MI_OCTD, MI_OCTU, XXXXXXX, XXXXXXX, XXXXXXX, MI_OFF,  MI_ON
)


};

bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case QK_MIDI_NOTE_C_0 ... QK_MIDI_NOTE_B_5:
      return true;
    default:
      return false;
  }
}
