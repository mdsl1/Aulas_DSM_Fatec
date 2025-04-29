#include <stdio.h>
#include <class.h>
#include <string.h>

main(){
	int a, b, v;
	char funcao[3], textF[5];
	
	printf("Valor A:");
		scanf("%d", &a);
	printf("Valor B:");
		scanf("%d", &b);
	
	printf("\nFuncao a ser realizada: {min or max}:");
		scanf("%s", &funcao);
	
	printf("\n%s\n", funcao);
	
	if(strcmp(funcao,"min")){
		v = min(a,b);
		textF = "Menor";
	}
	else{
		v = max(a,b);
		textF = "Maior";
	}
	
	if(v == 0){
		printf("\nOs 2 valores sao iguais!");
	}
	else{
		printf("\n%s valor: %d", textF, v);
	}
	
}
