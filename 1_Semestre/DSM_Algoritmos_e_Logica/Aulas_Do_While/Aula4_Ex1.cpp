#include <stdio.h>

main()
{
	int id;
	
	do
	{
		printf("\nDigite uma Idade: ");
			scanf("%d", &id);
	}	while( id<65 );
	printf("\nIdade do idoso: %d", id);
}
