#include<stdio.h>


int main(){
	double largura, comprimento, area, valormetro, preco;
	
	printf("Digite o valor da largura do terreno: ");
	scanf("%lf", &largura);
		printf("Digite o valor do comprimento do terreno: ");
	scanf("%lf", &comprimento);
	
		printf("Digite o valor do metro quadrado do terreno: ");
	scanf("%lf", &valormetro);
	
	area = largura * comprimento;
	printf("AREA DO TERRENO: %.2lf\n", area);
	preco = area * valormetro;
	printf("PRECO DO TERRENO: %.2lf", preco);
}
