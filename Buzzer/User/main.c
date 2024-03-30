#include "stm32f10x.h" // Device header
#include <delay.h>
#include <buzzer.h>
#include <ldr.h>


uint16_t ldrnum;
int main(void)
{
	
	Buzzer_Init();
	LDR_Init();
	
	while(1)
	{
		ldrnum=Get_LDRnum();
		if(ldrnum==1)
		{
			Buzzer_ON();
			
		}
		else
		{
			Buzzer_OFF();
		}
		
	}
}
