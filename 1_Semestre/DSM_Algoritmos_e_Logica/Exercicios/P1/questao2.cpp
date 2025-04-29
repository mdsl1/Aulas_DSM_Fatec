#include <stdio.h>

main()
{
	//Separa a centena e a unidade de um número e compara elas, se for igual é uma CAPICUA, senão não é.
	int num;
	
	printf("\nDigite um numero {max 999}: ");
		scanf("%d", &num);
	
	if(num/100 == num%10)
	{
		printf("\nEh uma Capicua!");
	}
	else
	{
		printf("\nNao eh uma Capicua...");
	}
	
	printf("\n--------------------------------");//Marcador, pra ficar bonito
	return main();
}
