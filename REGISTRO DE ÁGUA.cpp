// Registro de Água //

#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	// Declarando as variáveis
    int comando, mlsBebidos, mlsConsumidos, NumVezesInformadas, LitrosConsumidos;
	
	do {
		
	printf ("Digite um comando: 1- Adicionar registro, 2- Encerrar");
    scanf ("%i", &comando);
    
    if (comando == 1){
    	printf ("Informe quantos ml de água foram bebidos");
    	scanf ("%i", &mlsBebidos);
	}
    
    NumVezesInformadas ++;
	LitrosConsumidos = mlsConsumidos + mlsBebidos;
	
    if (comando == 2){
    	printf ("Você bebeu água x vezes e consumiu um total de y mls hoje");
    	scanf ("%i", &NumVezesInformadas, &mlsConsumidos);
	}
	
	} while (comando !=2);
	
	}
	
    
