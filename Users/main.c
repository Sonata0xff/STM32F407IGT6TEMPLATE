#include "stm32f4xx.h"                  // Device header
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_conf.h"
#include "start_up.h"
#include "IIC.h"
#include "OLED.h"
int main()
{
	//standard process
	StandardProcess();
	
	//data def
	//unsigned char title[] = "hello,407!";
	char data[] = {0xaa};
	//process
	IIC1_Init(0, 0);
	IIC1SendBytes(data, 1, 0xaa);
	//OLED_Init();
	//OLED_TurnOn_Screen();
	//OLED_Flash_Screen(0x00);
	//OLED_WriteIn_16x8String(0, 0, 10, title);
	while(1);
	/*GPIO_InitTypeDef gpio = {
		.Pin = GPIO_PIN_6,
		.Mode = GPIO_MODE_OUTPUT_PP,
		.Pull = GPIO_NOPULL,
		.Speed = GPIO_SPEED_FREQ_MEDIUM
	};
	__HAL_RCC_GPIOA_CLK_ENABLE();
	HAL_GPIO_Init(GPIOA, &gpio);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
	while(1) {
		HAL_Delay(500);
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_6);
	}*/
	return 0;
}