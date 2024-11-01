#include <at89c51RC2.h>
#include <INTRINS.H>

/*
"unsigned char NixieTable" is to define different display number in HEX
"0"=0X3F;"1"=0X06;"2"=0X5B;"3"=0X4F;"4"=0X66;"5"=0X6D;"6"=0X7D;"7"=0X07;"8"=0X7F;"9"=0X6F;
*/
unsigned char NixieTable[]={0X3F,0X06,0X5B,0X4F,0X66,0X6D,0X7D,0X07,0X7F,0X6F};
void NixieDisplay(unsigned char Location,Number)
{
	switch(Location)
	{
		case 1:P2_4=0;P2_3=0;P2_2=0;break;
		case 2:P2_4=0;P2_3=0;P2_2=1;break;
		case 3:P2_4=0;P2_3=1;P2_2=0;break;
		case 4:P2_4=0;P2_3=1;P2_2=1;break;
		case 5:P2_4=1;P2_3=0;P2_2=0;break;
		case 6:P2_4=1;P2_3=0;P2_2=1;break;
		case 7:P2_4=1;P2_3=1;P2_2=0;break;
		case 8:P2_4=1;P2_3=1;P2_2=1;break;
	}
	P0=NixieTable[Number];
}

void main()
{
	while(1)
	{
		NixieDisplay(3,5);
	}
}