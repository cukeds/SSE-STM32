#ifndef BSP_H
#define BSP_H

#include "stm32f1xx_hal.h"
#include "app_defines.h"

// Starts the cooldown timer
void BSP_StartCardCooldown(boolean _display);
boolean BSP_GetDisplay();
void BSP_Countdown(void);
uint32_t BSP_GetCounter(void);

void BSP_StartBlinking(void);
void BSP_Blink(void);

int16_t BSP_GetBlinkingTime();
#endif // BSP_H
