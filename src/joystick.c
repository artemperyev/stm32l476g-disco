
#include "joystick.h"


void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	if (GPIO_Pin == SEL_JOY_PIN)
	{
		BSP_LED_Toggle(LED_RED);
		BSP_LED_Toggle(LED_GREEN);
	}

	if (GPIO_Pin == LEFT_JOY_PIN)
	{
		BSP_LED_Toggle(LED_RED);
	}

	if (GPIO_Pin == RIGHT_JOY_PIN)
	{
		BSP_LED_Toggle(LED_GREEN);
	}

	if (GPIO_Pin == UP_JOY_PIN)
	{
		BSP_LED_Toggle(LED_RED);
	}

	if (GPIO_Pin == DOWN_JOY_PIN)
	{
		BSP_LED_Toggle(LED_GREEN);
	}

}
