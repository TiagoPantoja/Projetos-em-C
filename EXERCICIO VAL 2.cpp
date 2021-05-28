#include <stdio.h>
#include <locale.h>

int main (void){

    setlocale (LC_ALL, "Portuguese");
    
    int macas;
    float valor;
    
    printf ("Digite o número de macas: \n");
    scanf ("%d", &macas);
    
    if (macas > 12){
	valor = macas * 0.25;
	}
	else {
	valor = macas * 0.30;
	}

	printf ("Valor total: %.2f reais", valor);
	
	}
