#include <stdio.h>
#include <string.h>

main(){
	char frase[30];
	int i;
	
	printf("Frase: ");
		fflush(stdin);
		// função usada pra pegar valores STRING, o scanf ignora espaços
		gets(frase);
		
	printf("\nFrase: %s", frase);
	
	//printf("\nA frase contem:");
	
	for(i=0;i < strlen(frase); i++){
		printf("\n%c", *(frase+i));// Isso é a mesma coisa que frase[i]
	}
}
