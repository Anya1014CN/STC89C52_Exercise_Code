#include <at89c51RC2.h>
#include "Delay.h"
#include "NixieDisplay.h"

void main()
{
	while(1)
	{
		NixieDisplay(8,2);
		NixieDisplay(7,0);
		NixieDisplay(6,2);
		NixieDisplay(5,4);
		NixieDisplay(4,1);
		NixieDisplay(3,1);
		NixieDisplay(2,0);
		NixieDisplay(1,2);
	}
}