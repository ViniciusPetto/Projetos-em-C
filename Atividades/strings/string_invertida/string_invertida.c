#include <stdio.h>
#include <string.h>

int main() {
	char palavra[81], palavra_inversa[81];
	int i, j=0;

	fgets(palavra, 81, stdin);
	
	// Remove o '\n' que fgets coloca
    palavra[strcspn(palavra, "\n")] = '\0';
		
	//atribui a string digitada ao contr�rio � um vetor
	for(i=strlen(palavra) - 1; i>=0; i--){
		palavra_inversa[j] = palavra[i];
		j++;
	}
	
	//adiciona \0 (sinaliza fim da string) ao final do vetor (�ltima posi��o) com a palavra invetida
	palavra_inversa[j] = '\0';
		
	printf("%s\n", palavra_inversa);
	
	return 0;
}
