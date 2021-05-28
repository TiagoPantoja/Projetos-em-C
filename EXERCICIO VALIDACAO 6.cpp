#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	// Declarando as variáveis
	float PRECO, PRECOF, DESC;
	
	// Digite o preço do produto
	printf ("Qual é o preço do produto \n");
	scanf ("%f", &PRECO);
	
	// Digite o preço do produto com desconto
	printf ("Qual é o preço final do produto \n");
	scanf ("%f", &PRECOF);
	
	// Realizando operação
	DESC = (PRECO-PRECOF)/PRECO*100;
	
	// Exibindo resultado da operação
	printf ("O valor do desconto é de %f \n", DESC);
	
}
