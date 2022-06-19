#include <stdio.h>

int main(){ 
 int x, soma;
 soma = 0;
 printf("Digite um nomero inteiro : ");
 scanf("%d", &x);
 while (x != 0) {
  soma = soma + x;
  printf("Digite um nomero inteiro : ");
 scanf("%d", &x);
 }
 printf("SOMA : %d", soma);
}
