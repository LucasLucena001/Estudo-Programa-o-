#include<stdio.h>

int main(){
	int N, i;
	printf("Quantos numeros voce vai digitar: \n");
	scanf("%i", &N);
	
    double vet[N];
    double soma, media;
    int cont;
    soma = 0;
    for (i = 0; i < N; i++){
    	printf("Digite um numero: ");
    	scanf("%lf", &vet[i]);
    	soma = soma + vet[i];
	}
	printf("VALORES: \n");
	for (i = 0; i < N; i++){
		printf("%.1lf\n", vet[i]);
		   
     }
     printf("\nSOMA DOS VETORES : %.1lf\n", soma);
     media =  soma / N;
     printf("\nMEDIA DOS VETORES: %.1lf", media);
}
