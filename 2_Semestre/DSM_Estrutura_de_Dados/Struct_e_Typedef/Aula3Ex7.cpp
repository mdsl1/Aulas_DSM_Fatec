#include<stdio.h>
#include<stdlib.h>

struct dados{
	int info;
	struct dados *prox;
};

typedef struct dados NO;

/*Funções*/ 
// Função que insere um valor no começo da lista
void Ins_Inicio(NO **inicio, NO **fim, int val){
	
	NO *novo;
	
	novo = (NO *)calloc(1,sizeof(NO));
	
	novo->info = val;
	novo->prox = *inicio;
	
	if(*inicio == NULL){
		*fim = novo;
	}
	
	*inicio = novo;
}

// Função que insere um valor no final da lista
void Ins_Fim(NO **inicio, NO **fim, int val){
	
	NO *novo;
	
	novo = (NO *)calloc(1,sizeof(NO));
	
	novo->info = val;
	novo->prox = NULL;
	
	if(*inicio == NULL){
		*inicio = novo;
	}
	else{
		(*fim)->prox = novo;
	}
	*fim = novo;
}

// Função que imprime os valores da lista na tela
void Imprimir(NO *inicio){
	
	NO *p;
	
	p = inicio;
	
	while(p != NULL){
		printf("%d --> ", p->info);
		p = p->prox;
	}
	printf("NULL\n");
}

void Rem_Inicio(NO **inicio, NO **fim){
	
	NO *p;
	
	p = *inicio;
	
	// Se o inicio é igual ao fim, ou seja, só tem um nó na lista
	if(*inicio == *fim){
		// Deixa tanto o inicio como o final nulos
		*inicio = NULL;
		*fim = NULL;
	}
	// Se existir mais de um nó na lista
	else{
		// Define o inicio como o próximo valor na lista
		*inicio = p->prox;
	}
	// Libera a memória
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

void Rem_Fim(NO **inicio, NO **fim){
	
	NO *p, *q;
	
	p = *fim;
	
	
	// Se o inicio é igual ao fim, ou seja, só tem um nó na lista
	if(*inicio == *fim){
		// Deixa tanto o inicio como o final nulos
		*inicio = NULL;
		*fim = NULL;
	}
	// Se existir mais de um nó na lista
	else{
		q = *inicio;
		while(q->prox != *fim){
			q = q->prox;
		}
		*fim = q;
		q->prox = NULL;
	}
	// Libera a memória
	free(p);
}

NO * Consultar(NO *inicio, int val){
	NO *p;
	p = inicio;
	
	while((p != NULL) && (p->info !=val)){
		p = p->prox;
	}
	
	return p;
}

void Trans_Inicio(NO **inicio, NO **fim, NO *r, int val){
	NO *p;
	
	p = *inicio;
	
	while(p->prox != r){
		p = p->prox;
	}
	
	p->prox = r->prox;
	r->prox = *inicio;
	*inicio = r;
	
	if(p->prox == NULL){
		*fim = p;
	}
}

void Trans_Fim(NO **inicio, NO **fim, NO *r, int val){
	NO *p;
	
	p = *inicio;
	
	while(p->prox != r){
		p = p->prox;
	}
	
}

main(){
	NO *inicio, *fim, *r;
	int op, val;
	
	//Cria a lista fazia
	inicio = NULL;
	fim = NULL;
	
	do{
		system("cls");
		printf("\n1 - Inserir no Inicio");
		printf("\n2 - Inserir no Fim");
		printf("\n3 - Imprimir a Lista");
		printf("\n4 - Remover no Inicio");
		printf("\n5 - Remover no Meio");
		printf("\n6 - Remover no Fim");
		printf("\n7 - Procurar Valor");
		printf("\n8 - Transferir Valor para Inicio");
		printf("\n9 - Transferir Valor para Fim");
		
		printf("\n10 - Remover Valores Duplicados");
		
		printf("\n0 - Sair do programa");
		
		printf("\n\nDigite a opcao: ");
			scanf("%d", &op);
		
		switch(op){
			
			case 1:
				printf("Valor a Inserir: ");
					scanf("%d", &val);
				Ins_Inicio(&inicio, &fim, val);
				break;
			
			case 2:
				printf("Valor a Inserir: ");
					scanf("%d", &val);
				Ins_Fim(&inicio, &fim, val);
				break;
			
			case 3:
				if(inicio == NULL){
					printf("\nLista vazia...");
				}
				else{
					Imprimir(inicio);
				}
				system("pause");
				break;
			
			case 4:
				if(inicio == NULL){
					printf("\nLista vazia...");
				}
				else{
					Rem_Inicio(&inicio, &fim);
					printf("\nValor removido com sucesso\n\n");
				}
				system("pause");
				break;
			
			case 5:
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
			
			case 6:
				if(inicio == NULL){
					printf("\nLista vazia...");
				}
				else{
					Rem_Fim(&inicio, &fim);
					printf("\nValor removido com sucesso\n\n");
				}
				system("pause");
				break;
				
			case 7:
				printf("\nValor a procurar: ");
					scanf("%d", &val);
				r = Consultar(inicio, val);
				
				if(r == NULL){
					printf("\nValor nao encontrado...\n");
				}
				else{
					printf("\nValor encontrado: %d\n", r->info);
				}
				system("pause");
				break;
			
			case 8:
				printf("\nValor a transferir: ");
					scanf("%d", &val);
				r = Consultar(inicio, val);
				
				if(r == NULL){
					printf("\nValor nao encontrado...\n");
				}
				else{
					if(r == inicio){
						printf("\nValor ja eh o primeiro\n");
					}
					else{
						Trans_Inicio(&inicio, &fim, r, val);
						printf("\nValor transferido com sucesso!\n");
					}
				}
				system("pause");
				break;
				
			case 9:
				printf("\nValor a transferir: ");
					scanf("%d", &val);
				r = Consultar(inicio, val);
				
				if(r == NULL){
					printf("\nValor nao encontrado...\n");
				}
				else{
					if(r == fim){
						printf("\nValor ja eh o ultimo\n");
					}
					else{
						Trans_Fim(&inicio, &fim, r, val);
						printf("\nValor transferido com sucesso!\n");
					}
				}
				system("pause");
				break;
				
				case 10:
					printf("\nValor a transferir: ");
					scanf("%d", &val);
				r = Consultar(inicio, val);
				
				if(r == NULL){
					printf("\nValor nao encontrado...\n");
				}
				else{
					if(r == fim){
						printf("\nValor ja eh o ultimo\n");
					}
					else{
						
					}
		}
				
	}while(op != 0);
	
}
