#include "stm32f10x.h"// Device header
#include <delay.h>

void LED_Init(void)
{
	GPIO_InitTypeDef  GPIO_InitStruct;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	GPIO_InitStruct.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Pin=GPIO_Pin_All;
	GPIO_InitStruct.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_InitStruct);
	GPIO_SetBits(GPIOA,GPIO_Pin_0|GPIO_Pin_2|GPIO_Pin_3);
	
}

void LED_Display(u8 lednum)
{
	switch (lednum)
    {
    	case 1: GPIO_Write(GPIOA,~0x0001);
    		break;
    	case 2: GPIO_Write(GPIOA,~0x0004);
    		break;
		case 3: GPIO_Write(GPIOA,~0x0008);
    		break;
    	
    }
}

void LED_ON(void)
{
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_0);
	Delay_ms(500);
	GPIO_ResetBits(GPIOA,GPIO_Pin_2);
	Delay_ms(500);
	GPIO_ResetBits(GPIOA,GPIO_Pin_3);
	Delay_ms(500);
	
}

void LED_OFF(void)
{
	GPIO_SetBits(GPIOA,GPIO_Pin_0);
	Delay_ms(500);
	GPIO_SetBits(GPIOA,GPIO_Pin_2);
	Delay_ms(500);
	GPIO_SetBits(GPIOA,GPIO_Pin_3);
	Delay_ms(500);
}
