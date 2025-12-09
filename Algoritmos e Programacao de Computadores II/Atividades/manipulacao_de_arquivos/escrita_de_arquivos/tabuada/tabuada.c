#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j;
	FILE* arquivo = fopen("tabela_multiplicacao.txt", "w");
	
	if(arquivo != NULL){
		for(i=1; i<=10; i++){
			for(j=1; j<=10; j++){
				fprintf(arquivo, "%d X %d = %d\n", i, j, i*j);
			}
			   fprintf(arquivo, "\n");
		}
		printf("Tabuada gravada com sucesso!");
	}
	else
		printf("Erro na abertura do arquivo!");
	
	fclose(arquivo);
	
	return 0;
}
