#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	// Declarando as vari�veis
	float comptijolo, largtijolo, compparede, largparede, quantidade;
	
	// Declarando o comprimento do tijolo
	printf ("Digite o valor do comprimento do tijolo \n");
	scanf ("%f", &comptijolo);
	
	// Declarando a largura do tijolo
	printf ("Digite o valor da largura do tijolo \n");
	scanf ("%f", &largtijolo);
	
	// Declarando o comprimento da parede
	printf ("Digite o valor do comprimento da parede \n");
	scanf ("%f", &compparede);
	
	// Declarando a largura da parede
	printf ("Digite o valor da largura da parede \n");
	scanf ("%f", &largparede);
	
	// Realizando opera��o
	quantidade = (compparede*largparede)/(comptijolo*largtijolo);
	
	// Exibindo o resultado da opera��o
	printf ("A quantidade de tijolos � %f \n", quantidade);
	
}
	
