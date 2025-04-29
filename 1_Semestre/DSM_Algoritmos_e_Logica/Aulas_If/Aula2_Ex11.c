#include<stdio.h>
#include<math.h>

main()
{
	//calcula o IMC com base no peso e altura digitada e retorna se esta saudavel ou nao
	float peso, alt, imc;
	
	printf("Peso: ");
		scanf("%f",&peso);
	printf("Altura: ");
		scanf("%f",&alt);
		
	imc = peso / (alt*alt);
	
	if(imc<18.5)
	{
		printf("\nPeso Baixo");
	}
	else if(imc <= 24.9)
	{
		printf("\nPeso Normal");
	}
	else if( imc <= 29.9)
	{
		printf("\nSobrepeso");
	}	
	else if( imc <= 34.9)
	{
		printf("\nObesidade I Grau");
	}
	else if( imc <= 39.9)
	{
		printf("\nObesidade II Grau");
	}
	else
	{
		printf("\nObesidade III Grau");
	}
	printf("\nIMC = %.2f",imc);
}
