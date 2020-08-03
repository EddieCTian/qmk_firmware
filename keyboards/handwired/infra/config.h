/*
Copyright 2020 Eddie Tian <https://github.com/EddieCTian>

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

#define VENDOR_ID       0x1234
#define PRODUCT_ID      0x5678
#define DEVICE_VER      0x0000
#define MANUFACTURER    Eddie Tian
#define PRODUCT         Infra Rev. 1
#define DESCRIPTION     Split 50 percent wireless ergonomic keyboard

// rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// wiring
#define MATRIX_ROW_PINS {F6, F5, F4, F1, F0}
#define MATRIX_COL_PINS {D6, D7, B5, B6, C6, C7}
#define MATRIX_ROW_PINS_RIGHT {F6, F5, F4, F1, F0}
#define MATRIX_COL_PINS_RIGHT {D6, D7, B5, B6, C6, C7}
// #define SPLIT_HAND_PIN not set since not enough pins. Left is assumed master

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define SOFT_SERIAL_PIN D3
//For now, just leave it like this... until i figure out if soft_serial can assign different pin on both halves to my dumb brain works
