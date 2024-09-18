#ifndef BSP_RC522_H
#define BSP_RC522_H

#include "defines.h"
#include "stm32f1xx_hal.h"
#include "rc522.h"


void BSP_RC522_Init();
uint8_t BSP_RC522_GetSerialNumber(uint8_t* sNum);
#endif
