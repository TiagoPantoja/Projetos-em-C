#include <stdio.h>
#include <locale.h>

int main (void){

    setlocale (LC_ALL, "Portuguese");
    
    // Declarando as vari�veis
    float val_real, val_dolar, cot;
    
    // Digitando a quantia em d�lares
    printf ("Digite o valor em d�lares \n");
    scanf ("%f", &val_dolar);
    
    // Digitando a cota��o do dolar
    printf ("Digite a cota��o do dolar/real \n");
    scanf ("%f", &cot);
    
    // Realizando o c�lculo
    val_real = val_dolar * cot;
    
    // Exibindo o resultado
    printf ("O valor em real � %2.f", val_real);
    
	}
    
    
