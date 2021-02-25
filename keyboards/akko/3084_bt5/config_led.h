/*
Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>

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

// Backlight configuration
#define BACKLIGHT_LEVELS 8

#define LED_MATRIX_ROWS 6
#define LED_MATRIX_COLS 16
#define LED_MATRIX_ROW_PINS {C5, C6, C7, C4, C8, C2}

#define DRIVER_LED_TOTAL (LED_MATRIX_ROWS * LED_MATRIX_COLS)

#define LED_MATRIX_MAXIMUM_BRIGHTNESS 255
