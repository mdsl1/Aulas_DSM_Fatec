#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct dados{
	char nome[30];
	int idade;
	float altura;
};

typedef struct dados PESSOA;

void leitura(PESSOA *v){
	
	for(int i = 0; i<3 ; i++){
		printf("\nPessoa %d\n", i+1);
		printf("Nome: ");
			fflush(stdin);
			gets((v+i) -> nome); // Equivalente à v[i].nome
		printf("Idade: ");
			scanf("%d", &(v+i) -> idade); // Equivalente à &v[i].idade
		printf("Altura: ");
			scanf("%f", &(v+i) -> altura);
	}
}

main() {
	
	// Para as variaveis comuns, é usado o a.nome (por exemplo se a váriavel chamar "a"). Para variaveis ponteiro, é usado ->
	PESSOA a[3];
	
	leitura(a);
		
	for(int i = 0; i<3; i++){
		printf("\n=== %do Registro ===", i+1);
		printf("\nNome: %s \nIdade: %d anos \nAltura: %.2fm\n", a[i].nome, a[i].idade, a[i].altura);
	}
}
