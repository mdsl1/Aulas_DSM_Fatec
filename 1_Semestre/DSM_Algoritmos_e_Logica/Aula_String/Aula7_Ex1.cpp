#include <stdio.h>
#include <string.h>

main()
{
	char palavra[50];
	int tam;
	
	printf("\nDigite uma palavra:");
		//Limpa a memória do teclado
		fflush(stdin);
		//Para escanear strings, não precisa do &
		//Scanf serve para ler palavras
		scanf("%s", palavra);
		
		
	//Mede o tamanho da string	
	tam = strlen(palavra);
	
	printf("\nA palavra %s tem %d letras.", palavra, tam);
}
