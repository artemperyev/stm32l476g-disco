/**
  ******************************************************************************
  * @file    stm32l4xx_it.c
  * @author  Ac6
  * @version V1.0
  * @date    02-Feb-2015
  * @brief   Default Interrupt Service Routines.
  ******************************************************************************
*/

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"
#include "stm32l4xx.h"
#include "stm32l476g_discovery.h"
#ifdef USE_RTOS_SYSTICK
#include <cmsis_os.h>
#endif
#include "stm32l4xx_it.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/******************************************************************************/
/*            	  	    Processor Exceptions Handlers                         */
/******************************************************************************/

/**
  * @brief  This function handles SysTick Handler, but only if no RTOS defines it.
  * @param  None
  * @retval None
  */
void SysTick_Handler(void)
{
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();
#ifdef USE_RTOS_SYSTICK
	osSystickHandler();
#endif
}


/**
  * @brief  This function handles external line 0 interrupt request.
  * @param  None
  * @retval None
  */
void EXTI0_IRQHandler(void)
{
  HAL_GPIO_EXTI_IRQHandler(SEL_JOY_PIN);
}


void EXTI1_IRQHandler(void)
{
  HAL_GPIO_EXTI_IRQHandler(LEFT_JOY_PIN);
}


void EXTI2_IRQHandler(void)
{
  HAL_GPIO_EXTI_IRQHandler(RIGHT_JOY_PIN);
}


void EXTI3_IRQHandler(void)
{
  HAL_GPIO_EXTI_IRQHandler(UP_JOY_PIN);
}


void EXTI9_5_IRQHandler(void)
{
  HAL_GPIO_EXTI_IRQHandler(DOWN_JOY_PIN);
}
