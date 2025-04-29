#include <stdio.h>

main()
{
	//soma de compra
	float preco, total;
	
	while (preco!=0)//É diferente de 0
	{
		printf("\nPreco: R$ ");
			scanf("%f", &preco);
		
		total += preco;
		printf("Valor Parcial: R$ %.2f\n", total);
	}
	printf("--------------------------------");
	printf("\nValor Total: R$ %.2f", total);
}
