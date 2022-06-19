#include<stdio.h>

int main(){
	int N, i, resultado, cont;
	
	printf("Tabuada de qual numero? \n");
	scanf("%i", &N);
	
	for (i = 0; i <= 10; i++){
	resultado = N * i;
		printf("%i X %i = %i\n", N, i, resultado);
	}
}
