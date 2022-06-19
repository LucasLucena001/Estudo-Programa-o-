#include <stdio.h>
#include<stdlib.h>

int main(){
    int RG, i;
    char serie[40];
    
    printf("QUAL SEU RG? \n");
    scanf("%i", &RG);
    fflush(stdin);
    
    for (i = 1; i < 4; i++){
    	printf("Qual nome das suas series favoritas?\n");
    fgets(serie, 40, stdin);
    fflush(stdin);
	
    printf("Seu RG: %i \n", RG);
    printf(" %i SERIE FAVORITA: %s \n", i, serie);
    
    system("pause");
    system("cls");
}
	
}
