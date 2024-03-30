#include "stm32f10x.h" // Device header
#include <delay.h>
#include <key.h>
#include <led.h>


uint8_t keynum;
int main(void)
{
	
	Key_Init();
	LED_Init();
	
	
	while(1)
	{
		keynum=Key_GetNum();
		if(keynum==1)
		{
			LED_ON();
		}
		if(keynum==2)
		{
			LED_OFF();
		}
		
		
		
	}
}
