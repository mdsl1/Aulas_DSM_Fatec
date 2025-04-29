#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int m[5][5], l, c;
	
	for(l=0;l<5;l++)
		for(c=0;c<5;c++)
		{
			if(l==0 || l%2 == 0)
				m[l][c]= c+1;
			else
				m[l][c]= l+1;
		}
	
	printf("Matriz:\n");
	for(l=0;l<5;l++)
		{
			for(c=0;c<5;c++)
				printf("%3d", m[l][c]);
			printf("\n");
		}
}
