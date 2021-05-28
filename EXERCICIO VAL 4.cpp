#include <stdio.h>
#include <locale.h>

int main (void){
	
	int num_entrada, contagem = 0, int0_25 = 0, int26_50, int51_75, int76_100;
	
	while (num_entrada >= 0 && contagem < 10) {
		printf ("Digite um número de entrada \n");
		scanf ("%d", &num_entrada);
		if (num_entrada >= 0 && num_entrada <= 25) {
		int0_25++;
		} 
		else if (num_entrada >= 26 && num_entrada <= 50) {
		int26_50++;
		}
		else if (num_entrada >= 51 && num_entrada <= 75) {
		int51_75++;
		}
		else if (num_entrada >= 76 && num_entrada <= 100) {
		int76_100++;
		} else {printf ("O número de entrada não pertence a nenhum intervalo \n");}
		contagem++;
	}
	printf ("Foram informados %d, valores maiores do que 0 e menores que 25 \n", int0_25);
	printf ("Foram informados %d, valores maiores do que 26 e menores que 50 \n", int26_50);	
	printf ("Foram informados %d, valores maiores do que 51 e menores que 75 \n", int51_75);
	printf ("Foram informados %d, valores maiores do que 76 e menores que 100 \n", int76_100);
	
}
