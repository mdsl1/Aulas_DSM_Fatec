#include<stdio.h>

main()
{
	float alt, larg, per, area;
	
	printf("Altura: ");
		scanf("%f",&alt);
	printf("Largura: ");
		scanf("%f", &larg);
		
	area = alt*larg;
	per = (alt*2)+(larg*2);
	
	printf("\nPerimetro: %.2f\nArea: %.2f", per, area);
}
