#include "bsp.h"

static volatile uint32_t cooldown_counter = 0;
static volatile int16_t blinking_time = 0;
static boolean display = False;

// Starts the cooldown timer
void BSP_StartCardCooldown(boolean _display) {
    cooldown_counter = CARD_COOLDOWN * 1000; // Convert seconds to milliseconds
    display = _display;
}

inline boolean BSP_GetDisplay(){
	return display;
}

inline void BSP_Countdown(void){
	cooldown_counter--;
}

inline uint32_t BSP_GetCounter(){
	return cooldown_counter;
}


void BSP_StartBlinking(void){
	blinking_time = BLINK_TIME;
}

inline void BSP_Blink(void){
	blinking_time--;
}

inline int16_t BSP_GetBlinkingTime(){
	return blinking_time;
}
