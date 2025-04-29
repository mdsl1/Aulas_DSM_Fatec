#include<stdio.h>

main()
{
	//Analisa dois vetores de 10 números e multiplica os respectivos valores
	int a[10],b[10], i, mult[10], soma=0;
	
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
	//multiplica os valores
	for(i=0; i<10;i++)
	{
		mult[i] =a[i]*b[i];
		printf("\tMult[%d]: %d", i+1, mult[i]);
	}
	
	//soma os valores
	for(i=0; i<10;i++){
		soma += mult[i];
	}
	printf("\nTotal: %d", soma);
}
