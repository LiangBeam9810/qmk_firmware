#pragma once
#include_next <mcuconf.h>

/* TIM3 used for WS2812 driver */
#undef STM32_PWM_USE_TIM3
#define STM32_PWM_USE_TIM3 TRUE

/* I2C used for OLED display */
#undef STM32_I2C_USE_I2C1
#define STM32_I2C_USE_I2C1 TRUE