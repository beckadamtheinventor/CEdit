/*
 * tigcclib.h
 *
 *  Created on: Jul 25, 2021
 *      Author: michael
 */

#ifndef SRC_TIGCCLIB_H_
#define SRC_TIGCCLIB_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <tice.h>
#include <fileioc.h>
#include <inttypes.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <graphx.h>
#include <keypadc.h>
#include <fontlibc.h>

#include "state.h"

/*
 * Non standard keys, used for encoding/remapping the CE keyboard
 * to other variants.
 */
enum ControlKeys {
	KEY_NO_EXIST = 0,
	KEY_RESERVED = -1,
	KEY_UNBOUND = -2,
	KEY_F1 = 259,
	KEY_F2 = 260,
	KEY_F3 = 261,
	KEY_F4 = 262,
	KEY_F5 = 263,
	KEY_F6 = 264,
	KEY_F7 = 265,
	KEY_F8 = 266,
	KEY_F9 = 267,
	KEY_F10 = 268,
	KEY_CUT = 269,
	KEY_COPY = 270,
	KEY_PASTE = 271,
	KEY_LEFT = 272,
	KEY_RIGHT = 273,
	KEY_UP = 274,
	KEY_DOWN = 275,
	KEY_WLEFT = 276,
	KEY_WRIGHT = 277,
	KEY_WUP = 278,
	KEY_WDOWN = 279,
	KEY_SLEFT = 280,
	KEY_SRIGHT = 281,
	KEY_SUP = 282,
	KEY_SDOWN = 283,
	KEY_WSLEFT = 284,
	KEY_WSRIGHT = 285,
	KEY_WSUP = 286,
	KEY_WSDOWN = 287,
	KEY_LLEFT = 288,
	KEY_LRIGHT = 289,
	KEY_LUP = 290,
	KEY_LDOWN = 291,
	KEY_LSLEFT = 292,
	KEY_LSRIGHT = 293,
	KEY_LSUP = 294,
	KEY_LSDOWN = 295,
	KEY_CLEAR = 296,
	KEY_TAB = 297,
	KEY_DEL = 298,
	KEY_BS = 299,
	KEY_BRIGHT_U = 300,
	KEY_BRIGHT_D = 301,
	KEY_ESC = 302,
	KEY_KILL = 303,
	KEY_SAVE = 304,
	KEY_SUSPEND = 305,
	KEY_OFF = 306,
	KEY_BREAK = 307,
	KEY_FQUIT = 308,
	KEY_UNDO = 309,
	KEY_REDO = 310,
	KEY_QUIT = 311,
	KEY_OPEN = 312,
	KEY_SAVE_AS = 313
};


/*
 * Key scanning backend, ignores modifier keys
 */
uint8_t ngetchx_backend(void);

/*
 * Block and wait for a keypress.
 * Then, return the character typed,
 * or a control code.
 */
short ngetchx(void);

/*
 * ngetchx and animate cursor
 */
short ngetchx_xy(struct estate*, int, int);

#endif /* SRC_TIGCCLIB_H_ */
