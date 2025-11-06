/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "sendstring_german.h"
#include "i18n.h"
#include "config.h"


// Make sure to change TRI Layer setup as well
enum LAYERS {
  _BASE,
  _MOUSE,
  _NAV,
  _NUM,
  _SYM,
  _FUN,
  _GAME,
  _GAME2,
  _GAME_FN,
};

enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x6_3(
  //,----------------------------------------------------------------------------------------------------------------.  ,---------------------------------------------------------------------------------------------------------------------------.
     DE_PLUS          ,    KC_Q          ,    KC_W          , MEH_T(KC_F)      , HYPR_T(KC_P)     ,    KC_B,                         KC_J          , HYPR_T(KC_L)     , MEH_T(KC_U)       ,    DE_Y          , KC_BSPC          , KC_ESCAPE        ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
     DE_MINS          ,MT(MOD_LGUI,KC_A),MT(MOD_LALT, KC_R) ,MT(MOD_LSFT, KC_S),MT(MOD_LCTL, KC_T),    KC_G,                         KC_M          ,MT(MOD_RCTL, KC_N),MT(MOD_RSFT, KC_E) ,MT(MOD_LALT, KC_I),MT(MOD_LGUI, KC_O), DE_QUOT          ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
     DE_HASH          , TD(DANCE_0)     , TD(DANCE_1)       , TD(DANCE_2)      ,    KC_D          ,TD(DANCE_3),                      KC_K          ,    KC_H          , KC_COMMA          ,MT(MOD_RALT,KC_DOT), DE_SLSH         , DE_GRV           ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
                                                          LT(_MOUSE, KC_ENTER) , KC_SPACE         , TL_LOWR         ,              MO(_NUM)        , KC_NO            , TL_UPPR
                        //`------------------------------------------------------------------------------------------'  `--------------------------------------------------------------------------------------------------------'

  ),

    [_MOUSE] = LAYOUT_split_3x6_3(
  //,----------------------------------------------------------------------------------------------------------------.  ,---------------------------------------------------------------------------------------------------------------------------.
     KC_TRANSPARENT   , KC_NO            , KC_NO            , KC_NO            , KC_NO            , LALT(KC_F4),          KC_MEDIA_PREV_TRACK      , MS_WHLL          , MS_WHLD           , MS_WHLU          , MS_WHLR          , KC_NO            ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
     KC_TRANSPARENT   , KC_NO            , MS_ACL0          , MS_ACL1          , MS_ACL2          , KC_NO      ,          KC_MEDIA_PLAY_PAUSE      , MS_LEFT          , MS_DOWN           , MS_UP            , MS_RGHT          , KC_NO            ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
     KC_TRANSPARENT   , KC_DELETE        , KC_RIGHT_ALT     , KC_NO            , KC_TAB           , KC_NO      ,          KC_MEDIA_NEXT_TRACK      , MS_BTN4          , MS_BTN5           , KC_PAGE_UP       , KC_END           , KC_NO            ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
                                                             KC_TRANSPARENT    , KC_TRANSPARENT   , KC_TRANSPARENT  ,     MS_BTN3, MS_BTN1, MS_BTN2
                        //`------------------------------------------------------------------------------------------'  `--------------------------------------------------------------------------------------------------------'

  ),

    [_NAV] = LAYOUT_split_3x6_3(
  //,----------------------------------------------------------------------------------------------------------------.  ,---------------------------------------------------------------------------------------------------------------------------.
     KC_TRANSPARENT   , KC_NO            , KC_NO            , KC_MEH           , KC_HYPR          , LALT(KC_F4),          KC_TRANSPARENT           ,LALT(LSFT(KC_F10)), KC_TRANSPARENT    , KC_TRANSPARENT   , KC_TRANSPARENT   , KC_TRANSPARENT   ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
     KC_TRANSPARENT   , KC_LEFT_GUI      , KC_LEFT_ALT      , KC_LEFT_SHIFT    , KC_LEFT_CTRL     , KC_NO      ,          KC_TRANSPARENT           , KC_LEFT          , KC_DOWN           , KC_UP            , KC_RIGHT         , DE_DQOT          ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
     KC_TRANSPARENT   , KC_DELETE        , KC_RIGHT_ALT     , KC_NO            , KC_TAB           , KC_NO      ,          KC_INSERT                , KC_HOME          , KC_PGDN           , KC_PAGE_UP       , KC_END           , KC_TRANSPARENT   ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
                                                             KC_TRANSPARENT    , KC_TRANSPARENT   , KC_TRANSPARENT  ,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
                        //`------------------------------------------------------------------------------------------'  `--------------------------------------------------------------------------------------------------------'

  ),

    [_NUM] = LAYOUT_split_3x6_3(
  //,----------------------------------------------------------------------------------------------------------------.  ,---------------------------------------------------------------------------------------------------------------------------.
     KC_NO            , DE_SS            , KC_7             , KC_8             , KC_9             , DE_CIRC         ,     KC_NO                    , KC_HYPR          , KC_MEH            , KC_NO            , KC_TRANSPARENT   , KC_TRANSPARENT   ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
     KC_NO            , KC_KP_SLASH      , KC_4             , KC_5             , KC_6             , RALT(DE_PLUS)   ,     KC_NO                    , KC_LEFT_CTRL     , KC_LEFT_SHIFT     , KC_LEFT_ALT      , KC_LEFT_GUI      , KC_TRANSPARENT   ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
     KC_NO            , KC_0             , KC_1             , KC_2             , KC_3             , DE_BSLS         ,     KC_NO                    , KC_NO            , KC_NO             , KC_RIGHT_ALT     , KC_NO            , KC_TRANSPARENT   ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
                                                              DE_PERC          , KC_SPACE           , KC_DOT        ,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
                        //`------------------------------------------------------------------------------------------'  `--------------------------------------------------------------------------------------------------------'

  ),

    [_SYM] = LAYOUT_split_3x6_3(
  //,----------------------------------------------------------------------------------------------------------------.  ,---------------------------------------------------------------------------------------------------------------------------.
     KC_KP_PLUS       , DE_AMPR          , DE_AT            , DE_LPRN          , DE_RPRN          , DE_AE           ,     KC_NO                    , KC_HYPR          , KC_MEH            , KC_NO            , KC_TRANSPARENT   , KC_TRANSPARENT   ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
     KC_KP_MINUS      , DE_PIPE          , DE_LESS          , DE_EQL           , DE_MORE          , DE_UE           ,     KC_NO                    , KC_LEFT_CTRL     , KC_LEFT_SHIFT     , KC_LEFT_ALT      , KC_LEFT_GUI      , KC_TRANSPARENT   ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
     DE_DLR           , DE_EXLM          , DE_QST           , DE_LCBR          , DE_RCBR          , DE_OE           ,     KC_NO                    , KC_NO            , KC_NO             , KC_RIGHT_ALT     , DE_BSLS          , KC_TRANSPARENT   ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
                                                              DE_LBRC          , DE_RBRC          , KC_TRANSPARENT  ,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
                        //`------------------------------------------------------------------------------------------'  `--------------------------------------------------------------------------------------------------------'

  ),

  [_FUN] = LAYOUT_split_3x6_3(
  //,----------------------------------------------------------------------------------------------------------------.  ,---------------------------------------------------------------------------------------------------------------------------.
     KC_NO            , KC_F12           , KC_F7            , KC_F8            , KC_F9            , KC_PSCR         ,     KC_NO                    , KC_HYPR          , KC_MEH            , KC_NO            , KC_TRANSPARENT   , KC_TRANSPARENT   ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
     KC_NO            , KC_F11           , KC_F4            , KC_F5            , KC_F6            , KC_SCRL         ,     KC_NO                    , KC_LEFT_CTRL     , KC_LEFT_SHIFT     , KC_LEFT_ALT      , KC_LEFT_GUI      , KC_TRANSPARENT   ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
     KC_NO            , KC_F10           , KC_F1            , KC_F2            , KC_F3            , KC_PAUSE        ,     KC_NO                    , KC_NO            , KC_NO             , KC_RIGHT_ALT     , KC_NO            , KC_TRANSPARENT   ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
                                                             KC_TRANSPARENT    , KC_TRANSPARENT   , KC_TRANSPARENT  ,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
                        //`------------------------------------------------------------------------------------------'  `--------------------------------------------------------------------------------------------------------'

  ),

  [_GAME] = LAYOUT_split_3x6_3(
  //,----------------------------------------------------------------------------------------------------------------.  ,---------------------------------------------------------------------------------------------------------------------------.
     KC_ESCAPE        , KC_Q             , KC_W             , KC_E             , KC_R             , KC_T            ,     KC_NO                    , KC_NO            , KC_NO             , KC_NO            , KC_TRANSPARENT   , KC_NO            ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
     KC_LEFT_CTRL     , KC_A             , KC_S             , KC_D             , KC_F             , KC_G            ,     KC_NO                    , KC_NO            , KC_NO             , KC_NO            , KC_NO            , KC_NO            ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
     KC_LEFT_SHIFT    , DE_Y             , KC_X             , KC_C             , KC_V             , KC_B            ,     KC_NO                    , KC_NO            , KC_NO             , KC_NO            , KC_NO            , KC_NO            ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
                                                         LT(_GAME_FN, KC_ENTER), KC_SPACE         , MO(_GAME2)      ,    KC_NO, KC_NO, KC_NO
                        //`------------------------------------------------------------------------------------------'  `--------------------------------------------------------------------------------------------------------'

  ),

  [_GAME2] = LAYOUT_split_3x6_3(
  //,----------------------------------------------------------------------------------------------------------------.  ,---------------------------------------------------------------------------------------------------------------------------.
     KC_TAB           , KC_1             , KC_2             , KC_3             , KC_4             , KC_5            ,     KC_NO                    , KC_NO            , KC_NO             , KC_NO            , KC_TRANSPARENT   , KC_NO            ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
     KC_LEFT_GUI      , KC_P             , KC_L             , KC_U             , KC_I             , KC_H            ,     KC_NO                    , KC_NO            , KC_NO             , KC_NO            , KC_NO            , KC_NO            ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
     KC_LEFT_ALT      , DE_Z             , KC_N             , KC_M             , KC_J             , KC_K            ,     KC_NO                    , KC_NO            , KC_NO             , KC_NO            , KC_NO            , KC_NO            ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
                                                              KC_TRANSPARENT   , KC_TRANSPARENT   , KC_TRANSPARENT  ,     KC_NO, KC_NO, KC_NO
                        //`------------------------------------------------------------------------------------------'  `--------------------------------------------------------------------------------------------------------'

  ),

  [_GAME_FN] = LAYOUT_split_3x6_3(
  //,----------------------------------------------------------------------------------------------------------------.  ,---------------------------------------------------------------------------------------------------------------------------.
     LCA(KC_TAB)      , KC_F1            , KC_F2            , KC_F3            , KC_F4            , LALT(KC_F4)     ,     KC_NO                    , KC_NO            , KC_NO             , KC_NO            , KC_TRANSPARENT   , KC_NO            ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
     KC_F6            , KC_F5            , KC_NO            , KC_NO            , KC_O             , KC_NO           ,     KC_NO                    , KC_NO            , KC_NO             , KC_NO            , KC_NO            , KC_NO            ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
     KC_F7            , KC_F13           , KC_F14           , KC_F16           , KC_F17           , LGUI(KC_G)      ,     KC_NO                    , KC_NO            , KC_NO             , KC_NO            , KC_NO            , KC_NO            ,
  //|-----------------+------------------+------------------+------------------+------------------+------------------|  |--------------------------+------------------+-------------------+------------------+------------------+-------------------|
                                                              KC_TRANSPARENT   , KC_TRANSPARENT   , KC_TRANSPARENT  ,     KC_NO, KC_NO, KC_NO
                        //`------------------------------------------------------------------------------------------'  `--------------------------------------------------------------------------------------------------------'

  )
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT_split_3x6_3(
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', '*', 'L',  'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R',
                       '*', '*', '*',  '*', '*', '*'
    );

const uint16_t PROGMEM combo0[] = { MT(MOD_LGUI, KC_A), MT(MOD_LALT, KC_R), MT(MOD_LCTL, KC_T), MT(MOD_LSFT, KC_S), COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_A, KC_S, KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_LEFT_SHIFT, MO(_SYM), COMBO_END};

// Tab
const uint16_t PROGMEM combo_tab_l[] = { TD(DANCE_1), TD(DANCE_2), KC_D               , COMBO_END};
const uint16_t PROGMEM combo_tab_r[] = { KC_H       , KC_COMMA   , MT(MOD_RALT,KC_DOT), COMBO_END };

// Esc
const uint16_t PROGMEM combo_esc_l[] = { MT(MOD_LALT, KC_R), MT(MOD_LSFT, KC_S), MT(MOD_LCTL, KC_T), COMBO_END};

combo_t key_combos[] = {
    COMBO(combo0, TO(_GAME)),
    COMBO(combo1, TO(_BASE)),
    COMBO(combo2, MO(_FUN)),
    COMBO(combo_esc_l, KC_ESCAPE),
    COMBO(combo_tab_l, KC_TAB),
    COMBO(combo_tab_r, KC_TAB),
};

typedef struct {
    uint16_t tap;
    uint16_t hold;
    uint16_t held;
} tap_dance_tap_hold_t;
tap_dance_action_t *action;

void tap_dance_tap_hold_finished(tap_dance_state_t *state, void *user_data) {
    tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)user_data;

    if (state->pressed) {
        if (state->count == 1
#ifndef PERMISSIVE_HOLD
            && !state->interrupted
#endif
        ) {
            register_code16(tap_hold->hold);
            tap_hold->held = tap_hold->hold;
        } else {
            register_code16(tap_hold->tap);
            tap_hold->held = tap_hold->tap;
        }
    }
}

void tap_dance_tap_hold_reset(tap_dance_state_t *state, void *user_data) {
    tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)user_data;

    if (tap_hold->held) {
        unregister_code16(tap_hold->held);
        tap_hold->held = 0;
    }
}

#define ACTION_TAP_DANCE_TAP_HOLD(tap, hold) \
    { .fn = {NULL, tap_dance_tap_hold_finished, tap_dance_tap_hold_reset}, .user_data = (void *)&((tap_dance_tap_hold_t){tap, hold, 0}), }

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_TAP_HOLD(DE_Z, LCTL(DE_Z)),
        [DANCE_1] = ACTION_TAP_DANCE_TAP_HOLD(KC_X, LCTL(KC_X)),
        [DANCE_2] = ACTION_TAP_DANCE_TAP_HOLD(KC_C, LCTL(KC_C)),
        [DANCE_3] = ACTION_TAP_DANCE_TAP_HOLD(KC_V, LCTL(KC_V)),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case TD(DANCE_0):
    case TD(DANCE_1):
    case TD(DANCE_2):
    case TD(DANCE_3):
        action = &tap_dance_actions[TD_INDEX(keycode)];
        if (!record->event.pressed && action->state.count && !action->state.finished) {
            tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
            tap_code16(tap_hold->tap);
        }
        break;
  }
  return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {

  switch(biton32(state)) {
  case _NAV:
    rgblight_sethsv_noeeprom(HSV_GOLD);
    break;
  case _SYM:
    rgblight_sethsv_noeeprom(HSV_PURPLE);
    break;
  case _NUM:
    rgblight_sethsv_noeeprom(HSV_AZURE);
    break;
    case _FUN:
    rgblight_sethsv_noeeprom(HSV_TEAL);
    break;
  case _GAME:
    rgblight_sethsv_noeeprom(HSV_GREEN);
    break;
  case _GAME2:
    rgblight_sethsv_noeeprom(HSV_MAGENTA);
    break;
  case _GAME_FN:
    rgblight_sethsv_noeeprom(HSV_RED);
    break;
  case _MOUSE:
    rgblight_sethsv_noeeprom(HSV_SPRINGGREEN);
    break;
  case _BASE:
  default:
    rgblight_sethsv_noeeprom(HSV_BLUE);
    break;
}
return state;
}

void keyboard_post_init_user(void) {
  // use the non noeeprom versions, to write these values to EEPROM too
  rgblight_enable(); // Enable RGB by default
  layer_state_set_user(_BASE);  // Set it to white by default
}
