#include <stdio.h>
#include <locale.h>

int main (void){

    setlocale (LC_ALL, "Portuguese");
    
    // Declarando as variáveis
    float pag, pr, d;
    
    // Digitando o preço do produto
    printf ("Digite o preço do produto \n");
    scanf ("%f", &pr);
    
    // Digitando o valor do desconto
    printf ("Digite o valor do desconto \n");
    scanf ("%f", &d);
    
    // Realizando o cálculo do valor pago pelo produto
    pag = pr - d;
    printf ("Valor pago pelo produto é %f \n", pag);
    
	}
    
