#include "stm32f10x.h" // Device header
#include <delay.h>
#include <OLED.h>
#include <timer.h>

uint16_t num;

int main(void)
{
	OLED_Init();
	Timer_Init();
	OLED_ShowString(1,1,"Num:");
	while(1)
    {
    	
		OLED_ShowNum(1,5,num,5);
		
    }
		
	
}


void TIM2_IRQHandler(void)
{
	if(TIM_GetITStatus(TIM2,TIM_IT_Update)==SET)
	{
		num++;	
		TIM_ClearITPendingBit(TIM2,TIM_IT_Update);
	}
	
}

