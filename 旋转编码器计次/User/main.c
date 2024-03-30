#include "stm32f10x.h" // Device header
#include <delay.h>
#include <OLED.h>
#include <encoder.h>

int16_t Num;

int main(void)
{
	OLED_Init();
	Encoder_Init();
	OLED_ShowString(1,1,"Num:");
	while(1)
    {
    	Num+=Encoder_Get();
		Delay_ms(20);
		OLED_ShowSignedNum(1,5,Num,5);
		
    }
		
	
}


