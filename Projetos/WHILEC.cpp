#include <stdio.h>

int main(){ 
   int i, n, x, soma;
   soma = 0;
   printf("DIgite quantos numeros serao digitados: \n");
   scanf("%d", &n);
    for ( i = 1; i <= n; i++) {
    	
    printf("DIGITE UM NUMERO INTEIRO:\n");
    scanf("%d", &x);
    soma = soma + x;
	}
	

    printf("SOMA: %d", soma);
}
   
