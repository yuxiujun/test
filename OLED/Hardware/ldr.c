#include "stm32f10x.h" // Device header
#include <delay.h>



void LDR_Init(void)
{
	GPIO_InitTypeDef  GPIO_InitStruct;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	GPIO_InitStruct.GPIO_Mode=GPIO_Mode_IPU;
	GPIO_InitStruct.GPIO_Pin=GPIO_Pin_15;
	GPIO_InitStruct.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_InitStruct);	
}


uint16_t Get_LDRnum(void)
{
	uint8_t ldrnum;
	if(GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_15)==0)
	{
		return ldrnum=1;
	}
	else
	{
		return ldrnum=2;
	}


}
