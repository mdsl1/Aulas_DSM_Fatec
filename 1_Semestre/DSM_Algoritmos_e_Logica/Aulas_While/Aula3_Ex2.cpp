#include <stdio.h>

main()
{
	//Tabuada
	int	num = 0, mult = 0, tab;
	
	printf("Tabuada Desejada: ");
		scanf("%d", &tab);
		
	while (num<= 10)
	{
		mult += tab;//num = num + 3
		printf("%dx%d=%d\n", tab, num, mult);
		num++;
	}
}
