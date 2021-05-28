#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	float hora_entrada, minuto_entrada, hora_saida, minuto_saida, preco_hora;
	int preco_final;
	
	printf ("Digite o horário da entrada em horas e depois minutos \n");
	scanf ("%f", &hora_entrada, &minuto_entrada);
	
	printf ("Digite o horário da saída em horas e depois minutos \n");
	scanf ("%f", &hora_saida, &minuto_saida);
	
	printf ("Preço da hora é \n");
	scanf ("%f", &preco_hora);
	
	preco_final = (hora_saida - hora_entrada)*(preco_hora)+(minuto_saida-minuto_entrada)*(preco_hora/60);
	
	printf ("O preço final é de %i \n", preco_final);
	
	}
