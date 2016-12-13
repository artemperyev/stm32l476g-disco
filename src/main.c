/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32l4xx.h"
#include "stm32l476g_discovery.h"
#include "stm32l476g_discovery_glass_lcd.h"

#include "temp_function.h"
			



void startup_init(void)
{
	SysTick_Config(HAL_RCC_GetHCLKFreq()/1000);

	BSP_LED_Init(LED_RED);
	BSP_LED_Init(LED_GREEN);
	BSP_JOY_Init(JOY_MODE_EXTI);

	BSP_LCD_GLASS_Init();
}


int main(void)
{
	startup_init();

	BSP_LCD_GLASS_DisplayString("PRIVET");
	BSP_LCD_GLASS_BarLevelConfig(BATTERYLEVEL_1_2);



	BATTERY_DETECTION_GPIO_CLK_ENABLE();




	while(1)
	{

	}
}
