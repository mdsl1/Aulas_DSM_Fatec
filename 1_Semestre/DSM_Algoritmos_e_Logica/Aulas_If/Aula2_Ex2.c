#include <stdio.h>

main()
{
    //Calcula o peso ideal com base na altura e genero
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
