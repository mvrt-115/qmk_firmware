#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( \
        QK_JOYSTICK_BUTTON_0 /*RGB_MOD*/, QK_JOYSTICK_BUTTON_1, QK_JOYSTICK_BUTTON_2, QK_JOYSTICK_BUTTON_3, QK_JOYSTICK_BUTTON_4, \
        QK_JOYSTICK_BUTTON_5, QK_JOYSTICK_BUTTON_6, QK_JOYSTICK_BUTTON_7, QK_JOYSTICK_BUTTON_8, QK_JOYSTICK_BUTTON_9, \
        QK_JOYSTICK_BUTTON_10, QK_JOYSTICK_BUTTON_11, QK_JOYSTICK_BUTTON_12, QK_JOYSTICK_BUTTON_13, QK_JOYSTICK_BUTTON_14, \
        QK_JOYSTICK_BUTTON_15, QK_JOYSTICK_BUTTON_16, QK_JOYSTICK_BUTTON_17, QK_JOYSTICK_BUTTON_18, QK_JOYSTICK_BUTTON_19, \
        QK_JOYSTICK_BUTTON_20, QK_JOYSTICK_BUTTON_21, QK_JOYSTICK_BUTTON_22, QK_JOYSTICK_BUTTON_23, QK_JOYSTICK_BUTTON_24, \
        QK_JOYSTICK_BUTTON_25, QK_JOYSTICK_BUTTON_26, QK_JOYSTICK_BUTTON_27, QK_JOYSTICK_BUTTON_28, QK_JOYSTICK_BUTTON_29 \
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case RGB_MOD:  // Change to a specific key you want to use
                rgb_matrix_mode(rgb_matrix_get_mode() + 1); // Cycle to next animation
                return false;  // Prevents default behavior of the key
            case QK_JOYSTICK_BUTTON_0:
                rgb_matrix_mode(RGB_MATRIX_SOLID_REACTIVE_SIMPLE);
                return false;
        }
    }
    return true;
}