#include<stdio.h>
#include <math.h>
int main(){
	
	double base, altura, perimetro, area, diagonal;
	
	printf("Digite o valor da base do retangulo: ");
	scanf("%lf", &base);
	printf("Digite o valor da altura do retangulo: ");
	scanf("%lf", &altura);
	
	area = base * altura;
	printf("AREA DO RETANGULO : %.2lf\n", area);
	perimetro = (2 * base) + (2 * altura);
	printf("PERIMETRO DO RETANGULO: %.2lf\n", perimetro);
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));
    printf("DIAGONAL DO RETANGULO: %.2lf", diagonal);
	return 0;
}
