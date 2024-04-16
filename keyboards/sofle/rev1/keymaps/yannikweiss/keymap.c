#include QMK_KEYBOARD_H

enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _QWERTY,
    _LO,
    _HI,
};

// first has to equal SAFE_RANGE
//enum custom_keycodes {
//};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  DEL |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_QWERTY] = LAYOUT(
  KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                         KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_DEL ,
  KC_ESC , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                         KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,
  KC_TAB , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                         KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
  KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_MUTE,       XXXXXXX, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
                    KC_LGUI, KC_LALT, KC_LCTL, MO(_LO), KC_ENT ,       KC_SPC , MO(_HI), KC_RCTL, KC_RALT, KC_RGUI
),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |      |      |   -  |   _  |      |                    |      |      |      |      |      | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |      |   [  |   {  |   (  |      |-------.    ,-------|      |   )  |   }  |   ]  |      |      |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * | Shift|      |      |   =  |   +  |      |-------|    |-------|      |   |  |   \  |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *           | LGUI | LAlt | LCTR |LOWER |  /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *           |      |      |      |      | /       /         \      \ |      |      |      |      |
 *           `---------------------------''-------'           '------''---------------------------'
 */
[_LO] = LAYOUT(
  XXXXXXX, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                         KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
  _______, XXXXXXX, XXXXXXX, KC_MINS, KC_UNDS, XXXXXXX,                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F12 ,
  _______, XXXXXXX, KC_LBRC, KC_LCBR, KC_LPRN, XXXXXXX,                         XXXXXXX, KC_RPRN, KC_RCBR, KC_RBRC, XXXXXXX, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, KC_EQL , KC_PLUS, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, KC_PIPE, KC_BSLS, XXXXXXX, XXXXXXX, XXXXXXX,
                    _______, _______, _______, XXXXXXX, _______,       _______, XXXXXXX, _______, _______, _______
),
/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  |      |      |  B-  |  B+  |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |      |      |  BW  |  FW  |  PP  |-------.    ,-------| Left | Down | Up   | Rigth|      |      |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |Shift |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *           | LGUI | LAlt | LCTR |LOWER |  /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *           |      |      |      |      | /       /         \      \ |      |      |      |      |
 *           `---------------------------''-------'           '------''---------------------------'
 */
[_HI] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, KC_BRID, KC_BRIU, XXXXXXX,                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, KC_MPRV, KC_MNXT, KC_MPLY,                         KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, XXXXXXX, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                    _______, _______, _______, XXXXXXX, _______,       _______, XXXXXXX, _______, _______, _______
),
};

#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };

    oled_write_P(qmk_logo, false);
}

static void print_status_narrow(void) {
    // Print current mode
    //oled_write_P(PSTR("\n\n"), false);
    //oled_write_ln_P(PSTR("MODE"), false);
    //oled_write_ln_P(PSTR(""), false);
    //if (keymap_config.swap_lctl_lgui) {
    //    oled_write_ln_P(PSTR("MAC"), false);
    //} else {
    //    oled_write_ln_P(PSTR("WIN"), false);
    //}
    //oled_write_P(PSTR("\n\n"), false);

    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case _HI:
            oled_write_P(PSTR("Raise"), false);
            break;
        case _LO:
            oled_write_P(PSTR("Lower"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);

    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);

    oled_write_P(PSTR("\n\n"), false);
    static char wpm_str[16];
    sprintf(wpm_str, "WPM:\n%03d", get_current_wpm());
    oled_write(wpm_str, false);

}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
    return false;
}

#endif

//layer_state_t layer_state_set_user(layer_state_t state) {
//    return update_duo_layer_state(state, _LO, _HI);
//}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    }
    return true;
}

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return false;
}

#endif
