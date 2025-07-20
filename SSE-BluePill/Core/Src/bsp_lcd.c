#include "bsp_lcd.h"



static boolean status[10];
static int status_index = 0;

void Initializing(BSP_LCD_SetupParams_TypeDef *params){
	char time[5];
	BSP_LCD_SendMessage("Initializing: ", 0, 0, True);
 	itoa(params->setup_time - *(params->seconds), time, 10);
	BSP_LCD_SendMessage(time, 0, 1, False);
}

void BSP_LCD_Init(BSP_LCD_SetupParams_TypeDef *params){
	ILI9341_Init();
}


void BSP_LCD_Clear(int* _bg_color){
	int bg_color = ILI9341_GREEN;
	if(_bg_color) bg_color = *_bg_color;
	ILI9341_FillScreen(bg_color);
}


void BSP_LCD_SendMessage(char* message, uint8_t col, uint8_t row, boolean clear){
	BSP_LCD_SendMessageWithParams(message, col, row, clear, NULL, NULL, NULL);
}

void BSP_LCD_SendMessageWithParams(char* message, uint8_t col, uint8_t row, boolean clear, FontDef* _font, int* _text_color, int* _bg_color){
	if(clear){
		BSP_LCD_Clear(NULL);
	}
	int text_color = ILI9341_BLACK, bg_color = ILI9341_WHITE;
    FontDef *font = _font ? _font : &Font_16x26;
    if(_text_color) text_color = *_text_color;
	if(_bg_color) bg_color = *_bg_color;
	ILI9341_WriteString(col, row, message, *(font), text_color, bg_color);
}

int BSP_LCD_ADD_STATUS(uint8_t symbol[8], boolean default_value){
	status[status_index] = default_value;
	return status_index++;
}

void BSP_LCD_UPDATE_STATUS(uint8_t idx, boolean value){
	status[idx] = value;
	BSP_LCD_DISPLAY_STATUS();
}

void BSP_LCD_DISPLAY_STATUS(){
	for(int i = 0; i < status_index; i++){
		if(status[i]){
			ILI9341_WriteString(0, 50, "STATUS", Font_16x26, ILI9341_BLACK, ILI9341_WHITE);

		}else{

			ILI9341_WriteString(0, 50, "", Font_16x26, ILI9341_BLACK, ILI9341_WHITE);
		}
	}
}



