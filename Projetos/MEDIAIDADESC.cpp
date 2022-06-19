#include <stdio.h>

int main(){
	
	int idade, soma, contador;
	double media;

	 printf("Digite a idade das pessoas: \n");
	 scanf("%i", &idade);
	 soma = 0;
	 contador = 0;
	while (idade >= 0){
	soma = soma + idade;
	contador = contador + 1;
	  scanf("%i", &idade);	
	 }
	 if(contador == 0){
	 	printf("IMPOSSIVEL CALCULAR");
	 }
	else {
	 media = (double) soma / contador;
	 printf("MEDIA DAS IDADES: %.1lf", media);
}
}
