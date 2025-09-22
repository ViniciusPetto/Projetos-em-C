#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int vogais = 0, consoantes = 0;
	char caracter;
	FILE* arquivo;
	
	arquivo = fopen("texto.txt", "r");
	
	if(arquivo != NULL){
		while((caracter = fgetc(arquivo)) != EOF){
		tolower(caracter);
		
			if(caracter >= 'a' && caracter <= 'z'){
				if(caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u')
					vogais++;
				else
					consoantes++;	
			}
		}
	}
	else
		printf("Erro ao abrir o arquivo!");
	
	printf("O texto possui %d vogais e %d consoantes.\n", vogais, consoantes);
	
	fclose(arquivo);
	
	return 0;
}
