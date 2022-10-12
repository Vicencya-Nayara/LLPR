#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float base , altura , area;
	
	printf("Programa que receba base e altura de um triangulo e dê sua area: \n\n");
	
	printf ("Informar valor: ");
	scanf ("%f" , &base);
	
    printf ("Informar valor: ");
	scanf ("%f" , &altura);
	
	area = (base * altura) / 2;
	
	printf ("A area do triangulo é: %.2f\n" , area);
	
	return 0;
}
