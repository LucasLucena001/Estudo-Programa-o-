#include<stdio.h>

int main(){
 int N,i;
 
 printf("Quantos numeros voce quer digitar: ");
 scanf("%i", &N);
 double vet[N];
 
 for (i=0; i < N; i++) {
 
 printf("Escreva um numero: ");
 fflush(stdin);
 scanf("%lf", &vet[i]);
}

printf("\n NUMEROS DIGITADOS : \n");
for (i=0; i < N; i++) {
	printf("%.1lf\n", vet[i]);
	
}
}
