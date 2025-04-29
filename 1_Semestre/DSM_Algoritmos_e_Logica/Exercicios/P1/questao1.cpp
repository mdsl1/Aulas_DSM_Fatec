#include <stdio.h>

main()
{
	//se a altura for maior que 1.85m E a idade for inferior a 20 anos, Aceito. Senão, Não Aceito.
	//Se der tempo, mostrar o motivo da reprova.
	float alt;
	int idade;
	
	printf("\nAltura do candidato: ");
		scanf("%f", &alt);
	printf("\nIdade do candidato: ");
		scanf("%d", &idade);
	
	printf("\n--------------------------------");//Marcador, pra ficar bonito
	if ( alt>1.85 && idade<20) //Se altura maior que 1.85 E idade menor que 20, aprovado. Senão, reprovado.
	{
		printf("\nCandidato aprovado!");
	}
	else if (alt<1.85 && idade>20) //Se altura e idade diferentes do requerido, reprovado por ambos
	{
		printf("\nCandidato nao aprovado... Altura e Idade diferentes do requerido.");
	}
	else if(alt<1.85) //Se altura diferente do requerido, reprovado por altura. Senão, reprovado por idade.
	{
		printf("\nCandidato nao aprovado... Altura inferior ao requerido.");
	}
	else
	{
		printf("\nCandidato nao aprovado... Idade superior ao requerido.");
	}
	
	printf("\n--------------------------------");//Marcador, pra ficar bonito
	return main();
}
