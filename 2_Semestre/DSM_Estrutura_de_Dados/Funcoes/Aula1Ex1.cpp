#include <stdio.h>

// Vari�veis globais n�o s�o uma boa pratica, pois alocam mem�ria sempre
int r;

int dobro(int v){
	return 2*v;
}

main(){
	int a;
	
	printf("Digite um valor:");
		scanf("%d", &a);
		
	r = dobro(a);
	
	printf("O dobro de %d eh %d", a, r);
}
