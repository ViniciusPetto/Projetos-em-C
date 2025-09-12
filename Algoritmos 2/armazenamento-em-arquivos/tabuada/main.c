#include <stdio.h>
#include <stdlib.h>


int main() {
	int i, j;
	char string[13];
	FILE *arquivo;
	
	arquivo = fopen("tabela_multiplicacao.txt", "w");
	
	for(i=1; i<=10; i++){
		for(j=1; j<=10; j++){
			fprintf(arquivo, "%d X %d = %d\n", i, j, i*j);
		}
		fprintf(arquivo, "\n");
	}
	printf("Tabuada gravada com sucesso!\n\n");
	fclose(arquivo);
	
	arquivo = fopen("tabela_multiplicacao.txt", "r");
	printf("Exibindo a tabuada gravada no arquivo:\n");
	while(fgets(string, 13, arquivo) != NULL){
		printf("%s", string);
	}
	
	fclose(arquivo);
	return 0;
}
