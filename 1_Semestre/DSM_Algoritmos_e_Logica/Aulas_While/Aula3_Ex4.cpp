#include <stdio.h>

main()
{
	int	num = 0, soma = 0;
	
	while (num <=1000)
	{
		soma += num;
		num ++;//num = num + 1
	}
	printf("\nSoma= %d", soma);
}
