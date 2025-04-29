#include <stdio.h>

main()
{
	int num, cent, dez, un;
	
	for (num=100; num<=999;num++)
	{
		cent = num / 100; 
		dez = (num % 100)/10;
		un = num % 10;
		
		if(cent<dez && dez<un)
		{
			printf("%d\t", num);
		}
	}
}
