#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL , "Portuguese_Brazil");

    int valor, resultado;
    
    printf ("Quantidade de dinheiro que o cliente colocou na maquina, e imprima quanto irá perder de troco\n\n");
    
    printf ("Informar valor: ");
    scanf ("%d" , &valor);
    
    resultado = valor % 7;
    
    printf("Resultado que o cliente irá perder de troco: %d\n", resultado);
    
    return 0;
}
