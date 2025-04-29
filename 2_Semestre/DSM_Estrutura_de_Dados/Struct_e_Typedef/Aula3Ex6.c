include <stdio.h>
#include <stdlib.h>

struct dados{
	int info;
	// Declara o ponteiro com a posi��o da pr�xima estrutura de dados,
	struct dados *prox;
};

// N�
typedef struct dados NO;

void Ins_Inicio(NO **inicio, int val){
	NO *novo;
	
	novo = (NO *)calloc(1,sizeof(NO));
	
	// Passa o valor digitado para o n�
	novo->info = val;
	novo->prox = *inicio;
	// Define como inicio a posi��o o novo n�
	*inicio = novo;
}

void Ins_Fim(NO **inicio, int val){
	
	NO *novo, *p;
	
	novo = (NO *)calloc(1,sizeof(NO));
	
	novo->info = val;
	novo->prox = NULL;
	
	if(*inicio == NULL){
		*inicio = novo;
	}
	else{
		p = *inicio;
		while(p->prox != NULL){
			p = p->prox;
		}
		p->prox = novo;
	}
}

void Imprime(NO *inicio){
	
	NO *p;
	
	p = inicio;
	
	while(p != NULL){
		printf(" %d --> ", p->info);
		p = p->prox;
	}
	printf("NULL\n");
}

void Rem_Inicio(NO **inicio){
	NO *p;
	
	p = *inicio;
	if((*inicio)->prox == NULL){
		*inicio = NULL;
	}
	else{
		*inicio = p->prox;
	}
	// O contr�rio de calloc, ele libera a mem�ria (remove da mem�ria)
	free(p);
}

void Rem_Fim(NO **inicio){
	NO *p, *q;
	
	p= *inicio;
	
	if((*inicio)->prox == NULL){
		*inicio == NULL;
	}
	else{
		while(p->prox != NULL){
			q = p;
			p = p->prox;
		}
		q->prox	= NULL;
	}
	free(p);
}

void Rem_Meio(NO *inicio, NO *r){
	NO *p;
	
	p = inicio;
	
	while( p->prox != r ){
		p = p->prox;
	}
	
	p->prox = r->prox;
	
	free(r);
}

void Ins_Depois(NO *r, int val){
	NO *novo;
	
	novo = (NO *)calloc(1, sizeof(NO));
	novo->info = val;
	
	novo->prox = r->prox;
	r->prox = novo;
}

void Ins_Antes(NO *inicio, NO *r, int val){
	NO *novo, *q;
	
	novo = (NO *)calloc(1,sizeof(NO));
	
	novo->info = val;
	novo->prox = r;
	
	q = inicio;
	while( q->prox != r){
		q = q->prox;
	}
	
	q->prox = p;
}

NO *Consultar(NO *inicio, int val){
	NO *p;
	
	p = inicio;
	
	while((p != NULL) && (p->	info != val)){
		p = p->prox;
	}
	
	return p;
}

int main(){
	NO *inicio, *r;
	int op, val;
	
	inicio = NULL; // Criando a lista vazia
	
	do{
		system("cls"); // Limpa a tela
		printf("\n1 - Inserir no Inicio");
		printf("\n2 - Inserir no Fim");
		printf("\n3 - Imprimir a Lista");
		printf("\n4 - Remover no Inicio");
		printf("\n5 - Remover no Fim");
		printf("\n6 - Consultar");
		printf("\n7 - Buscar valor para Remover");
		printf("\n8 - Buscar valor para Inserir Antes");
		printf("\n0 - Sair do Programa");
		
		printf("\n\nDigite a opcao: ");
		scanf("%d", &op);
		
		switch(op)
		{
			case 1:
				printf("\nValor a inserir:" );
				scanf("%d", &val);
				Ins_Inicio(&inicio, val);
				break;
				
			case 2: 
				printf("\nValor a inserir:" );
				scanf("%d", &val);
				Ins_Fim(&inicio, val);
				break;
				
			case 3:	
				if(inicio == NULL){
					printf("\n\nLista Vazia\n");
				}
				else{
					Imprime(inicio);
				}
				system("pause");
				break;
			
			case 4:	
				if(inicio == NULL){
					printf("\n\nLista Vazia\n");
				}
				else{
					Rem_Inicio(&inicio);
					printf("\nRemovido com sucesso\n");
				}
				system("pause");
				break;
				
			case 5:	
				if(inicio == NULL){
					printf("\n\nLista Vazia\n");
				}
				else{
					Rem_Fim(&inicio);
					printf("\nRemovido com sucesso\n");
				}
				system("pause");
				break;
				
			case 6:
				printf("\nValor procurado: ");
					scanf("%d", &val);
				r = Consultar(inicio, val);
				
				printf("Valor encontrado");
				system("pause");
				break;
				
			case 7:
				printf("\nValor a remover: ");
					scanf("%d", &val);
				
				r = Consultar(inicio, val);
				
				if(r == NULL){
					printf("\nValor nao encontrado\n");
				}
				else{
					if(r == inicio){
						Rem_Inicio(&inicio);
					}
					else if(r->prox == NULL){
						Rem_Fim(&inicio);
					}
					else{
						Rem_Meio(inicio, r);
					}
					printf("\nRemovido com sucesso\n");
				}
				system("pause");
				break;
				
			case 8:
				printf("\nValor a procurar: ");
					scanf("%d", &val);
				
				r = Consultar(inicio, val);
				
				if(r == NULL){
					printf("\nValor nao encontrado\n");
				}
				else{
					printf("Valor a inserir: ");
						scanf("%d", val);
						
					if(r->prox == NULL){
						Ins_Fim(&inicio, val);
					}
					else{
						Ins_Depois(r, val);
					}
					printf("\nInserido com sucesso\n");
				}
				system("pause");
				break;
				
			case 9:
				printf("\nValor a procurar: ");
					scanf("%d", &val);
				
				r = Consultar(inicio, val);
				
				if(r == NULL){
					printf("\nValor nao encontrado\n");
				}
				else{
					printf("Valor a inserir: ");
						scanf("%d", val);
						
					if(r == inicio){
						Ins_Inicio(&inicio, val);
					}
					else{
						Ins_Antes(inicio, r, val);
					}
					printf("\nInserido com sucesso\n");
				}
				system("pause");
				break;
				
			case 10: // Inserir de forma ordenada
			// S� usar ifs para ver se o valor ser� inserido antes, depois ou no meio da lista
		}
	} while(op != 0);

	return 0;
}
