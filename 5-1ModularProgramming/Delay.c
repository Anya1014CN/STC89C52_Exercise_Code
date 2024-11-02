#include <INTRINS.H>

void Delay(unsigned int xus)
{
	while(xus--)
	{
		_nop_();
		_nop_();
		_nop_();
		_nop_();
	}
}
