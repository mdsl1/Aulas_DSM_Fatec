#include <stdio.h>

main()
{
	//Se os 3 forem iguais, Empate. Se A = B, C ganhou. Se A = C, B ganhou. Se C = B, A ganhou
	int a, b, c, va=0, vb=0, vc=0, win=0;
	
	while(win==0)
	{
		//Se o numero digitado for errado, rodar até escrever um certo
		do
		{
			printf("\nJogador A: ");
				scanf("%d", &a);
			if(a>2)
			{
				printf("\nJoga direito, cara!!");
			}
		}while(a>2);
		//Se o numero digitado for errado, rodar até escrever um certo
		do
		{
			printf("\nJogador B: ");
				scanf("%d", &b);
			if(b>2)
			{
				printf("\nJoga direito, cara!!");
			}
		}while(b>2);
		//Se o numero digitado for errado, rodar até escrever um certo
		do
		{
			printf("\nJogador C: ");
				scanf("%d", &c);
			if(c>2)
			{
				printf("\nJoga direito, cara!!");
			}
		}while(c>2);
		
		//Se todos os valores estiverem corretos, calcula o vencedor ou o empate
		if(a==b && a==c)
		{
			printf("\nDeu empate!\n");
		}
		else if(a==c)
		{
			printf("\nJogador B ganhou!\n");
			vb++;
		}
		else if(a==b)
		{
			printf("\nJogador C ganhou!\n");
			vc++;
		}
		else
		{
			printf("\nJogador A ganhou!\n");
			va++;
		}
		//Se algum dos 3 jogadores totalizar 3 pontos, adicionar valor a variavel win e encerrar o jogo. Caso contrário, exibir o placar parcial
		if(va==3 || vb==3 || vc==3)
		{
			win++;
		}
		else
		{
		printf("\nPlacar atual:\nJogador A: %d, Jogador B: %d, Jogador C: %d\n", va, vb, vc);
		printf("--------------------------------\n");
		}
	}	
	printf("\n--------------------------------\n");
	//Calcula o vencedor e ranquea do maior pro menor
	//SE A FOR O MAIOR
	if(va>vb && va>vc)//A é o maior
		if(vb>vc)//B é o segundo maior
		{
			printf("\nRANKING FINAL:\nPrimeiro: Jogador A - Com %d Pontos;\nSegundo: Jogador B - Com %d Pontos;\nTerceiro: Jogador C - Com %d Pontos;", va, vb, vc);
		}
		else //A é o maior, e C é o segundo maior
		{
			printf("\nRANKING FINAL:\nPrimeiro: Jogador A - Com %d Pontos;\nSegundo: Jogador C - Com %d Pontos;\nTerceiro: Jogador B - Com %d Pontos;", va, vc, vb);
		}
	//SE B FOR O MAIOR
	if(vb>va && vb>vc)//B é o maior
		if(va<vc)//C é o segundo maior
		{
			printf("\nRANKING FINAL:\nPrimeiro: Jogador B - Com %d Pontos;\nSegundo: Jogador C - Com %d Pontos;\nTerceiro: Jogador A - Com %d Pontos;", vb, vc, va);
		}
		else //B é o maior, e A é o segundo maior
		{
			printf("\nRANKING FINAL:\nPrimeiro: Jogador B - Com %d Pontos;\nSegundo: Jogador A - Com %d Pontos;\nTerceiro: Jogador C - Com %d Pontos;",vb, va, vc);
		}
	//SE C FOR O MAIOR
	if(vc>va && vc>vb)//C é o maior
		if(vb>va)//B é o segundo maior
		{
			printf("\nRANKING FINAL:\nPrimeiro: Jogador C - Com %d Pontos;\nSegundo: Jogador B - Com %d Pontos;\nTerceiro: Jogador A - Com %d Pontos;", vc, vb, va);
		}
		else //C é o maior, e A é o segundo maior
		{
			printf("\nRANKING FINAL:\nPrimeiro: Jogador C - Com %d Pontos;\nSegundo: Jogador A - Com %d Pontos;\nTerceiro: Jogador B - Com %d Pontos;", vc, va, vb);
		}
}
