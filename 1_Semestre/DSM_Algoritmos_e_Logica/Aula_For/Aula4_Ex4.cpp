#include <stdio.h>

main()
{
	//Ler um número e calcular se ele é primo ou não (se for divisível só por ele mesmo e por um)
	int num, n, cont=0;
	
	printf("\nValor: ");
		scanf("%d", &num);	
	
	for(n=1;n<=num; n++)
	{
		if(num % n == 0)
		{
			cont++;
		}
	}
	if(cont==2)
	{
		printf("\nNumero primo!\n");
	}
	else
	{
		printf("\nNao eh Numero primo!\n");
	}
	return main();
}
