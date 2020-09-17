#include "keymap_devan.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: QWERTY
     * ,--------------------------------------------------------------.
     * |esc   |  q|  w|   e|  r|  t|  y|     u|     i|  o|  p|bspc/del|
     * |--------------------------------------------------------------|
     * |tab/alt| a|  s|   d|  f|  g|  h|     j|     k|  l|  ;|  return|
     * |--------------------------------------------------------------|
     * |      |  z|  x|   c|  v|  b|  n|     m|     ,|  .|  /|        |
     * |--------------------------------------------------------------|
     * |          |shift|fn1|super|   | ctrl|fn0| shift|              |
     * `--------------------------------------------------------------'
     */
    KEYMAP(
         ESC, Q,   W,   E,   R,   T,   Y,   U,   I,   O,     P,  BSPC,  \
         FN11, A,   S,   D,   F,   G,   H,   J,   K,   L,  SCLN,   ENT, \
              Z,   X,   C,   V,   B,   N,   M,COMM, DOT,  SLSH,         \
                LSFT,FN1, LGUI,           RCTL,FN0,RSFT                ),

    /* 1: MENU
     * ,---------------------------------------------------------------------------.
     * |esc   |RST| PRINT|  POWER|  SLEEP|  WAKE|  $|   0|    1|     2|  3|    bspc|
     * |---------------------------------------------------------------------------|
     * |tab/alt|PLAY|STOP|  EJECT|  PREV |  NEXT|  *|   =|    4|     5|  6|  return|
     * |---------------------------------------------------------------------------|
     * |      |  QW|     |   MUTE|  VOLU |  VOLD|  -|   +|    7|     8|  9|        |
     * |---------------------------------------------------------------------------|
     * |          |shift|fn1|super|     | ctrl |fn0| shift|                        |
     * `---------------------------------------------------------------------------'
     */
    KEYMAP(
         ESC,  LALT, PSCR, POWER, SLEP, WAKE,          FN17,    0,       1,    2,   3, BSPC, \
         FN11, MPLY, MSTP, MEDIA_EJECT, MPRV, MNXT,    PAST,    PEQL,    4,    5,   6,  ENT, \
               FN21, FN22, MUTE, VOLU, VOLD,           PMNS,    PPLS,    7,    8,   9,       \
               LSFT, FN1,  LGUI,                       RCTL, FN0,  RSFT                   ),

    /* 2: FN 0
     * ,--------------------------------------------------------------.
     * |esc   |   1|  2|   3|  4|  5| 6|     7|     8|  9|  0|    bspc|
     * |--------------------------------------------------------------|
     * |tab/alt|  /|  [|   ]|  (| )|  +|     -|     *|  /|  =|  return|
     * |--------------------------------------------------------------|
     * |      |MENU|  {|   }|  :| _|  $|     %|     #|  ,|  .|        |
     * |--------------------------------------------------------------|
     * |          |shift|fn1|super|   | ctrl|fn0| shift|              |
     * `--------------------------------------------------------------'
     */

    KEYMAP(
         ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,  BSPC,  \
         FN11, SLSH,LBRC,RBRC,FN3,FN4,  PPLS,PMNS,PAST,SLSH,PEQL,ENT, \
               FN22,FN13,FN14,FN23,FN5 ,FN17,FN18,FN20,COMM, DOT,   \
                LSFT,FN1, LGUI,           RCTL,FN0,RSFT                ),
    /* 3: FN 1
     * ,-------------------------------------------------------------------.
     * |esc   |  &|  (|  )|  "|  <|     #|     _|     -|     =|  !|    bspc|
     * |-------------------------------------------------------------------|
     * |tab/alt| /|  [|  ]|  '|  >|  LEFT|  DOWN|    UP| RIGHT|  ?|  return|
     * |-------------------------------------------------------------------|
     * |      |  \|  {|  }|  `|  ^|     $|     @|     ||     %|  ~|        |
     * |-------------------------------------------------------------------|
     * |          |shift|fn1|super|   | ctrl|fn0| shift|                   |
     * `-------------------------------------------------------------------'
     */
    KEYMAP(
         ESC, FN12,  FN3,  FN4,  FN15,  FN9,  FN20,  FN5,  MINS,PEQL,FN7, BSPC, \
         FN11,SLSH, LBRC,  RBRC, QUOT, FN19, LEFT,  DOWN,   UP,RIGHT, FN6, ENT, \
              BSLS, FN13,  FN14,  GRV, FN16, FN17, FN8,   FN2, FN18, FN10,      \
                LGUI,FN1, LSFT,           RSFT,FN0,RCTL                ),

};

const action_t PROGMEM fn_actions[] = {
 [0] = ACTION_LAYER_TAP_KEY(2, KC_SPACE),            // numbers
 [1] = ACTION_LAYER_TAP_KEY(3, KC_SPACE),            // symbols
 [2] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),           // pipe
 [3] = ACTION_MODS_KEY(MOD_LSFT, KC_9),              // right bracket
 [4] = ACTION_MODS_KEY(MOD_LSFT, KC_0),              // left bracket
 [5] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),           // underscore
 [6] = ACTION_MODS_KEY(MOD_LSFT, KC_SLSH),           // question mark
 [7] = ACTION_MODS_KEY(MOD_LSFT, KC_1),              // exclamation
 [8] = ACTION_MODS_KEY(MOD_LSFT, KC_2),              // double quote
 [9] = ACTION_MODS_KEY(MOD_LSFT, KC_COMM),           // left angle bracket
 [10] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),           // tilda
 [11] = ACTION_MODS_TAP_KEY(MOD_LALT, KC_TAB),       // alt and tab
 [12] = ACTION_MODS_KEY(MOD_LSFT, KC_7),             // ampersand
 [13] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),          // left curly braces
 [14] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),          // right curly braces
 [15] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),          // double quote
 [16] = ACTION_MODS_KEY(MOD_LSFT, KC_6),             // accent
 [17] = ACTION_MODS_KEY(MOD_LSFT, KC_4),             // dollar
 [18] = ACTION_MODS_KEY(MOD_LSFT, KC_5),             // percentage
 [19] = ACTION_MODS_KEY(MOD_LSFT, KC_DOT),           // right angle bracket
 [20] = ACTION_MODS_KEY(MOD_LSFT, KC_3),             // hash
 [21] = ACTION_DEFAULT_LAYER_SET(0),                 // set qwerty layout
 [22] = ACTION_DEFAULT_LAYER_SET(1),                 // set number layout
 [23] = ACTION_MODS_KEY(MOD_LSFT, KC_SCLN),             // hash
};
