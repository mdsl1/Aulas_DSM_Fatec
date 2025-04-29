#include <stdio.h>

main()
{
	//Ler um número e calcular se ele é perfeito ou não (se a soma dos seus divisores for igual ao número digitado)
	int num, n, soma=0;
		
	for(num=6; num<100000; num++)
	{
		for(n=1;n<num; n++)
		{
			if(num % n == 0)
			{
				soma+=n;
			}
		}
		if(num==soma)
		{
			printf("\nO numero %d eh perfeito!", num);
		}
	}
	
}
