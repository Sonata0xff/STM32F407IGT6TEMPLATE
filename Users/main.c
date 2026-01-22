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
	unsigned char title[] = "hello,407!";
	//process
	IIC1_Init(0, 0);
	OLED_Init();
	OLED_TurnOn_Screen();
	OLED_Flash_Screen(0x00);
	OLED_WriteIn_16x8String(0, 0, 10, title);
	while(1);
	return 0;
}