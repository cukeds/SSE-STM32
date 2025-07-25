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
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "bsp_encoder.h"
#include "bsp_rc522.h"
#include "bsp_hcsr501.h"
#include "bsp_lcd.h"
#include "bsp_rf.h"
#include "app.h"
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
#define LED_Pin GPIO_PIN_13
#define LED_GPIO_Port GPIOC
#define Encoder_A_Pin GPIO_PIN_0
#define Encoder_A_GPIO_Port GPIOA
#define Encoder_B_Pin GPIO_PIN_1
#define Encoder_B_GPIO_Port GPIOA
#define Encoder_Switch_Pin GPIO_PIN_2
#define Encoder_Switch_GPIO_Port GPIOA
#define Encoder_Switch_EXTI_IRQn EXTI2_IRQn
#define SPI1_CE_Pin GPIO_PIN_4
#define SPI1_CE_GPIO_Port GPIOA
#define RST_Pin GPIO_PIN_0
#define RST_GPIO_Port GPIOB
#define TFT_DC_Pin GPIO_PIN_1
#define TFT_DC_GPIO_Port GPIOB
#define TFT_CS_Pin GPIO_PIN_10
#define TFT_CS_GPIO_Port GPIOB
#define CE_Pin GPIO_PIN_12
#define CE_GPIO_Port GPIOB
#define SPI2_CSN_Pin GPIO_PIN_8
#define SPI2_CSN_GPIO_Port GPIOA
#define IRQ_Pin GPIO_PIN_10
#define IRQ_GPIO_Port GPIOA
#define IRQ_EXTI_IRQn EXTI15_10_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
