#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, j, deslocamento, inicio_o, fim_o, linhas = 40, colunas = 80, metade = 20;


    for (i = 0; i < linhas; i++) {
    	deslocamento = abs(metade - i);
    	
    	inicio_o = deslocamento + 20;
    	fim_o = colunas - deslocamento - 20;
    	
    	
        for (j = 0; j < colunas; j++) {
        	
        	if(j >= inicio_o && j <= fim_o)
        		printf("o");
        	else
                printf("*");
                
        }
        printf("\n");
    }
	
	return 0;
}
