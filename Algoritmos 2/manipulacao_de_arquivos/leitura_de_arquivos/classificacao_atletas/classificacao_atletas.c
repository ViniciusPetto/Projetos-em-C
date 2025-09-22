#include <stdio.h>
#include <stdlib.h>

int main() {
	int idade, medalhas, max_idade = 0, max_medalhas = 0;
	char nome[10], modalidade[15], mais_velho[10], mais_medalhas[10];
	FILE *arquivo;
	
	arquivo = fopen("atletas.txt", "r");
	
	if(arquivo == NULL){
		printf("Erro ao abrir o arquivo!\n");
		return 1;
	}
	else{
		while(fscanf(arquivo, "%s %s %d %d", nome, modalidade, &idade, &medalhas) != EOF){
			printf("Nome: %s\nModalidade: %s\nIdade: %d\nMedalhas: %d\n\n", nome, modalidade, idade, medalhas);
			
			if(max_idade < idade){
				max_idade = idade;
				strcpy(mais_velho, nome);
			}
			
			if(max_medalhas < medalhas){
				max_medalhas = medalhas;
				strcpy(mais_medalhas, nome);
			}
		}
		
		printf("\nAtleta mais velho: %s\nIdade: %d anos\n", mais_velho, max_idade);
		printf("\nAtleta com mais medalhas: %s\nMedalhas: %d", mais_medalhas, max_medalhas);
		
	}
	
	fclose(arquivo);
	
	return 0;
}
