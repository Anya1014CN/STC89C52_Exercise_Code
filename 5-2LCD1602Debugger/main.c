#include <at89c51RC2.h>
#include "lcd1602.h"
#include "Delay.h"

int Result=0;

void main()
{
	LCD_Init();
//  Display test start
//
//	LCD_ShowChar(1,1,'A');
//	LCD_ShowString(1,3,"Hello");
//	LCD_ShowNum(1,9,123,3);
//	LCD_ShowSignedNum(1,13,-66,2);
//	LCD_ShowHexNum(2,1,0xA8,2);
//	LCD_ShowBinNum(2,4,0xAA,8);
//	result=1+1;
//	LCD_ShowNum(2,13,result,3);
//
//	Display test end
	
	while(1)
	{
		Result++;
		Delay(1000);
		LCD_ShowNum(1,1,Result,3);
	}
}