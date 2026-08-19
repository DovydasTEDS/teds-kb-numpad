#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_NUM  , KC_PSLS , KC_PAST , KC_PMNS ,
        KC_P7   , KC_P8   , KC_P9   , KC_PPLS ,
        KC_P4   , KC_P5   , KC_P6   ,
        KC_P1   , KC_P2   , KC_P3   , KC_PENT ,
        KC_P0   , KC_PDOT
    )
};

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C
