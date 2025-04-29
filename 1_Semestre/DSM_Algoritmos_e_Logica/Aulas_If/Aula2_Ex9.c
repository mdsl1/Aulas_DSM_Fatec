#include <stdio.h>

main()
{
	int id;
	
	printf("Idade: ");
		scanf("%d", &id);
		
	if(id <= 8)
	{
		printf("\nCategoria Infantil A");
	}
	else if(id < 13)
	{
		printf("\nCategoria Infantil B");
	}
	else if(id < 18)
	{
		printf("\nCategoria Juvenil A");
	}
	else if(id < 21)
	{
		printf("\nCategoria Juvenil B");
	}
	else
	{
		printf("\nCategoria Senior");
	}
}
