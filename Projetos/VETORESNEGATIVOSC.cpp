#include <stdio.h>


 int main(){
 	int n, i;
 	
 	printf("Quantos numeros voce vai digitar : \n");
 	scanf("%i", &n);
 	int x[n];
 	for(i = 0; i < n; i++){
 		printf("Digite o numero: \n");
 		scanf("%i", &x[i]);
	 }
	 printf("\nNUMEROS NEGATIVOS:\n ");
	 for(i = 0; i < n; i++){
	 	if (x[i] < 0){
	 		printf("%i\n", x[i]);
		 }
	}
	 	
 }
