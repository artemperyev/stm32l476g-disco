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
			
void startup_init(void)
{
	SysTick_Config(HAL_RCC_GetHCLKFreq()/1000);

	BSP_LED_Init(LED_RED);
	BSP_LED_Init(LED_GREEN);
	BSP_JOY_Init(JOY_MODE_EXTI);
}




int main(void)
{
	startup_init();


	while(1)
	{

	}
}
