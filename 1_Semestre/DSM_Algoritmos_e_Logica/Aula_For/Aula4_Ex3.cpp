#include <stdio.h>

main()
{
	//Ler um número, se ele o resto de divisão for igual a 0, ele é divisivel, senão ele não é
	int num, n;
	
	printf("\nValor: ");
		scanf("%d", &num);
		
	printf("Divisivel por: ");	
	
	for(n=1;n<=num; n++)
	{
		if(num % n == 0)
		{
			printf("%d, ", n);
		}
	}
}
