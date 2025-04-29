#include <stdio.h>

void dobro(int *v){
	*v *= 2;
}

main(){
	int a;
	
	printf("Digite um valor:");
		scanf("%d", &a);
		
	dobro(&a);
	
	printf("Dobro: %d", a);
}
