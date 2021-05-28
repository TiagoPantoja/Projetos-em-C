#include <stdio.h>
#include <locale.h>

int main (void){

    setlocale (LC_ALL, "Portuguese");
    
    // Declarando as variáveis
    float f, c;
    
    // Inserindo a temperatura em farenheit
    printf ("Digite a temperatura em farenheit \n");
    scanf ("%i", &f);
    
    // Calculando a temperatura em celsius
    c = 5 / 9*(f - 32);
    
    // Exibindo a temperatura em celsius
    printf ("A temperatura em celsius é %.2f", c);
    
	}
