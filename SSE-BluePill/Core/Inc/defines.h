/**
 *  Defines for your entire project at one place
 *
 *	@author 	Tilen MAJERLE
 *	@email		tilen@majerle.eu
 *	@website	http://stm32f4-discovery.net
 *	@version 	v1.0
 *	@ide		Keil uVision 5
 */
#ifndef TM_DEFINES_H
#define TM_DEFINES_H
#include "stm32f1xx_hal.h"

//Put your global defines for all libraries here used in your project
#define STM32F1

// ENCODER
#define ENCODER_DIRECTION_LEFT -1
#define ENCODER_DIRECTION_RIGHT 1
#define ENCODER_PORT GPIOA
#define ENCODER_PIN GPIO_PIN_2
#define DEBOUNCE_DELAY 100

// HCSR501
#define HCSR501_SETUP_MINUTES 0
#define HCSR501_SETUP_SECONDS 1

#define HCSR501_TRIGGER_TIME 3// Seconds

#define HCSR501_FALSE 0
#define HCSR501_TRUE 1
#define HCSR501_INITIALIZING 2
#define HCSR501_PORT GPIOB
#define HCSR501_PIN GPIO_PIN_9
#define HCSR501_SW_EXTI_LINE GPIO_PIN_13


// LCD
#define LCD I2C_LCD_1

// LCD TFT

#define ILI9341_MADCTL_MY  0x80
#define ILI9341_MADCTL_MX  0x40
#define ILI9341_MADCTL_MV  0x20
#define ILI9341_MADCTL_ML  0x10
#define ILI9341_MADCTL_RGB 0x00
#define ILI9341_MADCTL_BGR 0x08
#define ILI9341_MADCTL_MH  0x04

/*** Redefine if necessary ***/
#define ILI9341_SPI_PORT hspi1
extern SPI_HandleTypeDef ILI9341_SPI_PORT;

#define ILI9341_RES_Pin       GPIO_PIN_0
#define ILI9341_RES_GPIO_Port GPIOB
#define ILI9341_CS_Pin        GPIO_PIN_10
#define ILI9341_CS_GPIO_Port  GPIOB
#define ILI9341_DC_Pin        GPIO_PIN_1
#define ILI9341_DC_GPIO_Port  GPIOB

// default orientation
//#define ILI9341_WIDTH  240
//#define ILI9341_HEIGHT 320
//#define ILI9341_ROTATION (ILI9341_MADCTL_MX | ILI9341_MADCTL_BGR)

// rotate right
/*
#define ILI9341_WIDTH  320
#define ILI9341_HEIGHT 240
#define ILI9341_ROTATION (ILI9341_MADCTL_MX | ILI9341_MADCTL_MY | ILI9341_MADCTL_MV | ILI9341_MADCTL_BGR)
*/

// rotate left

#define ILI9341_WIDTH  320
#define ILI9341_HEIGHT 240
#define ILI9341_ROTATION (ILI9341_MADCTL_MV | ILI9341_MADCTL_BGR)


// upside down
/*
#define ILI9341_WIDTH  240
#define ILI9341_HEIGHT 320
#define ILI9341_ROTATION (ILI9341_MADCTL_MY | ILI9341_MADCTL_BGR)
*/

/****************************/
#define TextColor(c)  (&(int){ (c) })
#define BgColor(c)    (&(int){ (c) })
#define Font(f) &f
// Color definitions
#define	ILI9341_BLACK   0x0000
#define	ILI9341_BLUE    0x001F
#define	ILI9341_RED     0xF800
#define	ILI9341_GREEN   0x07E0
#define ILI9341_CYAN    0x07FF
#define ILI9341_MAGENTA 0xF81F
#define ILI9341_YELLOW  0xFFE0
#define ILI9341_WHITE   0xFFFF
#define ILI9341_COLOR565(r, g, b) (((r & 0xF8) << 8) | ((g & 0xFC) << 3) | ((b & 0xF8) >> 3))

// NRF24L01
#define NRF24L01P_SPI                     (&hspi2)

#define NRF24L01P_SPI_CS_PIN_PORT         GPIOA
#define NRF24L01P_SPI_CS_PIN_NUMBER       GPIO_PIN_8

#define NRF24L01P_CE_PIN_PORT             GPIOB
#define NRF24L01P_CE_PIN_NUMBER           GPIO_PIN_12

#define NRF24L01P_IRQ_PIN_PORT            GPIOA
#define NRF24L01P_IRQ_PIN_NUMBER          GPIO_PIN_10

#define NRF24L01P_PAYLOAD_LENGTH          8     // 1 - 32bytes
#define NRF24L01P_ADDRESS				  { 'E', 'S', 'B' }

#define nRF24_WAIT_TIMEOUT         		  (uint32_t)0x000FFFFF

#define NRF24L01P_CHANNEL 90
#define NRF24L01P_RATE _250kbps
#define NRF24L01P_RETRANSMIT_COUNT 3

typedef uint8_t count;
typedef uint8_t widths;
typedef uint8_t length;
typedef uint16_t delay;
typedef uint16_t channel;

//**** TypeDefs ****//

typedef enum
{
    _250kbps = 2,
    _1Mbps   = 0,
    _2Mbps   = 1
} air_data_rate;

typedef enum
{
    _0dBm  = 3,
    _6dBm  = 2,
    _12dBm = 1,
    _18dBm = 0
} output_power;

typedef enum {
	False = 0,
	True
} boolean;
#endif
