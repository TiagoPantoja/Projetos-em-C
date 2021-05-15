// JOGO DA VELHA EM C //

#include <stdio.h>
#include <locale.h>
#include <string.h>

void tabuleiro (char casas2 [3] [3] ){
	
   setlocale (LC_ALL, "Portuguese");
 
	printf ("\t %c | %c | %c \n", casas2 [0] [0], casas2 [0] [1], casas2 [0] [2]);
	printf ("\t-------------- \n");
	printf ("\t %c | %c | %c \n", casas2 [1] [0], casas2 [1] [1], casas2 [1] [2]);
	printf ("\t-------------- \n");
	printf ("\t %c | %c | %c \n", casas2 [2] [0], casas2 [2] [1], casas2 [2] [2]);
}

int main (){
	char casas [3] [3] = { ("1", "2", "3"),
	                       ("4", "5", "6"),
					       ("7", "8", "9");	   }
					       
    tabuleiro (casas);
    char res;
    int cont_jogadas;
    do {
    	cont_jogadas = 1;
    	do{
    	
    	} while (cont_jogadas <=9);
    	
         printf ("Jogar novamente? \n");
         scanf  ("%s, &res");
		
	}while (res=="s");
						 
}
