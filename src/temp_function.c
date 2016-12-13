/*
 * temp_function.c
 *
 *  Created on: 13 дек. 2016 г.
 *      Author: Artem
 */

#include "temp_function.h"

#include "stm32l4xx.h"
#include "stm32l476g_discovery.h"
#include "stm32l476g_discovery_glass_lcd.h"
#include "stdio.h"


void lcd_rcc(void)
{
	uint32_t rccFreq = HAL_RCC_GetHCLKFreq()/1000;
	char buffer[5];
	sprintf(buffer, "%lu", rccFreq);

	BSP_LCD_GLASS_Clear();
	BSP_LCD_GLASS_DisplayString(buffer);
}


void lcd_glass_dispalyDec(uint32_t number)
{
	char buffer[10];
	sprintf(buffer, "%lu", number);

	BSP_LCD_GLASS_Clear();
	BSP_LCD_GLASS_DisplayString(buffer);
}
