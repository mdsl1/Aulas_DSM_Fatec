#include <stdio.h>

void troca(int *a, int *b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;	
}

main(){
	int a=5, b=10;
	
	printf("\nAntes da troca = A: %d | B:%d", a, b);
	troca(&a,&b);
	printf("\nDepois da troca = A: %d | B: %d", a,b);
}
