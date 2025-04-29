#include <stdio.h>

main()
{
	//divide um número de 3 caracteres em centena, dezena e unidade
	int num, cent, dez, un;
	
	printf("Valor: "); //valor de exemplo: 987
		scanf("%d", &num);
		
	cent = num / 100; //divide 987 por 100 e ignora o resto, pega apenas o 1 digito (9)
	dez = (num % 100)/10; //Esse percentual serve pra pegar o resto da divisão, divide 87 por 10 e ignora o resto, pega apenas o 1 digito (8)
	un = num % 10; //Esse percentual serve pra pegar o resto da divisão, o valor que está na frente é o quanto vai dividir o valor inserido (987)
	
	printf("\nCentena: %d, Dezena: %d, Unidade: %d", cent, dez, un);
}