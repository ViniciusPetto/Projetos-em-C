#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	int i = 0, j = 0, k = 0;
	char frase[61], frase_inversa[61];
	
	fgets(frase, 61, stdin);
	
	/*tratamento da string, para que seja eliminado os espa�os em branco e as quebras de linha
	deixando a frase min�scula e tamb�m com o \0 ao final*/ 
    while (frase[i]) {
        if (frase[i] != ' ' && frase[i] != '\n') {
            frase[k++] = tolower(frase[i]);
        }
        i++;
    }
    frase[k] = '\0';
	
	//invertendo a frase, atribuindo � outro vetor e adicionando \0 ao final
	for(i=strlen(frase) - 1; i>=0; i--){
		frase_inversa[j] = frase[i];
		j++;
	}
	frase_inversa[j] = '\0';
	
	//verificando se a frase � ou n�o um palindromo
	if(strcmp(frase, frase_inversa) == 0)
		printf("Esta frase e um palindromo\n");
	else
		printf("Esta frase nao e um palindromo\n");
	
	return 0;
}
