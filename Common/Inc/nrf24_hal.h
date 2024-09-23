#ifndef __NRF24_HAL_H
#define __NRF24_HAL_H


// Hardware abstraction layer for NRF24L01+ transceiver (hardware depended functions)
// GPIO pins definition
// GPIO pins initialization and control functions
// SPI transmit functions


// Peripheral libraries
#include "spi.h"
#include "defines.h"

void nRF24_CE_L(void);
void nRF24_CE_H(void);
void nRF24_CSN_L(void);
void nRF24_CSN_H(void);



// Macros for the RX on/off
#define nRF24_RX_ON                nRF24_CE_H
#define nRF24_RX_OFF               nRF24_CE_L


// Function prototypes
void nRF24_GPIO_Init(void);
uint8_t nRF24_LL_RW(uint8_t data);

#endif // __NRF24_HAL_H
