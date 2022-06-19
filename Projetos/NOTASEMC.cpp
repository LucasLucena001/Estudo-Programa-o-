#include<stdio.h>

int main(){
      double nota1, nota2, resultado;
      
    printf("VALOR DA NOTA 1: ");
      scanf("%lf", &nota1);
    printf("VALOR DA NOTA 2: ");
      scanf("%lf", &nota2);
     resultado = nota1 + nota2;
     printf("NOTA FINAL : %.1lf\n", resultado);
	 if (resultado < 60.0) {
	 	printf("REPROVADO");
	 }
}
