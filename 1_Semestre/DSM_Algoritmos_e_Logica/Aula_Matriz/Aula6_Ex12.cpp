#include <stdio.h>

main()
{
	int a[5][5], l, c;
	
	for(l=0;l<5;l++)
		for(c=0;c<5;c++)
			if(l==c || l+c==4)
				a[l][c] = 1;
			else
				a[l][c] = 0;
	
	printf("\nValores Gerados\n");
	for(l=0;l<5;l++)
		{
			for(c=0;c<5;c++)
				printf("%3d", a[l][c]);
			printf("\n");
		}
}
