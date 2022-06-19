#include <stdio.h>

int main(){ 
   int x;
   printf("DIGITE UM VALOR DE 0 A 100: ");
   scanf("%i", &x);
   
   if (x <= 30) {
   	printf("Barato, pode comprar!");
   	
   }
   else if (x <= 90){
   	printf(" Taxa alta, cuidado ao comprar!");
   }
   else {
   	printf(" Nao comprar!");
   }
   
}
   
