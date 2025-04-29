#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int bubbles(int a[10])
{
	int i, ia, aux;
	
	//Ordenado por Bubble Sort
	for(i=0;i<10;i++)
		for(ia=i+1;ia<10;ia++)
			if(a[ia]<a[i])
			{
				aux = a[i];
				a[i] = a[ia];
				a[ia] = aux;
			}
			
	printf("\nVetor A Ordenado: ");
	for(i=0;i<10;i++)
		printf("%d ", a[i]);
}

main()
{
	char tipoOrd;
	int aR[10],i;
	
	srand(time(NULL));
	printf("\nVetor A Random: ");
	for(i=0;i<10;i++)
	{
		aR[i] = rand()%100+1;
		printf("%d ", aR[i]);
	}
	
	printf("\n\nTipo de Ordenacao{S ou B}: ");
		scanf("%c", &tipoOrd);
	
	if(tipoOrd == 'B' || tipoOrd == 'b')
		bubbles(aR);
	//else
		//select();
	
	return 0;
}


