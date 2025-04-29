#include <stdio.h>

main()
{
	//Fatorial
	float num, fat= 1;
	
	printf("Valor: ");
		scanf("%f", &num);

	for( ; num > 0; num-- )
	{
		fat *= num;
	}
	printf("\nFatorial: %.0f", fat);
}
