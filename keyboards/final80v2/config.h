 /* Copyright 2022 Halokeys
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */
#pragma once

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key matrix set */
#define MATRIX_ROWS 6
#define MATRIX_COLS 15

#define TAPPING_TERM 250

#ifdef ENCODER_MAP_ENABLE
  #define NUM_ENCODERS 1
  #define NUM_DIRECTIONS 2
#endif

/*
 * WS2812 Underglow Matrix options
 */
#ifdef RGBLIGHT_ENABLE
#define WS2812_PWM_DRIVER PWMD3
#define WS2812_PWM_CHANNEL 2
#define WS2812_PWM_PAL_MODE2
#define WS2812_DMA_STREAM STM32_DMA1_STREAM3
#define WS2812_DMA_CHANNEL 3
#endif

/* MOUSEKEY */
#ifdef MOUSEKEY_ENABLE
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_INTERVAL 17
#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL
#define MK_C_OFFSET_UNMOD 64   // MOUSEKEY移动鼠标指针一次64像素
#define MK_C_INTERVAL_UNMOD 17
#endif

/* OLED */
#ifdef OLED_ENABLE
#define OLED_DISPLAY_128X64
#define OLED_BRIGHTNESS 255

#define OLED_DISPLAY_ADDRESS 0x3C	
#define I2C_DRIVER I2CD1
#define I2C1_SCL_PIN B6
#define I2C1_SDA_PIN B7
#define I2C1_SCL_PAL_MODE 4
#define I2C1_SDA_PAL_MODE 4

#define I2C1_TIMINGR_PRESC 0U
#define I2C1_TIMINGR_SCLDEL 7U
#define I2C1_TIMINGR_SDADEL 0U
#define I2C1_TIMINGR_SCLH 38U
#define I2C1_TIMINGR_SCLL 129U
#define OLED_TIMEOUT 60000  // 60秒无操作关闭OLED
#define OLED_FONT_HEIGHT 8
#define OLED_FONT_WIDTH 6
#define OLED_FONT_H "neil_font.c"
#endif