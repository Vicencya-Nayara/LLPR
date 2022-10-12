#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float a , b , adicao, multiplicacao, subtracao, divisao;
	
	printf("Leia dois numeros e mostre os resultados das 4 operacoes: \n\n");
	
	printf ("Primeiro numero: ");
	scanf ("%f", &a);
	
    printf ("Segundo numero: ");
	scanf ("%f", &b);
	
	multiplicacao = a * b;
	adicao = a + b;
	divisao = a / b;
	subtracao = a - b;
	
	printf ("Resultado das quatros operacoes: \n %.2f\n %.2f\n  %.2f\n %.2f\n", multiplicacao, adicao, divisao, subtracao);
	
	return 0;
}
