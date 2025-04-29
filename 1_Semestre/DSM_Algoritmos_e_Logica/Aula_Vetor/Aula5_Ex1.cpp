#include<stdio.h>

main()
{
	int V[10], i;
	
	printf("Digite os valores de A:");
	for(i=0; i<10;i++){
		printf("\nA[%d]: ", i+1);
			scanf("%d", &V[i]);
	}
	
	printf("\nVetor Lido: \n");	
	for(i=0; i<10;i++){
		printf("\tA[%d]: %d", i+1, V[i]);
	}
		
}
