#include <stdio.h>
#include <stdlib.h>

int main() {
	int idade, medalhas;
	char nome[10], modalidade[15];
	FILE *arquivo;
	
	arquivo = fopen("atletas.txt", "r");
	
	if(arquivo == NULL){
		printf("Erro ao abrir o arquivo!\n");
		return 1;
	}
	else{
		while(fscanf(arquivo, "%s %s %d %d", nome, modalidade, &idade, &medalhas) != EOF){
			printf("Nome: %s\nModalidade: %s\nIdade: %d\nMedalhas: %d\n\n", nome, modalidade, idade, medalhas);
		}		
	}
	
	fclose(arquivo);
	
	return 0;
}
