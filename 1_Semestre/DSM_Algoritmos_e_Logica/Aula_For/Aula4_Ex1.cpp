#include <stdio.h>

main()
{
	int num=0, n, soma=0;
	
	for( n=0; n<=9; n++ )
	{
		printf("\nValor %d: ",n+1);
			scanf("%d", &num);
		soma +=num;
	}
	printf("Valor Total: %d\nNumero de Repeticoes: %d", soma, n);
}
