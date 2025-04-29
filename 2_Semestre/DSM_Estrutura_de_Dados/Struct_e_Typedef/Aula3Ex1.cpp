#include <stdio.h>

struct dados{
	char nome[30];
	int idade;
	float altura;
};

typedef struct dados PESSOA;

main(){
	PESSOA a;
	
	printf("Nome: ");
		fflush(stdin);
		gets(a.nome);
	printf("Idade: ");
		scanf("%d", &a.idade);
	printf("Altura: ");
		scanf("%f", &a.altura);
		
	printf("\nNome: %s \nIdade: %d anos \nAltura: %.2fm", a.nome, a.idade, a.altura);
		
}
