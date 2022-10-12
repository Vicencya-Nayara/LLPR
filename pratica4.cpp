#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float massa , altura , imc;
	
	printf ("Calcular o IMC de uma pessoa dividindo a massa pela altura\n\n");
	
	printf ("Peso: ");
	scanf ("%f", &massa);
	
    printf ("Altura: ");
	scanf ("%f", &altura);
	
	imc = massa / (altura * altura);
	
	
	printf ("Resultado do IMC: %.2f \n\n" , imc);
	
	return 0;
	
}
