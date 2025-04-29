#include <stdio.h>

main()
{
	//Digitar dois valores e calcular a soma dos números impares entre eles
	int a, b, soma=0, num;

	printf("\nValor A: ");
		scanf("%d", &a);
	printf("\nValor B: ");
		scanf("%d", &b);
		
	if(a%2 == 0 )
	{
		num = a+1;
	}
	else
	{
		num = a;	
		printf("Valores: ");
	}
	
	printf("Valores: ");
	
	while (num<=b)
	{
		printf("%d\t", num);
		soma +=num;
		num +=2;
	}
	printf("\nSoma: %d",soma);
	
}
