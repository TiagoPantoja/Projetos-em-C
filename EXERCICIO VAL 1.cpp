#include <stdio.h>
#include <locale.h>

int main (void){

    setlocale (LC_ALL, "Portuguese");
    
    int nasc, idade, ano;
    
    printf ("Qual ano estamos? \n");
    scanf ("%d", &ano);
    
    printf ("Qual foi o ano que você nasceu? \n");
    scanf ("%d", &nasc);
    
    idade = ano - nasc;
    
    if(idade>16){
    printf ("Você já pode votar");
	}
	
	else {
	printf ("Você ainda não pode votar");
	}
	
	}
