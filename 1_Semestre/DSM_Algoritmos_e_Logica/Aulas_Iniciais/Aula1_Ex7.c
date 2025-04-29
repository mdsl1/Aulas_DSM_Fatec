#include <stdio.h>

main()
{
	//Passa o valor de A pra B e o de B pra A
	int a, b, c;
	
	printf("Valor a: ");
		scanf("%d", &a);
	printf("Valor de b:");
		scanf("%d", &b);
		
	c = a;
	a = b;
	b = c;
	
	printf("Valores Invertidos:\n A: %d e B: %d", a, b);
}
