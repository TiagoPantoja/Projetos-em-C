#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	// Declarando as vari�veis
	float PRECO, PRECOF, DESC;
	
	// Digite o pre�o do produto
	printf ("Qual � o pre�o do produto \n");
	scanf ("%f", &PRECO);
	
	// Digite o pre�o do produto com desconto
	printf ("Qual � o pre�o final do produto \n");
	scanf ("%f", &PRECOF);
	
	// Realizando opera��o
	DESC = (PRECO-PRECOF)/PRECO*100;
	
	// Exibindo resultado da opera��o
	printf ("O valor do desconto � de %f \n", DESC);
	
}
