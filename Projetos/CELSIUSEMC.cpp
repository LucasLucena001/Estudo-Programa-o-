#include<stdio.h>

int main(){
	char resp;
	double c, f;
	
	do {
 printf("Digite a temperatura em Celsius: ");
 scanf("%lf", &c);
  fflush(stdin);
 f = 9 * c / 5 + 32;
 printf("Equivalente em Fahrenheit: %.1lf\n", f);
 printf("Deseja repetir (s/n)? ");
 fflush(stdin);
 scanf("%c", &resp);
 } while (resp == 's');
 return 0;
}

