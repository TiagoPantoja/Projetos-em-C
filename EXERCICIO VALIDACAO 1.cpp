#include <stdio.h>
#include <locale.h>

int main (void){

    setlocale (LC_ALL,  "Portuguese");
    
    // Declarando as vari�veis
	int base, altura, area, perimetro;
	
	// Digite o valor da base
    printf ("Digite o valor da base \n");
    scanf ("%i", &base);
    
    // Digite o valor da altura
    printf ("Digite o valor da altura \n");
    scanf ("%i", &altura);
    
    // Realizando o c�lculo da �rea
    area = (base * altura);
    
    // Mostrando o resultado
    printf ("Valor da �rea � %i \n", area);
    
    // Realizando o c�lculo do per�metro
    perimetro = (base + altura)*2;
    
    // Mostrando o resultado
    printf ("Valor do perimetro � %i \n", perimetro);
    
}
    
