#include <stdio.h>

int main(){
    int RG, i;
    char serie[40];
    
    printf("QUAL SEU RG? \n");
    scanf("%i", &RG);
    
    for (i = 0; i < 3; i++){
    	printf("Qual nome das suas series favoritas?/n");
    fgets(serie, 40, stdin);
	}
    printf("Seu RG: %i \n", RG);
    printf("SERIES FAVORITAS:/n");
	for (i = 1; i < 4; i++){
  	printf(serie, 40, stdin);
	}
}
