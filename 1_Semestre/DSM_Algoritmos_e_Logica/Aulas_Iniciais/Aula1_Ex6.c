#include <stdio.h>

main()
{
	//Converte real em dolar, com base na cotação inserida
	float VR, Cot, Dol;
	
	printf("\nDigite o Valor em reais: R$ ");
		scanf("%f", &VR);
	printf("\nDigite a cotacao do dolar: U$ ");
		scanf("%f", &Cot);
		
	Dol = VR/Cot;
	
	printf("\nO valor convertido: R$ %.2f", Dol);
}