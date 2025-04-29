#include<stdio.h>

main()
{
	//Analisa um vetor de 10 números soma todos eles
	int V[10], i, soma=0;
	
	printf("Digite os valores de A:");
	for(i=0; i<10;i++){
		printf("\nA[%d]: ", i+1);
			scanf("%d", &V[i]);
	}
	//Soma os valores do vetor
	for(i=0; i<10;i++){
		soma+=V[i];
	}
	printf("Total: %d", soma);
}

