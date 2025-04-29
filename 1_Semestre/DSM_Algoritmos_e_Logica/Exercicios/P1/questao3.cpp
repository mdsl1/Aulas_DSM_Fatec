#include <stdio.h>

main()
{
	//Calcular a média geral dos alunos de uma classe, esta classe que tem N alunos.
	float nota, soma, med;
	int n, cont=1;
	
	printf("Total de Alunos: ");
		scanf("%d", &n);
		
	while(cont<=n)//ENQUANTO o contador for menor que o número de alunos, perguntar a nota e  adicionar a média.
	{
	printf("\n- - - - - - - - - - - - -");
	printf("\nAluno nro. %d", cont);
	printf("\nNota: ");
		scanf("%f", &nota);
		
	soma += nota;
	cont++;
	}
	med= soma/n;
	
	printf("\n--------------------------------\n");
	printf("Media da Classe: %.2f", med);
}
