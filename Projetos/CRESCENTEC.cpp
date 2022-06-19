#include<stdio.h>

int main(){
	 
	 int x, y;
	 
	 printf("Digite dois numeros inteiros: \n");
	 scanf("%i", &x);
	 scanf("%i", &y);
	 while (x != y) {
	 	if (x > y){
	 		printf("DECRESCENTE\n");
		 }
		 else {
		 	printf("CRESCENTE\n");
		 }
		 printf("Digite outros dois numeros: \n");
		 scanf("%i", &x);
	     scanf("%i", &y);
	 }
	 
}
