#include QMK_KEYBOARD_H

// #ifndef ADC_PIN
// #    define ADC_PIN F6
// #endif

// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//     LAYOUT_ortho_1x1(JS_0)
// };

// void matrix_scan_user(void) {
//     int16_t val = (((uint32_t)timer_read() % 5000 - 2500) * 255) / 5000;
//     joystick_set_axis(1, val);
// }

// // Joystick config
// joystick_config_t joystick_axes[JOYSTICK_AXIS_COUNT] = {
//     [0] = JOYSTICK_AXIS_IN(ADC_PIN, 0, 512, 1023),
//     [1] = JOYSTICK_AXIS_VIRTUAL
// };

//rows and cols are inverted
//for {K00, K01} etc each set of brackets is 
#define LAYOUT( \
       K00, K01, K02, K03, K04, \
       K05, K06, K07, K08, K09, \
       K10, K11, K12, K13, K14, \
       K15, K16, K17, K18, K19, \
       K20, K21, K22, K23, K24, \
       K25, K26, K27, K28, K29 \
 ) { \
    {K25, K26, K27, K28, K29}, \
    {K20, K21, K22, K23, K24}, \
    {K15, K16, K17, K18, K19}, \
    {K10, K11, K12, K13, K14}, \
    {K05, K06, K07, K08, K09}, \
    {K00, K01, K02, K03, K04} \
  }



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( \
        QK_JOYSTICK_BUTTON_0, QK_JOYSTICK_BUTTON_1, QK_JOYSTICK_BUTTON_2, QK_JOYSTICK_BUTTON_3, QK_JOYSTICK_BUTTON_4, \
        QK_JOYSTICK_BUTTON_5, QK_JOYSTICK_BUTTON_6, QK_JOYSTICK_BUTTON_7, QK_JOYSTICK_BUTTON_8, QK_JOYSTICK_BUTTON_9, \
        QK_JOYSTICK_BUTTON_10, QK_JOYSTICK_BUTTON_11, QK_JOYSTICK_BUTTON_12, QK_JOYSTICK_BUTTON_13, QK_JOYSTICK_BUTTON_14, \
        QK_JOYSTICK_BUTTON_15, QK_JOYSTICK_BUTTON_16, QK_JOYSTICK_BUTTON_17, QK_JOYSTICK_BUTTON_18, QK_JOYSTICK_BUTTON_19, \
        QK_JOYSTICK_BUTTON_20, QK_JOYSTICK_BUTTON_21, QK_JOYSTICK_BUTTON_22, QK_JOYSTICK_BUTTON_23, QK_JOYSTICK_BUTTON_24, \
        QK_JOYSTICK_BUTTON_25, QK_JOYSTICK_BUTTON_26, QK_JOYSTICK_BUTTON_27, QK_JOYSTICK_BUTTON_28, QK_JOYSTICK_BUTTON_29 \
    )
    // [2] = LAYOUT(
    //     TT(0), TT(1)
    // ),
    // [0] = LAYOUT(
    //     QK_JOYSTICK_BUTTON_0, QK_JOYSTICK_BUTTON_1, QK_JOYSTICK_BUTTON_2, QK_JOYSTICK_BUTTON_3//,
    //     // QK_JOYSTICK_BUTTON_4, QK_JOYSTICK_BUTTON_5, QK_JOYSTICK_BUTTON_6, QK_JOYSTICK_BUTTON_7,
    //     // QK_JOYSTICK_BUTTON_8, QK_JOYSTICK_BUTTON_9, QK_JOYSTICK_BUTTON_10, QK_JOYSTICK_BUTTON_11
    // ),
    // [1] = LAYOUT(
    //     QK_JOYSTICK_BUTTON_4, QK_JOYSTICK_BUTTON_5, QK_JOYSTICK_BUTTON_6, QK_JOYSTICK_BUTTON_7
    // ),
};

