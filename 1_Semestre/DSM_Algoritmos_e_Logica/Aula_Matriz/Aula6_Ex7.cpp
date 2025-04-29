#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int a[4][6], t[6][4], l, c, aux;
	
	printf("Valores Matriz A:\n");
	srand(time(NULL));
	for(l=0;l<4;l++)
		for(c=0;c<6;c++)
			a[l][c] = rand()%100+1;
	
	for(l=0;l<4;l++)
	{
		for(c=0;c<6;c++)
			printf("%3d", a[l][c]);
			printf("\n");
	}
	printf("\nValores Matriz T:\n");	
	for(l=0; l<6; l++)
		for(c=0;c<4;c++)
			t[l][c] = a[c][l];
			
	for(l=0;l<6;l++)
	{
		for(c=0;c<4;c++)
			printf("%3d", t[l][c]);
			printf("\n");
	}
}

