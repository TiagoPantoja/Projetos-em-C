#include <stdio.h>
#include <locale.h>

int main (void){

    setlocale (LC_ALL,  "Portuguese");
    
    // Declarando as variáveis
	int base, altura, area, perimetro;
	
	// Digite o valor da base
    printf ("Digite o valor da base \n");
    scanf ("%i", &base);
    
    // Digite o valor da altura
    printf ("Digite o valor da altura \n");
    scanf ("%i", &altura);
    
    // Realizando o cálculo da área
    area = (base * altura);
    
    // Mostrando o resultado
    printf ("Valor da área é %i \n", area);
    
    // Realizando o cálculo do perímetro
    perimetro = (base + altura)*2;
    
    // Mostrando o resultado
    printf ("Valor do perimetro é %i \n", perimetro);
    
}
    
