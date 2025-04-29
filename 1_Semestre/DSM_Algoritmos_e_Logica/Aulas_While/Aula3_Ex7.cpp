#include <stdio.h>

main()
{
	int num, alg =0;
	
	printf("\nNumero [Max 9.999.999.999]: ");
		scanf("%d", &num);
		
	while(num != 0)
	{
		num /= 10;
		alg++;
	}
	printf("Numero de Algarismos: %d", alg);
}
