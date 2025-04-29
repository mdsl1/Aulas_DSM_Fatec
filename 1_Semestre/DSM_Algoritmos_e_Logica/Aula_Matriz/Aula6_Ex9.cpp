#include <stdio.h>

main()
{
	int a[5][5], i, j, sim;
	
	printf("\nValores da matriz:");
	for (i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d", &a[i][j]);
			
	sim=1;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if(a[i][j] != a[j][i])
			{
				sim=0;
				break;
			}
			
	if(sim)
		printf("\nMatriz simetrica!");
	else
		printf("Matriz nao simetrica");
}
