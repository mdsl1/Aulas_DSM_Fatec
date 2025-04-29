#include <stdio.h>

main()
{
	int a[10][10], l, c;
	
	for(l=0;l<10;l++)
		for(c=0;c<10;c++)
			a[l][c] = 0;
			
	for(l=1;l<10;l++)
		for(c=1;c<10;c++)
			a[l][c] = l*c;
				
	for(l=0;l<10;l++)
	{
		for(c=0;c<10;c++)
			printf("%3d", a[l][c]);
			printf("\n");
	}
}
