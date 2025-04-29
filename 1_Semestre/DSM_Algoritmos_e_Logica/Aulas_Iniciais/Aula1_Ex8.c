#include <stdio.h>

main()
{
	//Trasforma segundos em horas, minutos e segundos
	int num, hr, min, seg;
	
	printf("Total de segundos: ");
		scanf("%d", &num);

//divide por 3600 para hora, pega o resto e divide por 60, pega o resto 
	hr = num/3600;
	min = (num % 3600)/60;
	seg = (num % 3600)%60;
	
	printf("\n%d Horas, %d Minutos e %d Segundos",hr, min,seg);
}
