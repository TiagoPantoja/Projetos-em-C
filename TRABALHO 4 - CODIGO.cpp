#include <stdio.h>
#include <locale.h>
#include <string.h>

main (void){

   setlocale (LC_ALL, "Portuguese");
   
   // Declarando constante
   #define PI 3,14
   
   // Declarando as variáveis
   char Nome [21];
   int Velocidade;
   float total;
   
   // Solicitando o Nome
   printf ("Digite o seu Nome \n");
   scanf ("%s", &Nome);
   
   // Solicitando a Velocidade
   printf ("Digite a Velocidade \n");
   scanf ("%i", &Velocidade);
   
   // Realizando a operação com PI
   total = Velocidade * PI;
   
   // Informando o valor da operação
   printf ("O valor é %f \n", total);
   
}

