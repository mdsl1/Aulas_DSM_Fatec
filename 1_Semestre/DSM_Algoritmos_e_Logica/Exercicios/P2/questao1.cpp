#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int ap=0, i;
	float n[30], med, ntap=0, dec;
	
	//Gera os valores aleatorios e valores decimais para compor a nota
	srand(time(NULL));
	printf("\nNotas Geradas: ");
	for(i=0;i<30;i++)
	{
		n[i] = rand()%10+1;
		dec = rand()%100;
		dec = dec/100;
		n[i] += dec;
		
		//Se o valor somado for maior que 10.0, ajusta para 10
		if(n[i] > 10)
			n[i]= 10;
			
		printf("%.1f  ", n[i]);
	}
	
	//Exibe as notas maiores que 6, alem de somar para media e contar o total de aprovados
	printf("\n\nNotas aprovadas: ");
	for(i=0;i<30;i++)
	{
		if(n[i]>=6)
		{
			printf("%.1f  ", n[i]);
			ap++;
			ntap += n[i];
		}	
	}
	//Calcula a media e exibe o resultado
	med = ntap / ap;
	printf("\nMedia dos aprovados: %.1f", med);
}

