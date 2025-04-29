#include <stdio.h>
#include <string.h>

main()
{
	char frase[50];
	int tam;
	
	printf("\nDigite uma frase:");
		//Limpa a memória do teclado
		fflush(stdin);		
		//gets serve para ler frases
		gets(frase);
		
		
	//Mede o tamanho da string	
	tam = strlen(frase);
	
	printf("\nA frase '%s' tem %d caracteres.", frase, tam);
}
