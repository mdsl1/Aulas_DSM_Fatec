#include <stdio.h>
#include <stdlib.h>

main(){
	int *p, i;
	
	// Isso transforma o p em um vetor sem limitação de itens
	p = (int *)calloc(1,sizeof(int));
	
	for(i=0;i<5;i++){
		printf("\n%do Valor: ", i+1);
			scanf("%d", (p+i)); // &p[i] Soma o endereço de p e soma com 1 para passar para o proximo endereço
	}
	
	for(i=0;i<5;i++){
		printf("\nValor: %d ", *(p+i));
	}
}
