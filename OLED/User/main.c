#include "stm32f10x.h" // Device header
#include <delay.h>
#include <OLED.h>




int main(void)
{
	
	OLED_Init();
	
	while(1)
	{
		OLED_ShowChar(1,1,'C');
		OLED_ShowString(1,3,"YUXIUJUN!");
		OLED_ShowNum(2,1,250,3);
		OLED_ShowHexNum(2,4,32,2);
	}
}
