// CALCULADORA EM C //
#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	// Declarando as variaveis
	float x, y;
	int op;
	
	// Digitando o primeiro n�mero
	printf ("Digite o primeiro n�mero \n");
	scanf ("%f", &x);
	
	// Digitando o segundo n�mero
	printf ("Digite o segundo n�mero \n");
	scanf ("%f", &y);
	
    //  Realizando opera��es 
	printf ("Digite 1 para somar e 2 para subtrair: \n");
	scanf ("%i", &op);
	
	
	// Soma entre dois n�meros
	if (op == 1){
		
		x = x + y;
		
		printf("Resultado da soma �: %f", x);
	}
	
	// Subtra��o entre dois n�meros
	else{
		x = x - y;
		
		printf ("Resultado da subtra��o �: %f", y);
	}
	
	return 0;
	
	}
