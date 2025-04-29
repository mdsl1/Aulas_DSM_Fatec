#include <stdio.h>

main()
{
	//Aplica um percentual de desconto para um valor
	float preco, desc, n_preco, t_desc;
	
	printf("Preco Atual: ");
		scanf("%f",&preco);
	printf("Percentual de Desconto: ");
		scanf("%f", &desc);
	
	//preco antigo * (desconto/100)
	//preco antigo - desconto
	t_desc = preco * (desc/100);
	n_preco = preco - t_desc;
	
	printf("Total do desconto: R$ %.2f", t_desc);
	printf("\nNovo Preco: R$ %.2f", n_preco);
}