#include <stdio.h>
#include <locale.h>

int main (void){

    setlocale (LC_ALL, "Portuguese");
    
    // Declarando as vari�veis
    float pag, pr, d;
    
    // Digitando o pre�o do produto
    printf ("Digite o pre�o do produto \n");
    scanf ("%f", &pr);
    
    // Digitando o valor do desconto
    printf ("Digite o valor do desconto \n");
    scanf ("%f", &d);
    
    // Realizando o c�lculo do valor pago pelo produto
    pag = pr - d;
    printf ("Valor pago pelo produto � %f \n", pag);
    
	}
    
