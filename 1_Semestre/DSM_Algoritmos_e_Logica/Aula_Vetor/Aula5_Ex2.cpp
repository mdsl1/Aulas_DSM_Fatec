#include<stdio.h>

main()
{
	//Analisa um vetor de 10 números, e retorna o maior e o menor valor dentre eles
	int V[10], i, maior, menor;
	
	printf("Digite os valores de A:");
	for(i=0; i<10;i++){
		printf("\nA[%d]: ", i+1);
			scanf("%d", &V[i]);
	}
	
	printf("\nVetor Lido: \n");	
	for(i=0; i<10;i++){
		printf("\tA[%d]: %d", i+1, V[i]);
	}
	
	maior= V[0];
	menor= V[0];
	for(i=0; i<10;i++)
	{
		if(V[i]>maior){
			maior= V[i];
		}
		else if(V[i]<menor){
			menor= V[i];
		}
	}
	printf("\n\nMaior: %d\nMenor: %d", maior, menor);
}

