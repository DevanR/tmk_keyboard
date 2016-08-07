#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: Default layer
     * ,-------------------------------------------------------.
     * |ESC   |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|    Bspc|
     * |-------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|Fn1|  Return|
     * |-------------------------------------------------------|
     * |      |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|        |
     * |-------------------------------------------------------|
     * |      |   |SPR|Shift|Tab| |   |SPC|Fn2|Alt|   |        |
     * `-------------------------------------------------------'
     */
    KEYMAP(
        ESC, Q,   W,   E,   R,   T,   Y,   U,   I,   O,     P,  BSPC, \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   FN1,   ENT, \
             Z,   X,   C,   V,   B,   N,   M,COMM, DOT,   SLSH,       \
                LGUI,FN0, TAB,           SPC, FN2, RALT              ),




    /* 1: FN 0
     * ,-------------------------------------------------------.
     * |ESC   |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|    Bspc|
     * |-------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  Return|
     * |-------------------------------------------------------|
     * |      |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|        |
     * |-------------------------------------------------------|
     * |      |   |SPR|LSFT|Tab|   |   |SPC|Fn|Alt|  |        |
     * `-------------------------------------------------------'
     */
    KEYMAP(
        TRNS, Q,   W,   E,   R,   T,   Y,   U,   I,   O,      P,  TRNS, \
        TRNS, A,   S,   D,   F,   G,   H,   J,   K,   L,   TRNS,  TRNS, \
              Z,   X,   C,   V,   B,   N,   M,COMM, DOT,   TRNS,        \
                TRNS,TRNS, TRNS,           TRNS, TRNS, TRNS            ),






    /* 1: FN 1
     * ,-------------------------------------------------------.
     * |ESC   |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|    Bspc|
     * |-------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  Return|
     * |-------------------------------------------------------|
     * |      |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|        |
     * |-------------------------------------------------------|
     * |      |   |SPR| Fn|Tab|   |   |SPC|Fn|Alt|  |        |
     * `-------------------------------------------------------'
     */
    KEYMAP(
        TRNS, Q,   W,   E,   R,   T,   Y,   U,   I,   O,      P,  TRNS, \
        TRNS, A,   S,   D,   F,   G,   H,   J,   K,   L,   TRNS,  TRNS, \
              Z,   X,   C,   V,   B,   N,   M,COMM, DOT,   TRNS,        \
                TRNS,TRNS, TRNS,           TRNS, TRNS, TRNS            ),
};

const uint16_t PROGMEM fn_actions[] = {

};
