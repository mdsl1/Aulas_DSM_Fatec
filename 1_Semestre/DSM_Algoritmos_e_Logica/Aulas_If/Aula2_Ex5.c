#include <stdio.h>

main()
{
    //Analisa 2 numeros e retorna qual e o maior
	int n1, n2;
	
	printf("Primeiro numero: ");
		scanf("%d", &n1);
	printf("Segundo numero: ");
		scanf("%d", &n2);
	
	if(n1==n2)
	{
		printf("\nEles sao iguais");
	}
	else 
		if(n1>n2)
	{
		printf("\nO %d e maior", n1);
	}
	else
	{
		printf("\nO %d e maior", n2);
	}
}
