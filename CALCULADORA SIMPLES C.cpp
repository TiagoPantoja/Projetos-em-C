// CALCULADORA EM C //
#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	// Declarando as variaveis
	float x, y;
	int op;
	
	// Digitando o primeiro número
	printf ("Digite o primeiro número \n");
	scanf ("%f", &x);
	
	// Digitando o segundo número
	printf ("Digite o segundo número \n");
	scanf ("%f", &y);
	
    //  Realizando operações 
	printf ("Digite 1 para somar e 2 para subtrair: \n");
	scanf ("%i", &op);
	
	
	// Soma entre dois números
	if (op == 1){
		
		x = x + y;
		
		printf("Resultado da soma é: %f", x);
	}
	
	// Subtração entre dois números
	else{
		x = x - y;
		
		printf ("Resultado da subtração é: %f", y);
	}
	
	return 0;
	
	}
