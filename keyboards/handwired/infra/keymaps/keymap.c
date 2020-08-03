#include QMK_KEYBOARD_H

#define default 0
//#define raise 1
//#define lower 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [default] = LAYOUT(
        KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8,KC_9, KC_10, KC_BSPC,\
        KC_TAB, KC_Q, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U , KC_I, KC_O, KC_P, KC_QUOTE,\
        KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT,\
        KC_LGUI, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_BSLASH,\
        KC_LCTRL, MO(raise), KC_LSHIFT, KC_SPACE, LOWER, KC_LALT
    ),
    /*
    //make sure to put in raise/lower
    [raise] = LAYOUT(
        KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,\
        ALT_TAB, KC_HOME, KC_END, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_PGUP, KC_PGDOWN, KC_PSCREEN, KC_SCROLLLOCK, KC_F12,\
        KC_CAPSLOCK, KC_9, KC_0, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_NO,\
        KC_NO, KC_NO, ctrl_win_left, win_tab, ctrl_win_right, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,\
        KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS
    ),
    //change kc_9/kc_0 to () on line 20, and change kc_lbrc on line 18/19 to {} and [] via functions. maybe change line 21, second key to MO(raise?), change line 18 alt tab to alt tab (this one is ahrd....), line 20 to the desktop switching mode thing
    [lower] = LAYOUT(
        KC_NO, KC_NO, KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS, KC_NO, KC_NO, KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_STOP, KC_MEDIA_NEXT_TRACK, KC_DELETE,\
        KC_NO, KC_TAB, KC_KP_9, KC_KP_8, KC_KP_7, KC_NO, KC_NO, KC_AUDIO_MUTE, KC_AUDIO_VOL_UP, KC_AUDIO_VOL_DOWN, KC_SYSTEM_SLEEP, KC_INSERT,\
        KC_NO, KC_KP_EQUAL, KC_KP_6, KC_KP_5, KC_KP_4, KC_KP_PLUS, KC_NO, KC_NO, KC_MINUS, KC_MINUS, KC_EQUAL, KC_EQUAL, KC_NO,\
        KC_NO, KC_KP_ENTER, KC_KP_3, KC_KP_2, KC_KP_1, KC_NO, KC_NO, KC_BRIGHTNESS_UP, KC_BRIGHTNESS_DOWN, SETTINGS, KC_CALCULATOR, KC_NO,\
        KC_KP_DOT, KC_KP_0, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS
    )
    //change stuff on line 27 (should be _, -, +, = in that order), change settigns to windows+i (for settings)
}

enum custom_keycodes {
    LPARENTH = SAFE_RANGE,
    RPARENTH,
    LCURLY,
    RCURLY,
    LSQUARE,
    RSQUARE,
    LDESKTOP,
    RDESKTOP,
    TASK_VIEW,
    MINUS,
    PLUS,
    SETTINGS
};

*/
