#include <stdio.h>
#include<math.h>

main()
{
	float x1,y1,x2,y2,dist;
	
	//Entrada de dois valores separados por 1 espaço
	printf("\nValores X e Y do P1: ");
		scanf("%f %f", &x1,&y1);
	printf("Valores X e Y do P2: ");
		scanf("%f %f", &x2,&y2);
		
	//Calculo raiz quadrada de ((x2-x1)elevado ao quadrado + (y2-y1)elevado ao quadrado)
	
	dist = sqrt((pow(x2-x1,2)+pow(y2-y1,2)));
	
	printf("Distancia de: %.4f",dist);
}
