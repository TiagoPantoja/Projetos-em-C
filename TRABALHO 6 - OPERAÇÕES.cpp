#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL,  "Portuguese");
	
	// Declarando as vari�veis
	int a, b, c, d, resultado;
	
	// Digite o valor a
	printf ("Digite o valor a \n");
	scanf ("%i", &a);
	
	// Digite o valor b
	printf ("Digite o valor b \n");
	scanf ("%i", &b);
	
	// Digite o valor c
	printf ("Digite o valor c \n");
	scanf ("%i", &c);
	
	// Digite o valor d
	printf ("Digite o valor d \n");
	scanf ("%i", &d);
	
	// Equa��o 1
	resultado = a*(b/c)-d;
	printf ("O resultado de a*(b/c)-d � %i \n", resultado);
		
	// Equa��o 2
	resultado = a*c<d+b;
	printf ("O resultado de a*b<c+b � %i \n", resultado);
	
	// Equa��o 3
	resultado = d<b+(c/a);
	printf ("O resultado de d<b+(c/a) � %i \n", resultado);
	
}

