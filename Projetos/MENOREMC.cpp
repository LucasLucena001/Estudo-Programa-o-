#include<stdio.h>
int main(){
	int n1, n2, n3, menor;
	printf("Digite valor 1: ");
	scanf("%i", &n1);
		printf("Digite valor 2: ");
	scanf("%i", &n2);
		printf("Digite valor 3: ");
	scanf("%i", &n3);
	if(n1 < n2 && n1 < n3){
		printf("MENOR : %i ", n1);
	}
	else if(n2 < n1 && n2 < n3){
		printf("MENOR: %i", n2);
	}
	else {
		printf("MENOR : %i", n3);
	}
	
}
