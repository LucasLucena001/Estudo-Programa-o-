#include <stdio.h>

int main(){
	int x, y, i, soma, troca;
	printf("Digite o valor de x: \n");
	scanf("%i", &x);
	printf("Digite o valor de y: \n");
	scanf("%i", &y);
	if (x > y){
	   troca = x;
	   x = y;
	   y = troca;
	}
	soma = 0;
	for (i = x + 1; i < y; i++) {
	   if(i % 2 != 0) {
	   	soma = soma + i;
	   }
	}
	printf("SOMA DOS IMPARES É : %i", soma);
}
