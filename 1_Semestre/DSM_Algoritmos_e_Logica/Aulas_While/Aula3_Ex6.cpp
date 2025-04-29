#include<stdio.h>

main()
{
	float n1, n2, med, soma=0, mg;
	int cont=1, ap=0, rep=0, n;
	
	printf("Total de Alunos: ");
		scanf("%d", &n);
	
	while(cont<=n)
	{
	printf("\n------------------------------------------------");
	printf("\nAluno nro. %d", cont);
	printf("\nNota 1: ");
		scanf("%f", &n1);
	printf("\nNota 2: ");
		scanf("%f", &n2);
		
	med = (n1+n2)/2;
	soma += med;
	
		if(med >=6)
		{
			printf("\nAprovado com média: %.2f", med);
			ap++;
		}
		else
		{
			printf("\nReprovado com média: %.2f", med);
			rep++;
		}
	cont++;
	}
	mg = soma/n;
	
	printf("\nMedia geral: %.2f \t", mg);
	printf("Total Aprovados: %d\t", ap);
	printf("Total Reprovados: %d", rep);
}
