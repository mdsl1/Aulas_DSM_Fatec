#include<stdio.h>

main()
{
	//Adiciona os 20 primeiros números impares
	int v[20],i;
	
	//Calcula (com programação dinamica) os númenos impares e adiciona no vetor
	//O modelo matematico seria 2*i+1
	v[0]= 1;
	for(i=1; i<20;i++){
		v[i] =v[i-1]+2;
	}
	
	printf("\nNumeros Impares:\n");
	for(i=0; i<20;i++){
		printf("%d\t", v[i]);
	}
}
