#include <stdio.h>
#include <locale.h>

int main (void){

    setlocale (LC_ALL,  "Portuguese");
    
    // Declarando as vari�veis
    float nota1, nota2, nota3, media;
    
    // Digite a primeira nota
    printf ("Digite a primeira nota \n");
    scanf ("%f", &nota1);
    
    // Digite a segunda nota
    printf ("Digite a segunda nota \n");
    scanf ("%f", &nota2);
    
    // Digite a terceira nota
    printf ("Digite a terceira nota \n");
    scanf ("%f", &nota3);
    
    // Tirar a m�dia entre as notas
    media = (nota1 + nota2 + nota3) / 3;
    
    // Mostrar resultado da m�dia
    printf ("A m�dia � igual a %.2f \n", media);
    
}
