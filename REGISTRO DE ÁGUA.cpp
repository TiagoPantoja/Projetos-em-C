// Registro de �gua //

#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	// Declarando as vari�veis
    int comando, mlsBebidos, mlsConsumidos, NumVezesInformadas, LitrosConsumidos;
	
	do {
		
	printf ("Digite um comando: 1- Adicionar registro, 2- Encerrar");
    scanf ("%i", &comando);
    
    if (comando == 1){
    	printf ("Informe quantos ml de �gua foram bebidos");
    	scanf ("%i", &mlsBebidos);
	}
    
    NumVezesInformadas ++;
	LitrosConsumidos = mlsConsumidos + mlsBebidos;
	
    if (comando == 2){
    	printf ("Voc� bebeu �gua x vezes e consumiu um total de y mls hoje");
    	scanf ("%i", &NumVezesInformadas, &mlsConsumidos);
	}
	
	} while (comando !=2);
	
	}
	
    
