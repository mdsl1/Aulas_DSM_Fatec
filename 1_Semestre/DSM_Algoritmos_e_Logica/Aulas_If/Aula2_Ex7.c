#include <stdio.h>

main()
{
	int id;
	
	printf("Idade:");
		scanf("%d",&id);
	
	if(id < 16)
	{
		printf("Votar e proibido");
	}
	else
		if(id < 18 || id >=65)
		{
			printf("\nVotar e facultativo");
		}
		else
		{
			printf("Votar e obrigatorio");
		}
}
