/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#pragma once

// #define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

// #define QUICK_TAP_TERM 0
// #define TAPPING_TERM 100

#define DYNAMIC_KEYMAP_LAYER_COUNT 8

#define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 200
#define LEADER_NO_TIMEOUT

#undef TAPPING_TERM
#define TAPPING_TERM 170

// Mouse
#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL

#define MK_C_OFFSET_0	1	        //Cursor offset per movement (KC_ACL0)
#define MK_C_INTERVAL_0	32	    //Time between cursor movements (KC_ACL0)

#define MK_C_OFFSET_1	4	        //Cursor offset per movement (KC_ACL1)
#define MK_C_INTERVAL_1	16	    //Time between cursor movements (KC_ACL1)

#define MK_C_OFFSET_UNMOD	8 	  //Cursor offset per movement (unmodified)
#define MK_C_INTERVAL_UNMOD	16	//Time between cursor movements (unmodified)

#define MK_C_OFFSET_2	32	      //Cursor offset per movement (KC_ACL2)
#define MK_C_INTERVAL_2	16	    //Time between cursor movements (KC_ACL2)

#define MK_W_OFFSET_0	1         //Scroll steps per scroll action (KC_ACL0)
#define MK_W_INTERVAL_0	200	    //Time between scroll steps (KC_ACL0)

#define MK_W_OFFSET_1	1	        //Scroll steps per scroll action (KC_ACL1)
#define MK_W_INTERVAL_1	60	    //Time between scroll steps (KC_ACL1)

#define MK_W_OFFSET_UNMOD	1	    //Scroll steps per scroll action (unmodified)
#define MK_W_INTERVAL_UNMOD	20	//Time between scroll steps (unmodified)

#define MK_W_OFFSET_2	2	        //Scroll steps per scroll action (KC_ACL2)
#define MK_W_INTERVAL_2	10	    //Time between scroll steps (KC_ACL2)

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_LIMIT_VAL 120
#    define RGBLIGHT_HUE_STEP 10
#    define RGBLIGHT_SAT_STEP 17
#    define RGBLIGHT_VAL_STEP 17
#endif
