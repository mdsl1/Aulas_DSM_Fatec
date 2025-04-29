#include <stdio.h>

main()
{
	//aplica um desconto dependendo do preço do produto, e mostra como se fosse uma nota fiscal
	float vlr, desc, perc, final;
	
	printf("Preco: R$ ");
		scanf("%f", &vlr);
	
	if(vlr < 200)
	{
		perc = 0.1;
	}
	else if(vlr >= 200 && vlr < 500)
	{
		perc = 0.15;
	}
	else	//Se for maior que 500
	{
		perc = 0.2;
	}
	
	desc = vlr * perc;
	final = vlr - desc;
	
	printf("\n--------------------------------");
	printf("\nTotal Compra: R$ %.2f\nDescontos: R$ %.2f\nPreco Final: R$ %.2f", vlr, desc, final);
}
