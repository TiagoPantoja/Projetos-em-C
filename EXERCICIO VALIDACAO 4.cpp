#include <stdio.h>
#include <locale.h>

int main (void){

    setlocale (LC_ALL, "Portuguese");
    
    #define DESC 0.05;
    
    float valor, total;
    
    // Definindo o valor do produto
    printf ("Digite o valor do produto \n");
    scanf ("%f", &valor);
    
    // Realizando o c�lculo
    total = valor * DESC;
    
    // Informando o resultado
    printf ("O valor do desconto � %.2f", total);
    
}
