// Calculadora completa em C //
#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	// Declarando as vari�veis //
	float x=0, y=0, resultado=0;
	int op;
	
	// Digitando comandos //
	do {
		 printf ("Digite 1 para SOMA \n 2 para SUBTRA��O \n 3 para MULTIPLICA��O \n 4 para DIVIS�O");
		 scanf ("%i", &op);
		 printf ("Digite o primeiro n�mero \n");
		 scanf ("%f", &x);
		 printf ("Digite o segundo n�mero \n");
		 scanf ("%f", &y);
	}
		 
	// Efetuando escolhas de opera��o //
		 switch (op);
		 {
		
		 case 1: printf ("resultado = x+y \n"); break;
		 case 2: printf ("resultado = x-y \n"); break;
		 case 3: printf ("resultado = x*y \n"); break; 
		 case 4: printf ("resultado = x/y \n"); break;
		 default: printf ("Digite um comando v�lido \n"); break;
		}
		 	 
		printf ("O resultado � %0.2f", resultado);
		printf ("Digite 1 para continuar \n");
		scanf ("%i", &op);
		
	    while (op == 1);
		}
