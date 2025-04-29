#include <stdio.h>

main()
{
	//Pergunta o genero e retorna o peso ideal
	float alt, peso;
	char gen;
	
	printf("Genero (M ou F): ");
		scanf("%c", &gen);
	printf("Altura: ");
		scanf("%f", &alt);
		
	if(gen == 'M')
	{
		peso = (72.7*alt)-58;
	}
	else
	{
		peso = (62.1*alt)-44.7;
	}
	
	printf("\nPeso ideal para esse genero: %.2f", peso);
}
