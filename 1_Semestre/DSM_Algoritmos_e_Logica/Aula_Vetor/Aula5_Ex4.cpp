#include<stdio.h>

main()
{
	//Analisa dois vetores de 10 números e soma os respectivos valores
	int a[10],b[10], i, soma[10];
	
	printf("\nDigite os valores de A:");
	for(i=0; i<10;i++){
		printf("\nA[%d]: ", i+1);
			scanf("%d", &a[i]);
	}
	printf("\nDigite os valores de B:");
	for(i=0; i<10;i++){
		printf("\nB[%d]: ", i+1);
			scanf("%d", &b[i]);
	}
	//Soma os valores dos vetores
	for(i=0; i<10;i++)
	{
		soma[i] =a[i]+b[i];
	}
	printf("\nTotal:\n");
	for(i=0; i<10;i++){
		printf("%d\t", soma[i]);
	}
}
