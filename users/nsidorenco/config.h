/*
Copyright 2017 Danny Nguyen <danny@keeb.io>

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

// Commands per tick on encoder
#if defined(ENCODER_ENABLE)
#    define ENCODER_RESOLUTION 4
#endif

#define TAPPING_TERM 180
// #define HOLD_ON_OTHER_PRESS

#define COMBO_STRICT_TIMER
#define EXTRA_SHORT_COMBOS
#define COMBO_TERM (TAPPING_TERM / 6) // time to get all combo keys down
#define COMBO_HOLD (COMBO_TERM * 1.8) // time to hold to trigger delayed combo

#define ADAPTIVE_TERM (COMBO_HOLD * 1.5)

#define LINGER_TIME TAPPING_TERM * 1.4

// #define POINTING_DEVICE_AUTO_MOUSE_ENABLE
