#include <stdio.h>

int main(){ 
   char nome[50];
   int np1, np2, soma, multip, divisao, subt;
   
   printf("Digite o seu nome: ");
   scanf("%s", nome);
   printf("Digite o primeiro numero de 0 a 10: ");
   scanf("%i", &np1);
   printf("Digite o segundo numero de 0 a 10: ");
   scanf("%i", &np2);
   soma = np1 + np2;
   printf("NP1 + NP2 : %i\n", soma);
   subt = np1 - np2;
   printf("NP1 - NP2 : %i\n", subt);
   multip = np1 * np2;
   printf("NP1 * NP2 : %i\n", multip);
   divisao = np1/np2;
   printf("NP1 / NP2 : %i\n", divisao);
}
   
