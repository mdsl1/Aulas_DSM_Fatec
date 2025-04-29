#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int num[20], par[20], impar[20], c1, c2=0, c3=0;
	//Pega o clock da máquina e multiplica com o número random padrão, ele deve vir sempre antes do rand
	srand(time(NULL));
	//Gera 20 numeros randoms pro vetor
	for(c1=0; c1<20;c1++)
	{
		num[c1] = rand()%100+1;//Esse mais 1 impede que gere o número 0
	}
	printf("\nValores Gerados: ");
	for(c1=0; c1<20;c1++)
	{
		printf("%d, ",num[c1]);
	}
	
	//Se o numero for divisivel por 2, é adicionado no vetor par. Se não for, ele é impar. 
	for(c1=0; c1<20;c1++)
	{
		//Se o resto do valor for igual a 0, o valor é par
		if(num[c1]%2 == 0)
		{
			par[c2++] = num[c1];
		}
		//Se o resto não for igual a 0, o valor é impar
		else
		{
			impar[c3++] = num[c1];
		}
	}
	
	printf("\n\nValores Pares: ");
	for(c1=0;c1<c2;c1++)
	{
		printf("%d, ",par[c1]);
	}
	printf("\n\nValores Impares: ");
	for(c1=0;c1<c3;c1++)
	{
		printf("%d, ",impar[c1]);
	}
}
