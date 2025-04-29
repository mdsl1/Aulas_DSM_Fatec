#include <stdio.h>
#include <stdlib.h>

struct dados{
	int info;
	struct dados *prox;
};

// Nó
typedef struct dados NO;

main(){
	NO *p, *q, *r;
	
	p = (NO *)calloc(1,sizeof(NO));
	q = (NO *)calloc(1,sizeof(NO));
	r = (NO *)calloc(1,sizeof(NO));
	
	p->info = 10;
	q->info = 5;
	r->info = 15;
	
	q->prox = p;
	p->prox = r;
	r->prox = NULL;
	
	p = q;
	
	while( p != NULL ) {
		printf("%3d --->", p->info);
		p = p->prox;
	}
	printf("NULL''");
}
