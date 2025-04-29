#include <stdio.h>

main()
{
	//Calcula um salário com comissão
	float sal, vend, per_com, com, v_final;
	
	printf("Digite o Salario: ");
		scanf("%f", &sal);
	printf("Digite o Total de Vendas: ");
		scanf("%f", &vend);
	printf("Digite o percentual de comissao: ");
		scanf("%f", &per_com);
	
	//comissão = total de vendas * percentual de comissão/100
	com = vend*(per_com/100);
	//Valor final
	v_final = sal+com;
	
	printf("\nValor final: R$ %.2f", v_final);
	printf("\nTotal de Comissao: R$ %.2f", com);
	
}