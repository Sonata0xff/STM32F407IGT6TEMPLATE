#include "start_up.h"
#ifdef START_UP_API_EN

void StandardProcess()
{
	RCC_OscInitTypeDef RCC_OscInitStruct = {
			.OscillatorType = RCC_OSCILLATORTYPE_HSE,
			.HSEState = RCC_HSE_ON,
			.HSIState = RCC_HSI_OFF,
			.PLL.PLLState = RCC_PLL_ON,
			.PLL.PLLSource = RCC_PLLSOURCE_HSE,
			.PLL.PLLM = 4,
			.PLL.PLLN = 168,
			.PLL.PLLP = 2,
			.PLL.PLLQ = 7
		};
		
		RCC_ClkInitTypeDef RCC_ClkInitStruct = {
			.ClockType = RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2,
			.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK,
			.AHBCLKDivider = RCC_SYSCLK_DIV1, // HCLK = 168MHz
			.APB1CLKDivider = RCC_HCLK_DIV4,	// PCLK1 = 42MHz
			.APB2CLKDivider = RCC_HCLK_DIV2		// PCLK2 = 84MHz
		};
		HAL_Init();
    HAL_RCC_OscConfig(&RCC_OscInitStruct);
		HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5);
}

#endif