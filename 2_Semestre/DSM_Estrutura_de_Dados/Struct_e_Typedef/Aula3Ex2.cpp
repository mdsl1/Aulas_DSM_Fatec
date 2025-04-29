#include <stdio.h>
#include <string.h>

struct dados{
	char nome[30];
	int idade;
	float altura;
};

typedef struct dados PESSOA;

main(){
	PESSOA a[5];
	for(int i = 0; i<3; i++){
		printf("\nCadastro %da Pessoa\n", i+1);
		printf("Nome: ");
			fflush(stdin);
			gets(a[i].nome);
		printf("Idade: ");
			scanf("%d", &a[i].idade);
		printf("Altura: ");
			scanf("%f", &a[i].altura);
	}
	
	for(int i = 0; i<3; i++){
		printf("\n=== %do Registro ===", i+1);
		printf("\nNome: %s \nIdade: %d anos \nAltura: %.2fm\n", a[i].nome, a[i].idade, a[i].altura);
	}
}
