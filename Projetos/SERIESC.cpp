#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h> 

int main(){ 
char nome[50]; 
int rg; 
char endereco[50];
int numero=1; 
setlocale(LC_ALL, "Portuguese"); 

while(numero<=3){ 
printf("Informe seu nome: \n"); 
fgets(nome, 50, stdin); 
fflush(stdin); 
printf("Escreva seu RG: \n"); 
scanf("%i", &rg); 
fflush(stdin); 
printf("Informe seu endereco: \n"); 
fgets(endereco, 50, stdin); 
fflush(stdin); 

system("pause"); 
 system("cls"); 
 
printf("Nome: %s\n", nome); 
printf("RG: %i\n", rg); 
printf("Endereco: %s\n", endereco); 
 
 system("pause"); 
 system("cls"); 

 numero++; 

} 

return 0; 

} 
