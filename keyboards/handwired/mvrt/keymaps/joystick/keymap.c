#include QMK_KEYBOARD_H
#include "rgb_matrix.h"
#include "color.h"
#include <stdint.h>

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
        QK_JOYSTICK_BUTTON_0 /*RGB_MOD*/, QK_JOYSTICK_BUTTON_1, QK_JOYSTICK_BUTTON_2, QK_JOYSTICK_BUTTON_3, QK_JOYSTICK_BUTTON_4, \
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

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    

//     if (record->event.pressed) {
//         switch (keycode){
//             case QK_JOYSTICK_BUTTON_0:
//                 rgb_matrix_set_color(0, RGB_AZURE);
//                 return false;
//             case QK_JOYSTICK_BUTTON_1:
//                 rgb_matrix_set_color(1, RGB_GREEN);
//                 return false;
//         }
//     }
//     return true;
// }


// bool process_record_user(uint16_t keycode, keyrecord_t *record) {

//     if (record->event.pressed) {
//         for (uint8_t i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
//             rgb_matrix_set_color(i, 0, 0, 255);
//         }

//         switch (keycode) {
//             case RGB_MOD:  // Change to a specific key you want to use
//                 rgb_matrix_mode(rgb_matrix_get_mode() + 1); // Cycle to next animation
//                 return false;  // Prevents default behavior of the key
//             case QK_JOYSTICK_BUTTON_0:
//                 rgb_matrix_mode(RGB_MATRIX_SOLID_REACTIVE_SIMPLE);
//                 return false;
//         }
//     }
//     return true;
// }

bool process_record_user(uint16_t keycode, keyrecord_t *record){
    // if (record->event.pressed){
        
    //     switch(keycode){
    //         case QK_JOYSTICK_BUTTON_1:
    //             rgb_matrix_set_color(1, RGB_GREEN);
    //             return false;
    //         case QK_JOYSTICK_BUTTON_3:
    //             rgb_matrix_set_color(3, RGB_GREEN);
    //             return false;
    //         case QK_JOYSTICK_BUTTON_7:
    //             rgb_matrix_set_color(10, RGB_GREEN);
    //             return false;
    //         case QK_JOYSTICK_BUTTON_9:
    //             rgb_matrix_set_color(8, RGB_GREEN);
    //             return false;
    //         case QK_JOYSTICK_BUTTON_13:
    //             rgb_matrix_set_color(13, RGB_GREEN);
    //             return false;
    //         case QK_JOYSTICK_BUTTON_15:
    //             rgb_matrix_set_color(15, RGB_GREEN);
    //             return false;
    //         case QK_JOYSTICK_BUTTON_20:
    //             rgb_matrix_set_color(21, RGB_GREEN);
    //             return false;

    //         case QK_JOYSTICK_BUTTON_18:
    //             rgb_matrix_set_color(23, RGB_BLUE);
    //             return false;
    //         case QK_JOYSTICK_BUTTON_22:
    //             rgb_matrix_set_color(19, RGB_BLUE);
    //             return false;
    //     }
    // }

    hsv_t hsv_color = { .h = (uint8_t)250, .s = (uint8_t)1, .v = (uint8_t)50 };
    rgb_t rgb_color = hsv_to_rgb(hsv_color);
    rgb_matrix_set_color_all(rgb_color.r, rgb_color.g, rgb_color.b);

    uint8_t reef[7] = {1, 3, 10, 8, 13, 15, 21}; // justin this is the array you change
    hsv_t hsv_color1 = { .h = (uint8_t)300, .s = (uint8_t)1, .v = (uint8_t)1 };
    rgb_t rgb_color1 = hsv_to_rgb(hsv_color1);
    for(uint8_t i = 0; i < 7; i++){
        rgb_matrix_set_color(reef[i], rgb_color1.r, rgb_color1.g, rgb_color1.b);
        //rgb_matrix_set_color(reef[i], 75, 175, 70);
    }

    // uint8_t climb[2] = {23, 19};
    // hsv_t hsv_color2 = { .h = (uint8_t)180, .s = (uint8_t)1, .v = (uint8_t)1 };
    // rgb_t rgb_color2 = hsv_to_rgb(hsv_color2);
    // for(uint8_t i = 0; i < 2; i++){
    //     rgb_matrix_set_color(climb[i], rgb_color2.r, rgb_color2.g, rgb_color2.b);
    //     //rgb_matrix_set_color(climb[i], 90, 120, 170);
    // }
    return true;
}
