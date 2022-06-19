#include<stdio.h>

int main(){
	int n1, n2, operacao, soma, subt, multip, divisao;

	
	
	printf("Digite o primeiro valor: ");
	scanf("%i", &n1);
	printf("Digite o segundo valor: ");
	scanf("%i", &n2);


	 printf( "Qual operacao voce quer executar? 1 - Soma / 2- Subtracao / 3- Multiplicacao / 4 - Divisao \n");
	 scanf("%i", &operacao);
	 switch(operacao){
	 case 1:
	 		soma = n1 + n2;
	 	printf("SOMA - N1 + N2 = %i", soma);
		break;
	case 2:
		subt = n1 - n2;
		printf("SUBTRACAO -  N1 - N2 = %i", subt);
		break;
	
	case 3:
		multip = n1 * n2;
		printf("MULTIPLICACAO - N1 * N2 = %i", multip);
		break;
	
	case 4:
		divisao = n1 / n2;
		printf("DIVISAO - N1 / N2 = %i", divisao);
		break;
	}
	 }

	
	

