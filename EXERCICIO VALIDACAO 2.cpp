#include <stdio.h>
#include <locale.h>

int main (void){

	setlocale (LC_ALL, "Portuguese");

	// Declarando as vari�veis
	int aa, an, idade;

	// Digitando o ano de nascimento
	printf("Digite o ano que voc� nasceu \n");
	scanf("%i", &an);

	// Digitando o ano atual
	printf("Digite o ano atual \n");
	scanf("%i", &aa);

	// Realizando opera��o
	idade = aa - an;

	// Exibindo o resultado
	printf("Voc� possui %i anos \n", idade);

	}



