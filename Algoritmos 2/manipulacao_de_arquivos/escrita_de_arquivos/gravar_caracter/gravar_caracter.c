#include <stdio.h>
#include <stdlib.h>

int main() {
	char string[50];
	int i = 0;
	FILE *arquivo = fopen ("caracter.txt", "w");
	
	if(arquivo != NULL){
		printf("Digite uma string qualquer: ");
		fgets(string, 49, stdin);
		
		while(string[i] != '\0'){
			fputc(string[i], arquivo);
			fputc('\n', arquivo);
			i++;
		}
		
		printf("Arquivo gravado com sucesso!");
	}
	else
		printf("Erro ao abrir arquivo!");
		
	fclose(arquivo);
	
	return 0;
}
