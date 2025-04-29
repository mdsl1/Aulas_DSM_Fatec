#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int a[4][12], l, c, tm, ta, maior, s, m;
	char mes[12][4]={"Jan","Fev","Mar","Abr","Mai","Jun","Jul","Ago","Set","Out","Nov","Dez"};
	
	srand(time(NULL));
	for(l=0;l<4;l++)
		for(c=0;c<12;c++)
			a[l][c] = 50 + rand()%50;
			
	printf("\nTabela Gerada\n");
	for(l=0;l<4;l++)
		{
			for(c=0;c<12;c++)
				printf("%3d", a[l][c]);
			printf("\n");
		}
	
	ta=0;
	printf("\n");
	for(c=0;c<12;c++)
	{
		tm=0;
		for(l=0;l<4;l++)
		{
			tm += a[l][c];
			if(a[l][c]>maior)
			{
				maior = a[l][c];
				s = l+1;
				m = c;
			}
		}
		printf("Total de %s: %d\n", mes[c],tm);
		ta += tm;
	}
	printf("\nTotal do ano: %d\n",ta);
	printf("Maior producao do ano: %d\n",maior);
	printf("Ocorreu na semana %d de %s\n",s,mes[m]);
	
}
