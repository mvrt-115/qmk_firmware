#include QMK_KEYBOARD_H

// led_config_t g_led_config = { {
//     {29, 28, 27, 26, 25},
//     {20, 21, 22, 23, 24},
//     {19, 18, 17, 16, 15},
//     {10, 11, 12, 13, 14},
//     {9, 8, 7, 6, 5},
//     {0, 1, 2, 3, 4}
// },{

// 	// Physical X,Y coordinates of each LED, starting with LED 0 above.
// 	{224, 0}, {224, 16}, {224, 32}, {224, 48}, {224, 64},
//     {180, 0}, {180, 16}, {180, 32}, {180, 48}, {180, 64},
//     {135, 0}, {135, 16}, {135, 32}, {135, 48}, {135, 64},
//     {90, 0}, {90, 16}, {90, 32}, {90, 48}, {90, 64},
//     {45, 0}, {45, 16}, {45, 32}, {45, 48}, {45, 64},
//     {0, 0}, {0, 16}, {0, 32}, {0, 48}, {0, 64}

//     // {45, 0}, {45, 16}, {135, 32}, {135, 48}, {224, 64},
//     // {0, 64}, {45, 32}, {135, 16}, {135, 64}, {224, 48},
//     // {0, 48}, {45, 48}, {90, 0}, {180, 0}, {224, 32},
//     // {0, 32}, {45, 64}, {90, 64}, {180, 16}, {224, 16},
//     // {0, 16}, {90, 0}, {90, 48}, {180, 32}, {224, 0},
//     // {0, 0}, {90, 16}, {90, 32}, {180, 48}, {180, 64}

//     // {0,  0}, {20,  0}, {40,  0}, {60,  0}, {80,  0},
//     // {0, 16}, {20, 16}, {40, 16}, {60, 16}, {80, 16},
//     // {0, 32}, {20, 32}, {40, 32}, {60, 32}, {80, 32},
//     // {0, 48}, {20, 48}, {40, 48}, {60, 48}, {80, 48},
//     // {0, 64}, {20, 64}, {40, 64}, {60, 64}, {80, 64},
//     // {0, 80}, {20, 80}, {40, 80}, {60, 80}, {80, 80}

//     // {0,   0}, {16,  0}, {32,  0}, {48,  0}, {64,  0},
//     // {0,  45}, {16, 45}, {32, 45}, {48, 45}, {64, 45},
//     // {0,  90}, {16, 90}, {32, 90}, {48, 90}, {64, 90},
//     // {0, 135}, {16, 135}, {32, 135}, {48, 135}, {64, 135},
//     // {0, 180}, {16, 180}, {32, 180}, {48, 180}, {64, 180},
//     // {0, 224}, {16, 224}, {32, 224}, {48, 224}, {64, 224}

// },{
// 	// "Flag Assignment" of each key
// 	4, 4, 4, 4, 4,
//     4, 4, 4, 4, 4,
//     4, 4, 4, 4, 4,
//     4, 4, 4, 4, 4,
//     4, 4, 4, 4, 4,
//     4, 4, 4, 4, 4
// } };



//rows and cols are inverted
//for {K00, K01} etc each set of brackets is
// #define LAYOUT( 
//        K00, K01, K02, K03, K04, 
//        K05, K06, K07, K08, K09, 
//        K10, K11, K12, K13, K14, 
//        K15, K16, K17, K18, K19, 
//        K20, K21, K22, K23, K24, 
//        K25, K26, K27, K28, K29 
//  ) { 
//     {K25, K26, K27, K28, K29}, 
//     {K20, K21, K22, K23, K24}, 
//     {K15, K16, K17, K18, K19}, 
//     {K10, K11, K12, K13, K14}, 
//     {K05, K06, K07, K08, K09}, 
//     {K00, K01, K02, K03, K04} 
//   }



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
