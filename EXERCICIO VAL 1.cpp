#include <stdio.h>
#include <locale.h>

int main (void){

    setlocale (LC_ALL, "Portuguese");
    
    int nasc, idade, ano;
    
    printf ("Qual ano estamos? \n");
    scanf ("%d", &ano);
    
    printf ("Qual foi o ano que voc� nasceu? \n");
    scanf ("%d", &nasc);
    
    idade = ano - nasc;
    
    if(idade>16){
    printf ("Voc� j� pode votar");
	}
	
	else {
	printf ("Voc� ainda n�o pode votar");
	}
	
	}
