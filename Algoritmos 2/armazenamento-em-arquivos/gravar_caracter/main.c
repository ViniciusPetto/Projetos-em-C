#include <stdio.h>
#include <stdlib.h>

int main() {
	char string[50];
	char c[2];
	int i = 0;
	FILE *arquivo;
	
	printf("Uma string qualquer: ");
	fgets(string, 50, stdin);
	
	arquivo = fopen ("caracter.txt", "w");
	
	while(string[i] != '\0'){
		fputc(string[i], arquivo);
		fputc('\n', arquivo);
		i++;
	}
	
	printf("Arquivo gravado com sucesso!\n");
	fclose(arquivo);
	
	return 0;
}
