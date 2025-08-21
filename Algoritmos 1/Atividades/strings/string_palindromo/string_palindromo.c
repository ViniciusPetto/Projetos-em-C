#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	int i, j=0, result;
	char palavra[61], palavra_inversa[61];
	
	scanf("%s", &palavra);
	
	for(i=strlen(palavra) - 1; i>=0; i--){
		palavra_inversa[j] = palavra[i];
		j++;
	}
	
	palavra_inversa[j] = '\0';
	
	
	//deixando a palavra original e inversa minúsculas
	for(i=0; i<=strlen(palavra); i++)
		palavra[i] = tolower(palavra[i]);
		
	for(i=0; i<=strlen(palavra_inversa); i++)
		palavra_inversa[i] = tolower(palavra_inversa[i]);
		
	result = strcmp(palavra, palavra_inversa);
	
	
	//verificando se a palavra é ou não um palindromo
	if(strcmp(palavra, palavra_inversa) == 0)
		printf("Esta palavra e um palindromo\n");
	else
		printf("Esta palavra nao e um palindromo\n");
	
	return 0;
}
