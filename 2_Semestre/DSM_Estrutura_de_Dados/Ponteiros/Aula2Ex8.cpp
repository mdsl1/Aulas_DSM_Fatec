#include <stdio.h>
#include <stdlib.h>

// Função para ler os valores digitados
void leitura(float *p, int n){
	for(int i=0; i<n; i++){
		printf("%d.a Nota:", i+1);
			scanf("%f", (p+i));
	}
}

// Função para exibir os valores digitados
void imprimir(float *p, int n){
	for(int i=0; i<n; i++){
		printf("\n%d.a Nota: %.2f", i+1, *(p+i));
	}
}

// Função para avaliar se o aluno foi aprovado ou reprovado
void sitAlunos(float *p, int n, int *ap, int *rp){
	for(int i=0; i<n; i++){
		if(*(p+i) < 7){
			(*rp) ++;
		}
		else{
			(*ap) ++;
		}
	}
}

main(){
	int n, ap=0, rp=0;
	float *p; // Será o endereço da 1a nota
	
	printf("Nro de notas: ");
		scanf("%d", &n);
		
	p = (float *)calloc(n, sizeof(float));
	
	leitura(p,n);
	imprimir(p,n);
	
	sitAlunos(p, n, &ap, &rp);
	
	printf("\nAprovados: %d, Reprovados: %d", ap, rp);
}
