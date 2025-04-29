#include <stdio.h>

main()
{
	//Simulando um cronômetro, calcula o sucessor de um número, se chegar no 60, volta pro 0
	int num;
	
	printf("Digite um valor de 0 a 60: ");
		scanf("%d", &num);
		
	num = (num+1)%61;
	
	printf("Sucessor: %d", num);
}
