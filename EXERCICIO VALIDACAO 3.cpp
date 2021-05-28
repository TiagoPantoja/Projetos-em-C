#include <stdio.h>
#include <locale.h>

int main (void){

    setlocale (LC_ALL, "Portuguese");
    
    // Declarando as variáveis
    float val_real, val_dolar, cot;
    
    // Digitando a quantia em dólares
    printf ("Digite o valor em dólares \n");
    scanf ("%f", &val_dolar);
    
    // Digitando a cotação do dolar
    printf ("Digite a cotação do dolar/real \n");
    scanf ("%f", &cot);
    
    // Realizando o cálculo
    val_real = val_dolar * cot;
    
    // Exibindo o resultado
    printf ("O valor em real é %2.f", val_real);
    
	}
    
    
