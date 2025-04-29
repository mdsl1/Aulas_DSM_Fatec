#include <stdio.h>

int fMax(int a, int b){
	int max;
	
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}

int fMed(int a, int b){
	int med;
	
	med = (a + b)/2;
	
	return med;
}

main(){
	int n1, n2, max, med;
	
	printf("Nota 1:");
		scanf("%d", &n1);
	printf("Nota 2:");
		scanf("%d", &n2);
		
	max = fMax(n1, n2);
	med = fMed(n1, n2);
	
	printf("\nMaior nota: %d\nMedia das Notas: %d", max, med);
}
