#include <stdio.h>
#include <locale.h>

int main (void){

	setlocale (LC_ALL, "Portuguese");

	// Declarando as variáveis
	int aa, an, idade;

	// Digitando o ano de nascimento
	printf("Digite o ano que você nasceu \n");
	scanf("%i", &an);

	// Digitando o ano atual
	printf("Digite o ano atual \n");
	scanf("%i", &aa);

	// Realizando operação
	idade = aa - an;

	// Exibindo o resultado
	printf("Você possui %i anos \n", idade);

	}



