#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: QWERTY
     * ,--------------------------------------------------------------.
     * |esc   |  q|  w|   e|  r|  t|  y|     u|     i|  o|  p|    bspc|
     * |--------------------------------------------------------------|
     * |tab   |  a|  s|   d|  f|  g|  h|     j|     k|  l|  ;|  return|
     * |--------------------------------------------------------------|
     * |      |  z|  x|   c|  v|  b|  n|     m|     ,|  .|  /|        |
     * |--------------------------------------------------------------|
     * |          |shift|fn1|sup|   | alt|fn0| shift|              |
     * `--------------------------------------------------------------'
     */
    KEYMAP(
         ESC, Q,   W,   E,   R,   T,   Y,   U,   I,   O,     P,  BSPC, \
         FN11, A,   S,   D,   F,   G,   H,   J,   K,   L,  SCLN,   ENT, \
              Z,   X,   C,   V,   B,   N,   M,COMM, DOT,  SLSH,        \
                LSFT,FN1, LGUI,           RALT,FN0,RSFT                ),

    /* 1: NORMAN
     * ,--------------------------------------------------------------.
     * |esc   |  q|  w|   d|  f|  k|  j|     u|     r|  l|  #|    bspc|
     * |--------------------------------------------------------------|
     * |tab   |  a|  s|   e|  t|  g|  y|     n|     i|  o|  h|  return|
     * |--------------------------------------------------------------|
     * |      |  z|  x|   c|  v|  b|  p|     m|     ,|  .|  /|        |
     * |--------------------------------------------------------------|
     * |          |shift|fn1|sup|   | alt|fn0| shift|              |
     * `--------------------------------------------------------------'
     */

    KEYMAP(
         ESC, Q,   W,   D,   F,   K,   J,   U,   R,   L,   NUHS,  BSPC, \
         FN11, A,   S,   E,   T,   G,   Y,   N,   I,   O,  H,      ENT, \
               Z,   X,   C,   V,   B,   P,   M,COMM, DOT,  SLSH,        \
                LSFT,FN1, LGUI,           RALT,FN0,RSFT                ),

    /* 2: FN 0
     * ,---------------------------------------------------------------------------.
     * |ESC   |RST|PRINT|  POWER|  SLEEP|  WAKE|  1|   2|     3|     0|  +|    Bspc|
     * |---------------------------------------------------------------------------|
     * |TAB   |PLAY|STOP|  EJECT|  PREV |  NEXT|  4|   5|     6|     -|  *|  Return|
     * |---------------------------------------------------------------------------|
     * |      |  QW|  DV|   MUTE|  VOLU |  VOLD|  7|   8|     9|     /|  =|        |
     * |---------------------------------------------------------------------------|
     * |          |SHIFT|FN1|SUP|   | ALT|FN0| SHIFT|                           |
     * `---------------------------------------------------------------------------'
     */
    KEYMAP(
         ESC,  LALT, PSCR, POWER, SLEP, WAKE,          1,    2,    3,    0,    PPLS, BSPC, \
         FN11, MPLY, MSTP, MEDIA_EJECT, MPRV, MNXT,    4,    5,    6,    PMNS, PAST,  ENT, \
               FN21, FN22, MUTE, VOLU, VOLD,           7,    8,    9,    PPLS, PEQL,       \
               LSFT, FN1,  LGUI,                       RALT, FN0,  RSFT                    ),

    /* 3: FN 1
     * ,-------------------------------------------------------------------.
     * |ESC   |  /|  ||  \|  (|  )|     _|     ,|     .|     ?|  !|    Bspc|
     * |-------------------------------------------------------------------|
     * |TAB   |  `|  '|  "|  [|  ]|  LEFT|  DOWN|    UP| RIGHT|  <|  Return|
     * |-------------------------------------------------------------------|
     * |      |  #|  ~|  &|  {|  }|     @|     ^|     $|     %|  >|        |
     * |-------------------------------------------------------------------|
     * |          |SHIFT|FN1|SUP|   | ALT|FN0| SHIFT|                   |
     * `-------------------------------------------------------------------'
     */
    KEYMAP(
         ESC, SLSH,  NUBS,  FN2,  FN3,  FN4,  FN5,  COMM,  DOT,  FN6,  FN7, BSPC, \
         FN11,  GRV, QUOT,  FN8, LBRC, RBRC, LEFT, DOWN,   UP, RIGHT,  FN9,  ENT, \
              NUHS, FN10, FN12, FN13, FN14, FN15, FN16, FN17,  FN18, FN19,       \
                LSFT,FN1, LGUI,           RALT,FN0,RSFT                ),
};

const uint16_t PROGMEM fn_actions[] = {
 [0] = ACTION_LAYER_TAP_KEY(2, KC_SPACE),            // LAYER 0
 [1] = ACTION_LAYER_TAP_KEY(3, KC_SPACE),            // LAYER 1
 [2] = ACTION_MODS_KEY(MOD_LSFT, KC_NUBS),           // pipe
 [3] = ACTION_MODS_KEY(MOD_LSFT, KC_9),              // right bracket
 [4] = ACTION_MODS_KEY(MOD_LSFT, KC_0),              // left bracket
 [5] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),           // underscore
 [6] = ACTION_MODS_KEY(MOD_LSFT, KC_SLSH),           // question mark
 [7] = ACTION_MODS_KEY(MOD_LSFT, KC_1),              // exclamation
 [8] = ACTION_MODS_KEY(MOD_LSFT, KC_2),              // double quote
 [9] = ACTION_MODS_KEY(MOD_LSFT, KC_COMM),           // left angle bracket
 [10] = ACTION_MODS_KEY(MOD_LSFT, KC_NUHS),          // tilda
 [11] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_TAB),       // CTRL and TAB
 [12] = ACTION_MODS_KEY(MOD_LSFT, KC_7),             // ampersand
 [13] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),          // left curly braces
 [14] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),          // right curly braces
 [15] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),          // at
 [16] = ACTION_MODS_KEY(MOD_LSFT, KC_6),             // accent
 [17] = ACTION_MODS_KEY(MOD_LSFT, KC_4),             // dollar
 [18] = ACTION_MODS_KEY(MOD_LSFT, KC_5),             // percentage
 [19] = ACTION_MODS_KEY(MOD_LSFT, KC_DOT),           // right angle bracket
 [20] = ACTION_MODS_KEY(MOD_LSFT|MOD_RSFT, KC_PAUS), // software reset
 [21] = ACTION_DEFAULT_LAYER_SET(0),                 // set qwerty layout
 [22] = ACTION_DEFAULT_LAYER_SET(1),                 // set dvorak layout
};
