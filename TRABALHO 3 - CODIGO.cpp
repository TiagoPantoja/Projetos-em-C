#include <stdio.h>
#include <locale.h>
#include <string.h>

main (void){

   setlocale (LC_ALL, "Portuguese");
   
   // Declarando as variáveis
   char nome [20];
   int idade;
   float altura;
   
   // Solicitando o nome da pessoa
   printf ("Escreva o nome \n");
   scanf ("%s", &nome);
   
   // Solicitando a idade da pessoa
   printf ("Escreva a idade \n");
   scanf ("%i", &idade);
   
   // Solicitando a altura da pessoa
   printf ("Escreva a altura \n");
   scanf ("%f", &altura);
   
   // Informando os valores
   printf ("Seu nome é %s, sua idade é %i e sua altura é %.2f");
   

   
   
   
}
