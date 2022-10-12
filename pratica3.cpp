#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float a , b, c , f1 , f2 , f3 , f4;
	
	printf("Receber formulas, valores e efetuar calculos\n\n");
		
	printf ("Primeiro numero: ");
	scanf ("%f", &a);
	
    printf ("Segundo numero: ");
	scanf ("%f", &b);
	
	printf ("Terceiro numero: ");
	scanf ("%f", &c);
	
	f1 = (a*b)/c;
	f2 = a*a + b + 5*c;
	f3 = a*b*c + b + c / (3 * 5) - 1;
	f4 = (a*b*c) * (a*b*c) * (a*b*c) / 2;
	
	printf ("Resultados: %.2f %.2f %.2f %.2f", f1 , f2 , f3 , f4);
	
	return 0;
}
