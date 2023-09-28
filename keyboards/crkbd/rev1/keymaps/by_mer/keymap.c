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

#include "features/achordion.h"
#include QMK_KEYBOARD_H

// LEFT HAND
#define MT_Z LGUI_T(KC_Z)
#define MT_X LALT_T(KC_X)
#define MT_A LGUI_T(KC_A)
#define MT_S LALT_T(KC_S)
#define MT_D LCTL_T(KC_D)
#define MT_F LSFT_T(KC_F)
#define MT_ESC LT(1, KC_ESC)
#define MT_SPC LT(4, KC_SPC)

// RIGHT HAND
#define MT_SLSH LGUI_T(KC_SLSH)
#define MT_DOT LALT_T(KC_DOT)
#define MT_SCLN LGUI_T(KC_SCLN)
#define MT_L LALT_T(KC_L)
#define MT_K LCTL_T(KC_K)
#define MT_J LSFT_T(KC_J)
#define MT_BSPC LT(3, KC_BSPC)
#define MT_TAB LT(5, KC_TAB)

// Mouse keys
#define MS_U KC_MS_UP
#define MS_D KC_MS_DOWN
#define MS_L KC_MS_LEFT
#define MS_R KC_MS_RIGHT
#define MS_BTN1 KC_MS_BTN1
#define MS_BTN2 KC_MS_BTN2
#define MS_WH_U KC_WH_U
#define MS_WH_D KC_WH_D
#define MS_WH_L KC_WH_L
#define MS_WH_R KC_WH_R

#define MOSM_LGUI OSM(MOD_LGUI)
#define MOSM_GUCL OSM(MOD_LCTL|MOD_LGUI)
#define MOSM_LALT OSM(MOD_LALT)
#define MOSM_LSFT OSM(MOD_LSFT)
#define MOSM_LCTR OSM(MOD_LCTL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /*
   * ╭────┬────┬────┬────┬────╮     ╭────┬────┬────┬────┬────╮
   * │ q  │ w  │ e  │ r  │ t  │     │ y  │ u  │ i  │ o  │ p  │
   * ├────┼────┼────┼────┼────┤     ├────┼────┼────┼────┼────┤
   * │ a  │ s  │ d  │ f  │ g  │     │ h  │ j  │ k  │ l  │ ;  │
   * ├────┼────┼────┼────┼────┤     ├────┼────┼────┼────┼────┤
   * │ z  │ x  │ c  │ v  │ b  │     │ n  │ m  │ ,  │ .  │ /  │
   * ╰────┴────┴────┴────┴────┴─╮ ╭─┴────┴────┴────┴────┴────╯
   *           │LY5 │esc │ spc  │ │ bksp │osl2│ent │
   *           ╰────┴────┴──────╯ ╰──────┴────┴────╯ 
  */

  [0] = LAYOUT_split_3x6_3(
      KC_NO, KC_Q, KC_W, KC_E, KC_R,  KC_T,     KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_NO,
      KC_NO, MT_A, MT_S, MT_D, MT_F,  KC_G,     KC_H, MT_J, MT_K,    MT_L,   MT_SCLN, KC_NO,
      KC_NO, KC_Z, KC_X, KC_C, KC_V,  KC_B,     KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO,
                      MT_TAB, MT_ESC, MT_SPC,   MT_BSPC, MO(2), KC_ENT
  ),

  /*
   * ╭────┬────┬────┬────┬────╮     ╭────┬────┬────┬────┬────╮
   * │ !  │ @  │ #  │ $  │ %  │     │ ?  │ ^  │ =  │ &  │ |  │
   * ├────┼────┼────┼────┼────┤     ├────┼────┼────┼────┼────┤
   * │ /  │    │ *  │ :  │ '  │     │ -  │ (  │ {  │ [  │ <  │
   * ├────┼────┼────┼────┼────┤     ├────┼────┼────┼────┼────┤
   * │ \  │    │ `  │ ;  │ "  │     │ _  │ )  │ }  │ ]  │ >  │
   * ╰────┴────┴────┴────┴────┴─╮ ╭─┴────┴────┴────┴────┴────╯
   *           │    │esc │      │ │ bksp │    │    │
   *           ╰────┴────┴──────╯ ╰──────┴────┴────╯ 
  */

  [1] = LAYOUT_split_3x6_3(
      KC_NO, KC_EXLM, KC_AT, KC_HASH, KC_DLR,  KC_PERC,     KC_QUES, KC_CIRC, KC_EQL,  KC_AMPR,   KC_PIPE, KC_NO,
      KC_NO, KC_SLSH, KC_NO, KC_ASTR, KC_COLN, KC_QUOT,     KC_MINS, KC_LPRN, KC_LCBR, KC_LBRC,   KC_LT, KC_NO,
      KC_NO, KC_BSLS, KC_NO, KC_GRV,  KC_SCLN, KC_DQUO,     KC_UNDS, KC_RPRN, KC_RCBR, KC_RBRC,   KC_GT, KC_NO,
                                  KC_NO, KC_ESC, KC_NO,     KC_BSPC, KC_NO, KC_TRNS
  ),

  /*
   * ╭────┬────┬────┬────┬────╮     ╭────┬────┬────┬────┬────╮
   * │    │    │home│end │tab │     │nxt │vol+│prev│    │    │
   * ├────┼────┼────┼────┼────┤     ├────┼────┼────┼────┼────┤
   * │win │alt │ctl │sft │    │     │left│down│ up │rght│caps│
   * ├────┼────┼────┼────┼────┤     ├────┼────┼────┼────┼────┤
   * │wctl│alcl│pgup│pgdn│del │     │mute│vol-│play│    │    │
   * ╰────┴────┴────┴────┴────┴─╮ ╭─┴────┴────┴────┴────┴────╯
   *           │    │esc │enter │ │ bksp │    │    │
   *           ╰────┴────┴──────╯ ╰──────┴────┴────╯ 
  */
  [2] = LAYOUT_split_3x6_3(
      KC_NO, KC_NO,     KC_NO,     KC_HOME,   KC_END,  KC_TAB,     KC_MPRV, KC_VOLU, KC_MNXT, KC_NO,   KC_NO,   KC_NO,
      KC_NO, KC_LGUI,   KC_LALT,   KC_LCTL,   KC_LSFT, KC_NO,      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, CW_TOGG, KC_NO,
      KC_NO, MOSM_GUCL, KC_NO,     KC_PGUP,   KC_PGDN, KC_DEL,     KC_MUTE, KC_VOLD, KC_MPLY, KC_NO,   KC_NO,   KC_NO,
                                        KC_NO, KC_ESC,  KC_SPC,     KC_BSPC, KC_NO, KC_ENT
  ),

  /*
   * ╭────┬────┬────┬────┬────╮     ╭────┬────┬────┬────┬────╮
   * │    │ 7  │ 8  │ 9  │    │     │    │    │    │    │    │
   * ├────┼────┼────┼────┼────┤     ├────┼────┼────┼────┼────┤
   * │    │ 4  │ 5  │ 6  │ 0  │     │    │sft │ctrl│alt │sup │
   * ├────┼────┼────┼────┼────┤     ├────┼────┼────┼────┼────┤
   * │    │ 1  │ 2  │ 3  │    │     │    │    │    │    │    │
   * ╰────┴────┴────┴────┴────┴─╮ ╭─┴────┴────┴────┴────┴────╯
   *           │    │esc │ spc  │ │ bksp │    │    │
   *           ╰────┴────┴──────╯ ╰──────┴────┴────╯ 
  */

  [3] = LAYOUT_split_3x6_3(
      KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_NO,      KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
      KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_0,       KC_NO, MOSM_LSFT, MOSM_LCTR, MOSM_LALT, MOSM_LGUI, KC_NO,
      KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_NO,      KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
                       KC_NO, KC_ESC, KC_SPC,     KC_BSPC, KC_NO, KC_NO
  ),

  /*
   * ╭────┬────┬────┬────┬────╮     ╭────┬────┬────┬────┬────╮
   * │    │    │    │    │    │     │f10 │ f7 │ f8 │ f9 │    │
   * ├────┼────┼────┼────┼────┤     ├────┼────┼────┼────┼────┤
   * │    │    │    │    │    │     │f11 │ f4 │ f5 │ f6 │    │
   * ├────┼────┼────┼────┼────┤     ├────┼────┼────┼────┼────┤
   * │    │    │    │    │    │     │f12 │ f1 │ f2 │ f3 │    │
   * ╰────┴────┴────┴────┴────┴─╮ ╭─┴────┴────┴────┴────┴────╯
   *           │    │    │      │ │      │    │    │
   *           ╰────┴────┴──────╯ ╰──────┴────┴────╯ 
  */
  [4] = LAYOUT_split_3x6_3(
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,       KC_F10, KC_F7, KC_F8, KC_F9, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,       KC_F11, KC_F4, KC_F5, KC_F6, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,       KC_F12, KC_F1, KC_F2, KC_F3, KC_NO, KC_NO,
                          KC_NO, KC_NO,  KC_NO,       KC_NO, KC_NO, KC_NO
  ),

  /*
   * ╭────┬────┬────┬────┬────╮     ╭────┬────┬────┬────┬────╮
   * │    │    │    │    │    │     │    │    │    │    │    │
   * ├────┼────┼────┼────┼────┤     ├────┼────┼────┼────┼────┤
   * │    │    │    │rght│left│     │left│ up │down│rght│    │
   * ├────┼────┼────┼────┼────┤     ├────┼────┼────┼────┼────┤
   * │    │    │    │    │    │     │    │    │    │    │    │
   * ╰────┴────┴────┴────┴────┴─╮ ╭─┴────┴────┴────┴────┴────╯
   *           │    │    │      │ │      │    │    │
   *           ╰────┴────┴──────╯ ╰──────┴────┴────╯ 
  */
  [5] = LAYOUT_split_3x6_3(
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, MS_BTN2, MS_BTN1, KC_NO,   MS_L,  MS_D,  MS_U,  MS_R,  KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,       MS_WH_L, MS_WH_D, MS_WH_U, MS_WH_R, KC_NO, KC_NO,
                          KC_NO, KC_NO,  KC_NO,       KC_NO, KC_NO, KC_NO
  )
};
// Combos
// enum combos {
  // CC_ENT,
  // XC_TAB,
  // JK_TAB,
  // QW_SFT,
  // SD_LAYER
// };

// const uint16_t PROGMEM ent_combo[] = {KC_COMM, KC_DOT, COMBO_END};
// const uint16_t PROGMEM tab_combo[] = {KC_X, KC_C, COMBO_END};
// const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
// const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
// const uint16_t PROGMEM sd_combo[] = {KC_S, KC_D, COMBO_END};

// combo_t key_combos[] = {
  // [CC_ENT] = COMBO(ent_combo, KC_ENT),
  // [XC_TAB] = COMBO(tab_combo, KC_TAB),
  // [JK_TAB] = COMBO(jk_combo, KC_TAB),
  // [QW_SFT] = COMBO(qw_combo, KC_LSFT),
  // [SD_LAYER] = COMBO(sd_combo, MO(_LAYER)),
// };


// Key overrides
// const key_override_t enter_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_SPC, KC_ENT);

// This globally defines all key overrides to be used
// const key_override_t **key_overrides = (const key_override_t *[]){
//   &enter_key_override,
//   NULL // Null terminate the array of overrides!
// };

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t* record) {
  switch (keycode) {
    // Increase the tapping term a little for slower ring and pinky fingers.
    case MT_Z:
      return TAPPING_TERM + 15;
    case MT_SLSH:
      return TAPPING_TERM + 15;

    default:
      return TAPPING_TERM;
  }
}

bool caps_word_press_user(uint16_t keycode) {
  switch (keycode) {
      // Keycodes that continue Caps Word, with shift applied.
      case KC_A ... KC_Z:
      case KC_MINS:
          add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
          return true;

      // Keycodes that continue Caps Word, without shifting.
      case KC_1 ... KC_0:
      case KC_BSPC:
      case KC_DEL:
      case KC_UNDS:
          return true;

      default:
          return false;  // Deactivate Caps Word.
  }
}

uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t* record) {
  // If you quickly hold a tap-hold key after tapping it, the tap action is
  // repeated. Key repeating is useful e.g. for Vim navigation keys, but can
  // lead to missed triggers in fast typing. Here, returning 0 means we
  // instead want to "force hold" and disable key repeating.
  switch (keycode) {
    // Repeating is useful for Vim navigation keys.
    // case MODT_J:
    //   return QUICK_TAP_TERM;  // Enable key repeating.
    // case MDT_K:
    //   return QUICK_TAP_TERM;  // Enable key repeating.
    // case MDT_L:
    //   return QUICK_TAP_TERM;  // Enable key repeating.
    default:
      return 0;  // Otherwise, force hold and disable key repeating.
  }
}

bool achordion_chord(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record, uint16_t other_keycode, keyrecord_t* other_record) {

  // Apply achordion to layer-tap esc key
  switch (tap_hold_keycode){
    case MT_ESC: 
      if(other_record->event.pressed){return true;}
      break;
  //   case MT_SPC: 
  //     if(other_record->event.pressed){return true;}
  //     break;
  //   case MT_BSPC:  
  //     if(other_record->event.pressed){return true;}
  //     break;
  //   case MT_TAB: 
  //     if(other_record->event.pressed){return true;}
  //     break;
  }

  // switch (tap_hold_keycode) {
  //   case HOME_A:  // A + U.
  //     if (other_keycode == HOME_U) { return true; }
  //     break;

  //   case HOME_S:  // S + H and S + G.
  //     if (other_keycode == HOME_H || other_keycode == KC_G) { return true; }
  //     break;
  // }

  // Also allow same-hand holds when the other key is in the rows below the
  // alphas. I need the `% (MATRIX_ROWS / 2)` because my keyboard is split.
  // if (other_record->event.key.row % (MATRIX_ROWS / 2) >= 4) { return true; }

  switch (other_keycode) {
    case QK_MOD_TAP ... QK_MOD_TAP_MAX:
    case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:
      other_keycode &= 0xff;  // Get base keycode.
  }
  // Allow same-hand holds with non-alpha keys.
  if (other_keycode > KC_Z) { return true; }

  // Otherwise, follow the opposite hands rule.
  return achordion_opposite_hands(tap_hold_record, other_record);
}


uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
  switch (tap_hold_keycode) {
    case MT_Z:
      return 0;
    case MT_SLSH:
      return 0;  // Bypass Achordion for these keys.
  }

  return 800;  // Otherwise use a timeout of 800 ms.
}


bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_achordion(keycode, record)) { return false; }
  return true;
}

void matrix_scan_user(void) {
  achordion_task();
}

