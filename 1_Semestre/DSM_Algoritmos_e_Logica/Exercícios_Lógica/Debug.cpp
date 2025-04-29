
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
main()
{
	//Desafio - Simular uma brincadeira de criança, onde usando as variações de blocos disponiveis (1x1, 2x1, 3x1(em L) e 4x1. Cada bloco vai ter o peso 4, e o quadrado 4x4 tem que pesar 16.
	int qtd[4]={4,3,2,1};
	int	i, win=0, ttquad, calc=0;
	int quad[10], iq;
		
		printf("\nBlocos disponiveis: Bloco 1= %d; Bloco 2= %d; Bloco 3= %d; Bloco 4= %d\n", qtd[0], qtd[1], qtd[2], qtd[3]);
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
			//Mostra os blocos disponiveis
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
			//Terceiro quadrado
			memset(quad, 0, sizeof(quad));
			iq=0;
			printf("\nQuadrado 3:\n");
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
			
			
			//Realiza o calculo para ver se está correto ou não (se for igual a 48)
			printf("\n-------------------------------------------\n");
			if(calc==48)
			{
				printf("Parabens, voce venceu!");
			}
			else
			{
				printf("\nVoce perdeu...");
			}
			
			
		
			
	printf("\n %d\n", calc);
	
	for(i=0;i<4;i++)
	printf("%d ", qtd[i]);
}
