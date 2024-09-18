#ifndef BSP_ENCODER_H
#define BSP_ENCODER_H
#include "defines.h"
#include "stm32f1xx_hal.h"
#include "tim.h"

void BSP_ENCODER_Init();
int16_t BSP_ENCODER_GetCount();
int16_t BSP_ENCODER_GetSpeed();
int16_t BSP_ENCODER_GetDirection();
int16_t BSP_ENCODER_GetSwitch();
void BSP_ENCODER_WriteSpeed(int16_t);
#endif
