#include <stdio.h>
#include <stdlib.h>

// Fun��o para ler os valores digitados
void leitura(int *p, int n){
	for(int i=0; i<n; i++){
		printf("%d.o Valor:", i+1);
			scanf("%d", (p+i));
	}
}

// Fun��o para exibir os valores digitados
void imprimir(int *p, int n){
	for(int i=0; i<n; i++){
		printf("\n%d.a Idade: %d", i+1, *(p+i));
	}
}

// Fun��o para fazer a m�dia de idades
float media(int *p, int n){
	int sum = 0;
	
	for(int i=0; i<n;i++){
		sum += *(p+i);
	}
	return sum / n;
}

// Fun��o para classificar e retornar o maior valor
int maior(int *p, int n){
	int m = 0;
	
	for(int i = 0; i<n; i++){
		if(m < *(p+i)){
			m = *(p+i);
		}
	}
	return m;
}

main(){
	int *p, n, old; // P � o vetor e N seu tamanho
	float med;
	printf("Total de idades: ");
		scanf("%d", &n);
	
	p = (int *)calloc(n,sizeof(int));
	
	leitura(p,n);
	imprimir(p,n);
	med = media(p,n);
	printf("\n\nMedia das Idades: %.2f", med);
	old = maior(p,n);
	printf("\nMais Velho: %d", old);
}
