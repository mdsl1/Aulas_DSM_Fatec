#include <stdio.h>
#include <string.h>

main()
{
	char capital[10]="PARIS", cidade[10];
	
	printf("Qual eh a capital da Franca?\n");
	fflush(stdin);
	gets(cidade);
	
	if(strcmp(strupr(cidade),capital)==0)
		printf("Voce venceu");
	else
		printf("Voce perdeu...");
}
