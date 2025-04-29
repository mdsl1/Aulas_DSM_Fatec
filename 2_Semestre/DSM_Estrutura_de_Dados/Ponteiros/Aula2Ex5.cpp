#include <stdio.h>
#include <string.h>

int busca(char *str, char l){
	int i;
	
	for(i=0; i<strlen(str); i++){
		if(str[i] == l){
			return i;
		}	
	}
	// Caso não seja encontrado nada, sair retornar -1. Caso ele encontre algo, ele vai encerrar tudo e retornar a letra
	return -1;
}


main(){
	char frase[30], letra;
	int i, pos;
	
	printf("Frase: ");
		fflush(stdin);
		// função usada pra pegar valores STRING, o scanf ignora espaços
		gets(frase);
	printf("Caractere a buscar: ");
		scanf("%c", &letra);
		
	pos = busca(frase, letra);
	
	if(pos == -1){
		printf("Caractere %c nao encontrado", letra);
	}
	else{
		printf("\nLetra: %c esta na posicao %d", frase[pos], pos+1);
	}
}
