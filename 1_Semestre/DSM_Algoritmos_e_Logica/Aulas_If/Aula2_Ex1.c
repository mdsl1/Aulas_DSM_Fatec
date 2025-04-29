#include <stdio.h>

main()
{
	//Insere a inicial do genero e retorna o nome completo
	char gen;
	
	printf("Digite a inicial do genero: ");
		scanf("%c", &gen);
	
	if(gen=='F')
	{
		printf("\nFeminino");
	}
	else
		if (gen=='M')	//PRECISA DA PORRA DA ASPAS SIMPLES, NOSSA CARA VSF
		{
		printf("\nMasculino");
		}
		else
		{
			printf("Outro Genero");
		}
}
