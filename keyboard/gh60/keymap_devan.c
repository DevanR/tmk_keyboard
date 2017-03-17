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
     * |          |sup|fn1|shift|   | shift|fn0| alt|                 |
     * `--------------------------------------------------------------'
     */
    KEYMAP(
         ESC, Q,   W,   E,   R,   T,   Y,   U,   I,   O,     P,  BSPC, \
         FN11, A,   S,   D,   F,   G,   H,   J,   K,   L,  SCLN,   ENT, \
              Z,   X,   C,   V,   B,   N,   M,COMM, DOT,  SLSH,        \
                LGUI,FN1, LSFT,           RSFT,FN0,RCTL                ),

    /* 1: NORMAN
     * ,--------------------------------------------------------------.
     * |esc   |  q|  w|   d|  f|  k|  j|     u|     r|  l|  #|    bspc|
     * |--------------------------------------------------------------|
     * |tab   |  a|  s|   e|  t|  g|  y|     n|     i|  o|  h|  return|
     * |--------------------------------------------------------------|
     * |      |  z|  x|   c|  v|  b|  p|     m|     ,|  .|  /|        |
     * |--------------------------------------------------------------|
     * |          |sup|fn1|shift|   | shift|fn0| alt|                 |
     * `--------------------------------------------------------------'
     */

    KEYMAP(
         ESC, Q,   W,   D,   F,   K,   J,   U,   R,   L,   NUHS,  BSPC, \
         FN11, A,   S,   E,   T,   G,   Y,   N,   I,   O,  H,      ENT, \
               Z,   X,   C,   V,   B,   P,   M,COMM, DOT,  SLSH,        \
                LGUI,FN1, LSFT,           RSFT,FN0,RCTL                ),

    /* 2: FN 0
     * ,---------------------------------------------------------------------------.
     * |ESC   |RST|PRINT|  POWER|  SLEEP|  WAKE|  $|   0|     1|     2|  3|    Bspc|
     * |---------------------------------------------------------------------------|
     * |TAB   |PLAY|STOP|  EJECT|  PREV |  NEXT|  *|   =|     4|     5|  6|  Return|
     * |---------------------------------------------------------------------------|
     * |      |  QW|  DV|   MUTE|  VOLU |  VOLD|  -|   +|     7|     8|  9|        |
     * |---------------------------------------------------------------------------|
     * |          |sup|fn1|shift|   | shift|fn0| alt|                              |
     * `---------------------------------------------------------------------------'
     */
    KEYMAP(
         ESC,  LALT, PSCR, POWER, SLEP, WAKE,          FN17,    0,       1,    2,   3, BSPC, \
         FN11, MPLY, MSTP, MEDIA_EJECT, MPRV, MNXT,    PAST,    PEQL,    4,    5,   6,  ENT, \
               FN21, FN22, MUTE, VOLU, VOLD,           PMNS,    PPLS,    7,    8,   9,       \
               LGUI, FN1,  LSFT,                       RSFT, FN0,  RCTL                    ),

    /* 3: FN 1
     * ,-------------------------------------------------------------------.
     * |ESC   |  &|  (|  )|  "|  <|     #|     _|     -|     =|  !|    Bspc|
     * |-------------------------------------------------------------------|
     * |TAB   |  /|  [|  ]|  '|  >|  LEFT|  DOWN|    UP| RIGHT|  ?|  Return|
     * |-------------------------------------------------------------------|
     * |      |  \|  {|  }|  `|  ^|     $|     @|     ||     %|  ~|        |
     * |-------------------------------------------------------------------|
     * |          |sup|fn1|shift|   | shift|fn0| alt|                      |
     * `-------------------------------------------------------------------'
     */
    KEYMAP(
         ESC, FN12,  FN3,  FN4,  FN15,  FN9,  FN20,  FN5,  MINS,PEQL,FN7, BSPC, \
         FN11,SLSH, LBRC,  RBRC, QUOT, FN19, LEFT,  DOWN,   UP,RIGHT, FN6, ENT, \
              BSLS, FN13,  FN14,  GRV, FN16, FN17, FN8,   FN2, FN18, FN10,      \
                LGUI,FN1, LSFT,           RSFT,FN0,RCTL                ),
};

const uint16_t PROGMEM fn_actions[] = {
 [0] = ACTION_LAYER_TAP_KEY(2, KC_SPACE),            // LAYER 0
 [1] = ACTION_LAYER_TAP_KEY(3, KC_SPACE),            // LAYER 1
 [2] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),           // pipe
 [3] = ACTION_MODS_KEY(MOD_LSFT, KC_9),              // right bracket
 [4] = ACTION_MODS_KEY(MOD_LSFT, KC_0),              // left bracket
 [5] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),           // underscore
 [6] = ACTION_MODS_KEY(MOD_LSFT, KC_SLSH),           // question mark
 [7] = ACTION_MODS_KEY(MOD_LSFT, KC_1),              // exclamation
 [8] = ACTION_MODS_KEY(MOD_LSFT, KC_2),              // double quote
 [9] = ACTION_MODS_KEY(MOD_LSFT, KC_COMM),           // left angle bracket
 [10] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),           // tilda
 [11] = ACTION_MODS_TAP_KEY(MOD_LALT, KC_TAB),       // ALT and TAB
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
 [22] = ACTION_DEFAULT_LAYER_SET(1),                 // set norman layout
};
