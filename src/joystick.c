
#include "joystick.h"
#include "stm32l476g_discovery_glass_lcd.h"


void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	if (GPIO_Pin == SEL_JOY_PIN)
	{
		BSP_LCD_GLASS_Clear();
		BSP_LCD_GLASS_DisplayString("SEL");
	}

	if (GPIO_Pin == LEFT_JOY_PIN)
	{
		BSP_LCD_GLASS_Clear();
		BSP_LCD_GLASS_DisplayString("LEFT");
	}

	if (GPIO_Pin == RIGHT_JOY_PIN)
	{
		BSP_LCD_GLASS_Clear();
		BSP_LCD_GLASS_DisplayString("RIGHT");
	}

	if (GPIO_Pin == UP_JOY_PIN)
	{
		BSP_LCD_GLASS_Clear();
		BSP_LCD_GLASS_DisplayString("UP");
	}

	if (GPIO_Pin == DOWN_JOY_PIN)
	{
		BSP_LCD_GLASS_Clear();
		BSP_LCD_GLASS_DisplayString("DOWN");
	}

}
