#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Função para organizar os números de forma crescente
int compare(const void *a, const void *b)
{
    int int_a = *(int *)a;
    int int_b = *(int *)b;
    return int_a - int_b;
}

main()
{
	int sorteio[6], jogo[6], win, cont, i, j, szsorteio, szjogo;
	
	//Sorteio
	srand(time(NULL));
	for(i=0;i<6;i++)
	{
		sorteio[i] = rand()%60+1;
		//printf("%3d\n", sorteio[i]);
	}	
		
	//Entrada dos valores do jogador
	for(i=0;i<6;i++)
	{
		printf("\nDigite um valor do seu jogo {min 1 | max: 60}: ");
			scanf("%d", &jogo[i]);
		do
		{
			//Verificação para ver se está nos parâmetros
			if(jogo[i]<1 || jogo[i]>60)
			{
				printf("Digite um numero entre 1 e 60: ");
				scanf("%d", &jogo[i]);
			}
		}while(jogo[i]<1 || jogo[i]>60);
	}
	
	//Verifica se foram sorteados valores repetidos
	for(i=0;i<6;i++)
	{
		do
		{
			cont=0;
			for(j=0;j<6;j++)
			{
				if(sorteio[i] == sorteio[j])
					if(j!=i)
					{
						cont++;
						break;
					}	
			}
			if(cont!=0)
			{
				srand(time(NULL));
				if(sorteio[i]>50)
					sorteio[i] -=rand()%10+1;
				else
					sorteio[i] += rand()%10+1;
				break;
			}	
		}while(cont!=0);
	}
	
	//Organiza os 2 arrays de forma crescente
	//Array do sorteio
	szsorteio = sizeof(sorteio) / sizeof(sorteio[0]);
	qsort(sorteio, szsorteio, sizeof(int), compare);
	//Array dos valores do jogador
	szjogo = sizeof(jogo) / sizeof(jogo[0]);
	qsort(jogo, szjogo, sizeof(int), compare);
	
	//Printa os valores sorteados e digitados na tela de forma ordenada
	printf("\n--------------------------------");
	printf("\nSeu jogo \tSorteio\n");
	for(i=0;i<6;i++)
		printf("  %3d \t\t %3d\n", jogo[i], sorteio[i]);
	
	//Conta a quantidade de acertos
	cont = 0;
	for(i=0;i<6;i++)
	{
		if(jogo[i]==sorteio[i])
			cont++;
	}
	
	//Com base no tanto acertado, define a premiação
	if(cont==4)
		printf("Parabens, voce acertou a quadra! Premio total: R$ 5,50");
	else if(cont==5)
		printf("Parabens, voce acertou a quina!! Premio total: R$ 15,50");
	else if(cont==6)
		printf("Parabens, voce ganhou na megasena!!! Premio total: R$ 50,50");
	else
		printf("Nao foi dessa vez... nos de mais dinheiro semana que vem! Total de acertos: %2d", cont);		
}
