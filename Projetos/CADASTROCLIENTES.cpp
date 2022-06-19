#include<stdio.h>
#include<stdlib.h> 

int main(){
int i;
 char nome [3] [50];
 int telefone[5];
 int rg[5];
 
 for( i=0; i < 5; i++){	
printf("Digite o nome do cliente: ");
fgets(nome[i], 50, stdin);
fflush(stdin);

printf("Digite o telefone do cliente: ");
scanf("%i", &telefone[i]);
fflush(stdin);

printf("Digite o RG do cliente: ");
scanf("%i", &rg[i]);
fflush(stdin);
 }
system("pause"); 
 system("cls"); 
 
 printf("\n CLIENTES CADASTRADOS: \n");
 for ( i=0; i < 5; i++){
 	printf("NOME: %s", nome[i]);
 	fflush(stdin);
 	
 	printf("TELEFONE: %i\n", telefone[i]);
 	fflush(stdin);
 	
 	printf(" RG: %i\n", rg[i]);
 	fflush(stdin);
 }
}
 
 
