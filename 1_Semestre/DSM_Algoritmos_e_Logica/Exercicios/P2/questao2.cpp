#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Função para organizar os números de forma crescente
int compare(const void *a, const void *b)
{
    int int_a = *(int *)a;
    int int_b = *(int *)b;
    return int_a - int_b;
}

main()
{
	int v[10], szv, maior[2], i;
	
	//Gera os valores
	srand(time(NULL));
	printf("\nValores gerados: ");
	for(i=0;i<10;i++)
	{
		v[i] = rand()%100+1;
		printf("%3d ", v[i]);
	}
	
	//Organiza de forma crescente
	szv = sizeof(v) / sizeof(v[0]);
	qsort(v, szv, sizeof(int), compare);
	
	//Pega os 2 valores maiores e exibe na tela
	printf("\nMaiores valores: ");
	for(i=0;i<2;i++)
	{
		maior[i] = v[i+8];
		printf("%3d", maior[i]);
	}
	
}
