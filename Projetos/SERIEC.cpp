#include<stdio.h> 

#include<stdlib.h> 

#include<locale.h> 

int main(){ 
int i, rg; 
char serie[50]; 

printf("Informe seu RG: "); 
scanf("%i", &rg); 
fflush(stdin); 

for (i= 1; i <= 3; i++){ 

printf("Escreva sua serie favorita: \n"); 
fgets(serie, 50, stdin); 
fflush(stdin); 
printf("SERIE %i : %s", i, serie); 

system("pause"); 
 system("cls"); 

} 

} 
