#include <stdio.h>

main()
{
	int id, soma=0, cont=0, med;
	
	do
	{
		printf("\nIdade: ");
			scanf("%d", &id);
		if(id!=0)
		{
			soma += id;
			cont++;
		}	
	} while ( id!=0);
	if (cont>0)
	{
		med = soma/cont;
		printf("\nMedia das idades: %d\nTotal de pessoas: %d", med, cont);
	}
	else
	{
		printf("\nNenhuma idade Digitada...");
	}
}
