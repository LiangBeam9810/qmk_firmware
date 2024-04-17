#pragma once
#include_next <halconf.h>
/* PWM for  RGB LED */
#undef HAL_USE_PWM
#define HAL_USE_PWM TRUE
/* I2C for OLED display */
#undef HAL_USE_I2C
#define HAL_USE_I2C TRUE