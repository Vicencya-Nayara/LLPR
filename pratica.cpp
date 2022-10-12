#include <stdio.h>
#include <locale.h>


    int main(){
  	setlocale (LC_ALL, "Portuguese_Brazil");
	  
	int a, multiplicacao;
	
	printf("Informar um numero em minutos e transformar em segundos:\n\n "); 
	
	printf("Primeiro número: ");
	scanf("%d", &a);

    multiplicacao = a*60;
    
    printf("Resultados em segundos: %d", multiplicacao);
	
	
	return 0;
  }
