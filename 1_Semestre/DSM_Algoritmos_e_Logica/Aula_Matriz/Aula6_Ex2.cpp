#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int a[5][5],l,c;
	
	srand(time(NULL));
	for(l=0;l<5;l++)
		for(c=0;c<5;c++)
			a[l][c] = rand()%50+1;
			
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
			printf("%3d",a[l][c]);
		printf("\n");
	}
			
		
		
	
}
