#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define tamanho 80

int main() {
	setlocale(LC_ALL, "portuguese");
	char str[tamanho];
	int contador = 0, i;
	
	printf("Digite uma palavra/frase qualquer:\n");
	fgets(str, tamanho, stdin);
	
	for(i=0; i<tamanho; i++){
		if(str[i] == '\n')
			break;
		else
			contador++;
	}
	
	printf("Tamanho da string: %d", contador);
	return 0;
}
