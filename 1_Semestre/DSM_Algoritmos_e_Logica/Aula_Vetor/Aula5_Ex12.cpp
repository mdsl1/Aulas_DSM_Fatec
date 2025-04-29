#include<stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int a[5], b[5], c[10],i, ia, ib, existe;
	
	srand(time(NULL));
	for(i=0;i<5;i++)
	{
		a[i] = rand()%15+1;
		b[i] = rand()%15+1;
	}

	printf("\nA: ");
	for(i=0;i<5;i++)
		printf("%d ", a[i]);			
	printf("\nB: ");
	for(i=0;i<5;i++)
		printf("%d ", b[i]);
			
	for(i=0;i<5;i++)
		c[i]= a[i];
	
	ib=5;	
	for(ia=0;ia<5;ia++)
	{
		existe=0;
		for(i=0;i<5;i++)
			if(b[ia]==a[i])
			{
				existe=1;
				break;
			}
		if(!existe)
		{
			c[ib] = b[ia];
			ib++;
		}
	}
	
	printf("\nValores Finais: ");
	for(i=0;i<ib;i++)
		printf("%d ", c[i]);
}
