#include QMK_KEYBOARD_H

enum layer_number {
  _COLEMAKW = 0,
  _COLEMAKM,
  _LOWER,
  _RAISE,
  _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* COLEMAKW
* Colemak w/HRMs set up for Windows
 */

 [_COLEMAKW] = LAYOUT(
  KC_EQL,   KC_1,           KC_2,           KC_3,           KC_4,             KC_5,                                                KC_6,              KC_7,             KC_8,           KC_9,           KC_0,            KC_MINS,
  KC_TAB,   KC_Q,           KC_W,           KC_F,           KC_P,             KC_G,                                                KC_J,              KC_L,             KC_U,           KC_Y,           KC_SCLN,         KC_GRV,
  KC_BSPC,  LSFT_T(KC_A),   LALT_T(KC_R),   LCTL_T(KC_S),   LGUI_T(KC_T),     KC_D,                                                KC_H,              RGUI_T(KC_N),     RCTL_T(KC_E),   RALT_T(KC_I),   RSFT_T(KC_O),    KC_QUOT,
  KC_ESC,   LCTL_T(KC_Z),   KC_X,           KC_C,           LSFT_T(KC_V),     KC_B,             LCA_T(KC_MINUS),  MEH_T(KC_MINUS), KC_K,              RSFT_T(KC_M),    KC_COMM,        KC_DOT,         RCTL_T(KC_SLSH), CW_TOGG,
                                            KC_DEL,         KC_LEFT,          LALT_T(KC_RIGHT), LT(2, KC_SPC),                     LT(3, KC_ENT),     RALT_T(KC_DOWN),  KC_UP,          KC_RGUI
),
/* COLEMAKM
* Colemak w/HRMs set up for Mac OS
 */

 [_COLEMAKM] = LAYOUT(
  KC_EQL,   KC_1,           KC_2,           KC_3,           KC_4,             KC_5,                                                 KC_6,             KC_7,             KC_8,           KC_9,           KC_0,            KC_MINS,
  KC_TAB,   KC_Q,           KC_W,           KC_F,           KC_P,             KC_G,                                                 KC_J,             KC_L,             KC_U,           KC_Y,           KC_SCLN,         KC_GRV,
  KC_BSPC,  LSFT_T(KC_A),   LCTL_T(KC_R),   LGUI_T(KC_S),   LALT_T(KC_T),     KC_D,                                                 KC_H,             RALT_T(KC_N),     RGUI_T(KC_E),   RCTL_T(KC_I),   RSFT_T(KC_O),    KC_QUOT,
  KC_ESC,   LGUI_T(KC_Z),   KC_X,           KC_C,           LSFT_T(KC_V),     KC_B,             LCA_T(KC_MINUS),   MEH_T(KC_MINUS), KC_K,             RSFT_T(KC_M),    KC_COMM,        KC_DOT,         RGUI_T(KC_SLSH), CW_TOGG,
                                            KC_DEL,         KC_LEFT,          LALT_T(KC_RIGHT), LT(2, KC_SPC),                      LT(3, KC_ENT),    RALT_T(KC_DOWN),  KC_UP,          KC_RGUI
),
/* LOWER
 * Number and symbol layer
 */
[_LOWER] = LAYOUT(
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                                   KC_F7,          KC_F8, KC_F9, KC_F10, KC_F11,  KC_F12,
  KC_BSLS, KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_PIPE,                                 KC_TRNS,        KC_P7, KC_P8, KC_P9,  KC_PAST, KC_TILD,
  KC_SCLN, KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_GRAVE,                                KC_CIRC,        KC_P4, KC_P5, KC_P6,  KC_PPLS, KC_MINUS,
  KC_AMPR, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, LCTL(KC_BSPC), LALT(KC_F4), RALT(KC_F4), RCTL(KC_BSPC),  KC_P1, KC_P2, KC_P3,  KC_SLSH, KC_COLN,
                             KC_TRNS, KC_TRNS, KC_LCTL,       KC_TRNS,     KC_TRNS,     KC_TRNS, KC_P0, KC_P0
),
/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |-------.    ,-------|      | Left | Down |  Up  |Right |      |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |  F7  |  F8  |  F9  | F10  | F11  | F12  |-------|    |-------|   +  |   -  |   =  |   [  |   ]  |   \  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_RAISE] = LAYOUT(
  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                          TO(0),    TO(1),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS,  KC_TRNS,  KC_NO,    MS_UP,    KC_NO,    MS_WHLU,                          KC_NO,    KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_TRNS,
  KC_TRNS,  KC_LGUI,  MS_LEFT,  MS_DOWN,  MS_RGHT,  MS_WHLD,                          KC_NO,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,
  KC_TRNS,  KC_LCTL,  KC_LSFT,  MS_BTN1,  MS_BTN2,  KC_LEFT_SHIFT,  KC_TRNS, KC_TRNS, KC_PLUS,  KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
                                KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
  [_ADJUST] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
