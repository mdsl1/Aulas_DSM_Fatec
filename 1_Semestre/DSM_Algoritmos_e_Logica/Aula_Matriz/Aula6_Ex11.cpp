#include <stdio.h>

main()
{
	int T[8][8],l,c;
	
	for(l=0;l<8;l++)
		for(c=0;c<8;c++)
			T[l][c] = (l+c)%2;
			
	printf("\nTabuleiro\n");
	for(l=0;l<8;l++)
		{
			for(c=0;c<8;c++)
				printf("%3d", T[l][c]);
			printf("\n");
		}
}
