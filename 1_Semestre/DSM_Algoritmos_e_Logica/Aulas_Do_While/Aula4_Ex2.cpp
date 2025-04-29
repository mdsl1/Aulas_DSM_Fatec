#include <stdio.h>

main()
{
	float nota;
	
	do
	{
		printf("\nNota: ");
			scanf("%f", &nota);
			
		if( nota<0 || nota>10 )
			printf("\nNota Invalida");
	} while ( nota<0 || nota>10 );
	printf("\nNota: %.2f", nota);
}
