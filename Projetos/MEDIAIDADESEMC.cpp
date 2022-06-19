#include<stdio.h>

int main(){
	char nome1[50], nome2[50];
	int idade1, idade2;
	double media;
	
	
	printf("Digite o nome da primeira pessoa : ");
	fgets(nome1, 50, stdin);
	printf("Digite a idade da primeira pessoa: ");
	scanf("%d", &idade1);
	fseek(stdin, 0, SEEK_END);
	printf("Digite o nome da segunda pessoa : ");
	fgets(nome2, 50, stdin);
	printf("Digite a idade da segunda pessoa: ");
	scanf("%d", &idade2);
	media = (idade1 + idade2)/2;
	
	printf("A idade media entre %s e %s de %.1lf", nome1, nome2, media);
}
