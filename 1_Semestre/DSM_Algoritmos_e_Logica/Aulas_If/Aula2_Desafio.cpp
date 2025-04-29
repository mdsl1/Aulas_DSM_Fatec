#include <stdio.h>

main()
{
	int a, b, c, aux;
	
	printf("\nValor de A: ");
		scanf("%d", &a);
	printf("\nValor de B: ");
		scanf("%d", &b);
	printf("\nValor de C: ");
		scanf("%d", &c);
		
	if (a>b || a>c)//O menor valor nao esta em A
		if(b<c)
		{
			aux = a;
			a = b;
			b = aux;
		}
		else
		{
			aux = a;
			a = c;
			c = aux;	
		}
	if (b>c)
	{
		aux = b;
		b = c;
		c = aux;
	}
	
	printf("A = %d, B = %d, C = %d\n", a, b, c);
		
	return main();
}
