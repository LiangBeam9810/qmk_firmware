
#include QMK_KEYBOARD_H
#include "print.h"
#include <stdio.h>

/* [Keymaps] ----------------------------------------------------------------- */
enum layer_names {
    _BASE,
    _CAPS,
    _FN,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_MUTE,  //
                     KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,                    //
                     KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,                   //
                     LT(2, KC_CAPS), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,                  //
                     KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_RIGHT,           //
                     KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, MO(2), KC_RCTL, KC_LEFT, KC_DOWN),               

    [_CAPS] = LAYOUT(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_MS_L,  //
                      KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,                    //
                      KC_TAB, KC_BSPC, KC_UP, KC_ENT, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,                   //
                      KC_CAPS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,                         //
                      KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_WH_U, KC_WH_R,           //
                      KC_LCTL, KC_LGUI, KC_LALT, KC_MS_L, KC_RALT, MO(2), KC_RCTL, KC_WH_L, KC_WH_D),                                     //

    [_FN] = LAYOUT(RESET  , RGB_HUI, RGB_HUD,  RGB_SAI,  RGB_SAD,  RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE,            //
                   KC_TRNS, RGB_M_P, RGB_M_B,  RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, RGB_M_TW, KC_TRNS, KC_TRNS, KC_TRNS,  //
                   KC_TRNS, KC_HOME,   KC_UP,  KC_END,   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,    KC_7,    KC_8,     KC_9, KC_TRNS, KC_TRNS, KC_TRNS,                    //
                   KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_4,    KC_5,     KC_6, KC_TRNS, KC_WH_U,                                 //
                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_1,    KC_2,     KC_3, KC_TRNS, KC_WH_D, KC_TRNS,                            //
                   KC_TRNS, TG(1), KC_TRNS, RGB_TOG, KC_0, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },//KC_VOLD, KC_VOLU
    [_CAPS] = { ENCODER_CCW_CW(KC_WH_D, KC_WH_U) },
    [_FN] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
};
#endif


void keyboard_post_init_user(void) {
  /* Customise these values to desired behaviour */
  debug_enable=true;
  debug_matrix=true;
  /* debug_keyboard=true; */
  /* debug_mouse=true; */
}

