#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct dados{
	char nome[30];
	int idade;
	float altura;
};

typedef struct dados PESSOA;

main() {
	
	// Para as variaveis comuns, � usado o a.nome (por exemplo se a v�riavel chamar "a"). Para variaveis ponteiro, � usado ->
	PESSOA *p;
	
	p = (PESSOA *)calloc(1,sizeof(PESSOA));
	
	printf("Nome: ");
		fflush(stdin);
		gets(p -> nome); // Equivalente � *p.nome
	printf("Idade: ");
		scanf("%d", &p -> idade);
	printf("Altura: ");
		scanf("%f", &p -> altura);
		
	printf("\nNome: %s \nIdade: %d anos \nAltura: %.2fm", p->nome, p->idade, p->altura);
}
