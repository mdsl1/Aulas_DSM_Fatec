#include <stdio.h>

main()
{
	int	n, imp = 1, soma = 0;
	
	printf("Ultimo valor somado: ");
		scanf("%d", &n);
	while (imp <= n)
	{
		soma += imp;
		imp +=2;
		printf("%d\t", soma);	
	}
}
