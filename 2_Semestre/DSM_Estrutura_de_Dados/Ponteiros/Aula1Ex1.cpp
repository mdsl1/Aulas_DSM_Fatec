#include <stdio.h>

main(){
	
	int a = 5;
	// Variavel ponteiro
	int *p;
	
	printf("\nValor de A: %d", a);
	// armazena na variavel p a posicao da variavel a
	p = &a;
	
	// Printa a posi��o da variavel a
	// o & serve pra pegar a posi��o da variavel
	printf("\nEndereco de A: %x", p);
	printf("\nEndereco de A: %x", &a);
	
	// o * serve pra alterar o valor da posi��o do ponteiro
	*p = 10;
	
	printf("\nNovo valor de A: %d", *p);
}
