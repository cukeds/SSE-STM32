/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "bsp_rf.h"
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RELE_Pin GPIO_PIN_1
#define RELE_GPIO_Port GPIOH
#define Barrier_IN_Pin GPIO_PIN_0
#define Barrier_IN_GPIO_Port GPIOA
#define RGB_R_Pin GPIO_PIN_1
#define RGB_R_GPIO_Port GPIOA
#define RGB_G_Pin GPIO_PIN_2
#define RGB_G_GPIO_Port GPIOA
#define RGB_B_Pin GPIO_PIN_3
#define RGB_B_GPIO_Port GPIOA
#define SP__CS_Pin GPIO_PIN_4
#define SP__CS_GPIO_Port GPIOA
#define CE_Pin GPIO_PIN_4
#define CE_GPIO_Port GPIOC
#define IRQ_Pin GPIO_PIN_5
#define IRQ_GPIO_Port GPIOC
#define IRQ_EXTI_IRQn EXTI9_5_IRQn
#define HC_Trig_Pin GPIO_PIN_8
#define HC_Trig_GPIO_Port GPIOE
#define HC_Echo_Pin GPIO_PIN_9
#define HC_Echo_GPIO_Port GPIOE
#define LED_TX_Pin GPIO_PIN_12
#define LED_TX_GPIO_Port GPIOD
#define LED_RX_Pin GPIO_PIN_13
#define LED_RX_GPIO_Port GPIOD

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
