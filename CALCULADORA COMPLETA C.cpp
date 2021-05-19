// Calculadora completa em C //
#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	// Declarando as variáveis //
	float x=0, y=0, resultado=0;
	int op;
	
	// Digitando comandos //
	do {
		 printf ("Digite 1 para SOMA \n 2 para SUBTRAÇÃO \n 3 para MULTIPLICAÇÃO \n 4 para DIVISÃO");
		 scanf ("%i", &op);
		 printf ("Digite o primeiro número \n");
		 scanf ("%f", &x);
		 printf ("Digite o segundo número \n");
		 scanf ("%f", &y);
	}
		 
	// Efetuando escolhas de operação //
		 switch (op);
		 {
		
		 case 1: printf ("resultado = x+y \n"); break;
		 case 2: printf ("resultado = x-y \n"); break;
		 case 3: printf ("resultado = x*y \n"); break; 
		 case 4: printf ("resultado = x/y \n"); break;
		 default: printf ("Digite um comando válido \n"); break;
		}
		 	 
		printf ("O resultado é %0.2f", resultado);
		printf ("Digite 1 para continuar \n");
		scanf ("%i", &op);
		
	    while (op == 1);
		}
