#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: Default layer
     * ,--------------------------------------------------------.
     * |ESC   |  Q|  W|   E|  R|  T|  Y|  U|  I|  O|  P|    Bspc|
     * |--------------------------------------------------------|
     * |TAB   |  A|  S|   D|  F|  G|  H|  J|  K|  L|  ;|  Return|
     * |--------------------------------------------------------|
     * |      |  Z|  X|   C|  V|  B|  N|  M|  ,|  .|  /|        |
     * |--------------------------------------------------------|
     * |      |   |ALT|CTRL|FN0|   |FN1|FN2|CTRL|  |        |
     * `-------------------------------------------------------'
     */
    KEYMAP(
        ESC, Q,   W,   E,   R,   T,   Y,   U,   I,   O,     P,  BSPC, \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,  SCLN,   ENT, \
             Z,   X,   C,   V,   B,   N,   M,COMM, DOT,  SLSH,        \
                LALT,FN0, TAB,           FN1, FN2, RCTL              ),

    /* 1: FN 0
     * ,-------------------------------------------------------------------.
     * |ESC   |   |   |  POWER|  SLEEP|  WAKE|  0|  1|  2|   3|  4|    Bspc|
     * |-------------------------------------------------------------------|
     * |TAB   |   |   |  EJECT|  PREV |  NEXT|  5|  6|  7|   8|  9|  Return|
     * |-------------------------------------------------------------------|
     * |      |   |   |   MUTE|  VOLU |  VOLD|  +|  -|  *|   /|  =|        |
     * |-------------------------------------------------------------------|
     * |      |   |ALT|    FN0|    Tab|      |   |FN1|FN2|CTRL|   |        |
     * `-------------------------------------------------------------------'
     */
    KEYMAP(
         ESC, TRNS,   TRNS,       POWER, SLEP, WAKE,    0,    1,    2,    3,    4, BSPC, \
        LCTL, TRNS,   MPLY, MEDIA_EJECT, MPRV, MNXT,    5,    6,    7,    8,    9,  ENT, \
              TRNS,   TRNS,        MUTE, VOLU, VOLD, PPLS, PMNS, PAST, PSLS, PEQL,       \
                      LALT,         FN0,  TAB,              FN1,  FN2, RCTL              ),
    /* 1: FN 1
     * ,-------------------------------------------------------------------.
     * |ESC   |   |   |  POWER|  SLEEP|  WAKE|  0|  1|  2|   3|  4|    Bspc|
     * |-------------------------------------------------------------------|
     * |TAB   |   |   |  EJECT|  PREV |  NEXT|  5|  6|  7|   8|  9|  Return|
     * |-------------------------------------------------------------------|
     * |      |   |   |   MUTE|  VOLU |  VOLD|  +|  -|  *|   /|  =|        |
     * |-------------------------------------------------------------------|
     * |      |   |ALT|    FN0|    Tab|      |   |FN1|FN2|CTRL|   |        |
     * `-------------------------------------------------------------------'
     */
    KEYMAP(
         ESC, TRNS,   TRNS,       POWER, SLEP, WAKE,    0,    1,    2,    3,    4, BSPC, \
        LCTL, TRNS,   MPLY, MEDIA_EJECT, MPRV, MNXT,    5,    6,    7,    8,    9,  ENT, \
              TRNS,   TRNS,        MUTE, VOLU, VOLD, PPLS, PMNS, PAST, PSLS, PEQL,       \
                      LALT,         FN0,  TAB,              FN1,  FN2, RCTL              ),


    /* 1: FN 2
     * ,----------------------------------------------------------------.
     * |ESC   |  /|  ||  \|  (|  )|     _|     ,|  .|     ?|  !|    Bspc|
     * |----------------------------------------------------------------|
     * |TAB   |  `|  '|  "|  [|  ]|  LEFT|  DOWN| UP| RIGHT|  <|  Return|
     * |----------------------------------------------------------------|
     * |      |  #|  ~|  &|  {|  }|     @| POUND|  $|     %|  >|        |
     * |----------------------------------------------------------------|
     * |      |   |ALT|FN0|Tab|   |      |   FN1|FN2|  CTRL|   |        |
     * `----------------------------------------------------------------'
     */
    KEYMAP(
         ESC,       SLSH, SHIFT+BSLS,       BSLS, SHIFT+MINS,    SHIFT+9, SHIFT+0, SHIFT+MINS,    COMM,     DOT,  SHIFT+SLSH, BSPC, \
        LCTL, SHIFT+NUHS,       QUOT, SHIFT+QUOT,       LBRC,       RBRC,    LEFT,       DOWN,      UP,   RIGHT, SHIFT+COMM9,  ENT, \
                 SHIFT+3, SHIFT+NUHS,    SHIFT+7, SHIFT+LBRC, SHIFT+RBRC, SHIFT+2,    SHIFT+6, SHIFT+4, SHIFT+5,   SHIFT+DOT,       \
                                LALT,        FN0,        TAB,                             FN1,     FN2,    RCTL                     ),
};

const uint16_t PROGMEM fn_actions[] = {
 [0] = ACTION_LAYER_MOMENTARY(0),
 [1] = ACTION_LAYER_TAP_KEY(1, KC_ESC),
 [2] = ACTION_LAYER_MOMENTARY(2),

};
