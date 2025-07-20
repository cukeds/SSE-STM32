#include "defines.h"

#define MAX_USER_AMOUNT 3
#define MAX_WS_AMOUNT 5

#define BLINK_TIME 300

#define SET_FIELD(struct_ptr, field, value) ((struct_ptr)->field = (value))
#define TOGGLE_FIELD(struct_ptr, field) ((struct_ptr)->field = !(struct_ptr)->field)

#define TURN_ON_WS_COMMAND ((uint8_t[NRF24L01P_PAYLOAD_LENGTH - 1]){1, 0, 0, 0, 0, 0, 0})
#define TURN_OFF_WS_COMMAND ((uint8_t[NRF24L01P_PAYLOAD_LENGTH - 1]){0, 0, 0, 0, 0, 0, 0})
#define INACTIVITY_MAX_MINUTES 15 * 60	// in minutes
#define MOTION_ACTIVITY_MINIMUM 2
#define MOTION_ACTIVITY_RANGE_SECONDS 5

#define CONFIG_MENU_ITEMS 3
#define CONFIG_MENU_BUTTON_DELAY_MS 1500 // in ms
#define BUTTON_HELD_COOLDOWN 1000

#define LETTERS_ALPHABET 26
#define UPPERCASE_OFFSET 'A'
#define LOWERCASE_OFFSET 'a'

#define CARD_COOLDOWN 6 // seconds
