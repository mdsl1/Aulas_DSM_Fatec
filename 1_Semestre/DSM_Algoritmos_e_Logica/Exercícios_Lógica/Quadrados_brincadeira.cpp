#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

main()
{
	//Desafio - Simular uma brincadeira de criança, onde usando as variações de blocos disponiveis (1x1, 2x1, 3x1(em L) e 4x1. Cada bloco vai ter o peso 4, e o quadrado 4x4 tem que pesar 16.
	int qtd[4]={4,3,2,1};
	int	i, win=0, ttquad, calc=0;
	int quad[10], iq;
	
	//Enunciado
	printf("Brincadeira dos Blocos: \nDevera ser montado n quadrados de 2x2 com os blocos abaixo. Para vencer basta montar a quantidade solicitada de quadrados da forma correta!\n");
	
	//Define o número de blocos 2x2 que serão montados, indo de 1 a 4 blocos
	//Tamanhos: 16, 32, 48, 64
	srand(time(NULL));
	ttquad = 16* (rand()%4+1); //Gera um número aleatório entre 1 e 4, e multiplica por 16 para ver a quantidade de blocos que será montado
	
	//Qtde de blocos a serem montados
	printf("\n-------------------------------------------\n");
	printf("Total de Quadrados a serem montados: %d\n", ttquad/16);
	
	//Blocos disponíveis para uso:
	printf("\nIDs dos blocos: 1x1 = 1; 2x1= 2; 3x1 (Bloco em em L)= 3; 4x1 (Quadrado completo)= 4 ; Para finalizar digite 0");
	printf("\n-------------------------------------------\n");
	printf("\nBlocos disponiveis: Bloco 1= %d; Bloco 2= %d; Bloco 3= %d; Bloco 4= %d\n", qtd[0], qtd[1], qtd[2], qtd[3]);
		
	//Dependendo do número de quadrados a montar, um calculo será feito
	switch (ttquad)
	{
		case 16: //Se for preciso montar 1 quadrado
			iq=0;
			printf("\nQuadrado 1:\n");
			while(iq<10)
			{
				//Pergunte o id do bloco e escaneie o valor
				do{	
					printf("\nDigite o Id do bloco{0 a 4}: "); //Pede o id do bloco para somar
						scanf("%d", &quad[iq]);
						
					if(quad[iq]>4 || quad[iq]<0) //Se não for um dos valores da lista, retorna para preencher de novo
						printf("Digite um numero entre 0 e 4.\n");
				//Enquanto o valor for diferente dos listados, repete esse ciclo		
				}while(quad[iq]>4 || quad[iq]<0);
				
				//Se o valor obtido for igual a 0, encerra o código 
				if(quad[iq]==0)
					break;
					
				//Caso continue, remova 1 item do "estoque" conforme o valor digitado
				switch(quad[iq])
				{
					case 1:
						qtd[0]--;
						break;
					case 2:
						qtd[1]--;
						break;
					case 3:
						qtd[2]--;
						break;
					case 4:
						qtd[3]--;
						break;
					default:
						break;
				}
				//Soma o valor do bloco ao calculo para ver se é um quadrado
				calc += (quad[iq]*4);
				iq++;
			}
			//Realiza o calculo para ver se está correto ou não (se for igual a 16)
			if(calc==16)
			{
				printf("Parabens, voce venceu!");
			}
			else
			{
				printf("Voce perdeu...");
			}	
			break;
			
		case 32: //Se for preciso montar 2 quadrados
			//Primeiro Quadrado
			iq=0;
			printf("\nQuadrado 1:\n");
			while(iq<10)
			{
				//Pergunte o id do bloco e escaneie o valor
				do{	
					printf("\nDigite o Id do bloco{0 a 4}: "); //Pede o id do bloco para somar
						scanf("%d", &quad[iq]);
						
					if(quad[iq]>4 || quad[iq]<0) //Se não for um dos valores da lista, retorna para preencher de novo
						printf("Digite um numero entre 0 e 4.\n");
				//Enquanto o valor for diferente dos listados, repete esse ciclo		
				}while(quad[iq]>4 || quad[iq]<0);
				
				//Se o valor obtido for igual a 0, encerra o código 
				if(quad[iq]==0)
					break;
				//Caso continue, remova 1 item do "estoque" conforme o valor digitado
				switch(quad[iq])
				{
					case 1:
						qtd[0]--;
						break;
					case 2:
						qtd[1]--;
						break;
					case 3:
						qtd[2]--;
						break;
					case 4:
						qtd[3]--;
						break;
					default:
						break;
				}
				//Soma o valor do bloco ao calculo para ver se é um quadrado
				calc += (quad[iq]*4);
				iq++;
			}
			printf("\n-------------------------------------------\n");
			printf("\nBlocos disponiveis: Bloco 1= %d; Bloco 2= %d; Bloco 3= %d; Bloco 4= %d\n", qtd[0], qtd[1], qtd[2], qtd[3]);
			
			//Segundo quadrado
			memset(quad, 0, sizeof(quad));
			iq=0;
			printf("\nQuadrado 2:\n");
			while(iq<10)
			{
				//Pergunte o id do bloco e escaneie o valor
				do{	
					printf("\nDigite o Id do bloco{0 a 4}: "); //Pede o id do bloco para somar
						scanf("%d", &quad[iq]);
						
					if(quad[iq]>4 || quad[iq]<0) //Se não for um dos valores da lista, retorna para preencher de novo
						printf("Digite um numero entre 0 e 4.\n");
						
					switch(quad[iq])
					{
						case 1:
							if(qtd[0]==0)
							{
								printf("Bloco esgotado, tente outro.\n");
								quad[iq]=5;
							}
								
							else
								break;
						case 2:
							if(qtd[1]==0)
							{
								printf("Bloco esgotado, tente outro.\n");
								quad[iq]=5;
							}
							else
								break;
						case 3:
							if(qtd[2]==0)
							{
								printf("Bloco esgotado, tente outro.\n");
								quad[iq]=5;
							}
							else
								break;
						case 4:
							if(qtd[3]==0)
							{
								printf("Bloco esgotado, tente outro.\n");
								quad[iq]=5;
							}
							else
								break;
						default:
							break;
					}
				//Enquanto o valor for diferente dos listados, repete esse ciclo		
				}while(quad[iq]>4 || quad[iq]<0);
				
				//Se o valor obtido for igual a 0, encerra o código 
				if(quad[iq]==0)
					break;
				//Caso continue, remova 1 item do "estoque" conforme o valor digitado
				switch(quad[iq])
				{
					case 1:
						qtd[0]--;
						break;
					case 2:
						qtd[1]--;
						break;
					case 3:
						qtd[2]--;
						break;
					case 4:
						qtd[3]--;
						break;
					default:
						break;
				}
				//Soma o valor do bloco ao calculo para ver se é um quadrado
				calc += (quad[iq]*4);
				iq++;
			}
			//Realiza o calculo para ver se está correto ou não (se for igual a 16)
			if(calc==32)
			{
				printf("Parabens, voce venceu!");
			}
			else
			{
				printf("Voce perdeu...");
			}
			break;
	/*	case 48: //Se for preciso montar 3 blocos 4x4
		
		case 64: //Se for preciso montar 4 blocos 4x4	*/	
	}
		
}
