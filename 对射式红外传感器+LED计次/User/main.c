#include "stm32f10x.h" // Device header
#include <delay.h>
#include <OLED.h>
#include <countsensor.h>



int main(void)
{
	OLED_Init();
	CountSensor_Init();
	OLED_ShowString(1,1,"Count:");
	while(1)
    {
    	OLED_ShowNum(1,8,CountSensor_Get(),5);
		
    }
		
	
}


