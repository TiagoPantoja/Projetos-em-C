#include <stdio.h>
#include <locale.h>
#include <string.h>

main (void){

   setlocale (LC_ALL, "Portuguese");
   
   // Declarando constante
   #define PI 3,14
   
   // Declarando as vari�veis
   char Nome [21];
   int Velocidade;
   float total;
   
   // Solicitando o Nome
   printf ("Digite o seu Nome \n");
   scanf ("%s", &Nome);
   
   // Solicitando a Velocidade
   printf ("Digite a Velocidade \n");
   scanf ("%i", &Velocidade);
   
   // Realizando a opera��o com PI
   total = Velocidade * PI;
   
   // Informando o valor da opera��o
   printf ("O valor � %f \n", total);
   
}

