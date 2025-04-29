#include <stdio.h>

main()
{
    //Calcula a media baseado nas 2 notas e retorna se foi aprovado ou reprovado
	float n1, n2, med;
	
	printf("Primeira nota:");
		scanf("%f", &n1);
	printf("Segunda nota:");
		scanf("%f", &n2);
	
	med=(n1+n2)/2;
	
	if(med>=7)
		printf("\nAprovado!");
	else
		printf("\nReprovado...");	
		printf("\nMedia: %.2f", med);
}
