#include <stdio.h>

int main(){
    int maior, menor, i, numero;
    
    printf("Escreva 1 numeros Inteiros de 0 a 10 : \n");
    scanf("%i", &numero);
      maior = numero;
      menor = numero;
      for (i = 1; i < 3; i++){
      	printf("Escreva 1 numeros Inteiros de 0 a 10 : \n");
      	scanf("%i", &numero);
      	if (numero > maior){
      		maior = numero;
		  }
		  if (numero < menor){
		  	menor = numero;
		  }
		  
		  }
		  if (maior == menor){
		  	printf("NUMEROS IGUAIS : %i %i\n", maior, menor);
		  }
	  
      printf(" O maior numero: %i\n", maior);
      printf("O menor numero: %i\n", menor);
}
