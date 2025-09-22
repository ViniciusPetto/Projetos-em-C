#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	FILE* arquivo = fopen("estudantes.txt", "w");
	char nome[20];
	int idade, i = 5;
	float nota;
	
	if(arquivo != NULL){
		while(i > 0){
			printf("Digite o nome do estudante: ");
			scanf("%s", nome);
			
			printf("Digite a idade do(a) estudante %s: ", nome);
			scanf("%d", &idade);
			
			printf("Digite a nota do(a) estudante %s: ", nome);
			scanf("%f", &nota);
			
			printf("\n");
			
			fprintf(arquivo, "%s %d %.2f\n", nome, idade, nota);
			
			i--;
		}
		printf("\nGravação realizada com sucesso!");
	}
	else
		printf("Erro na abertura do arquivo!\n");
		
	fclose(arquivo);
	
	return 0;
}
