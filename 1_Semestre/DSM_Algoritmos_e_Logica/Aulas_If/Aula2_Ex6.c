#include <stdio.h>

main()
{
    //Analisa 3 numeros e retorna qual e o maior
	int a, b, c;
	
	printf("Valor A: ");
		scanf("%d", &a);
	printf("Valor B: ");
		scanf("%d", &b);
	printf("Valor C: ");
		scanf("%d", &c);
		
	if( (a>b) && (a>c) )
	{
		printf("O valor A e o maior");
	}
	else
		if(b>a && b>c)
		{
			printf("O valor B e o maior");
		}
		else
		{
			printf("O valor C e o maior");
		}
}
