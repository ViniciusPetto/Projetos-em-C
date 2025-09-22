#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	FILE* arquivo;
	int ra, ra_digitado, opcao;
	float nota, nota_encontrada, qtd_alunos = 0, soma_notas = 0;
	
	arquivo = fopen("notas.txt", "r");
	
	if(arquivo != NULL){
		printf("Digite o n�mero de qual op��o deseja utilizar:\n1 - Exibir todas as notas;\n2 - Calcular m�dia da turma;\n3 - Localizar nota atrav�s do RA.\n");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1: //Exibir todas as notas
				while(fscanf(arquivo, "%d %f", &ra, &nota) != EOF){
					printf("RA: %d, Nota: %.2f\n", ra, nota);
				}
				
				break;
				
			case 2: //Calcular m�dia da turma
				rewind(arquivo);
		
				while(fscanf(arquivo, "%d %f", &ra, &nota) != EOF){
					qtd_alunos++;
					soma_notas += nota;
				}
				printf("M�dia da turma: %.2f", soma_notas/qtd_alunos);
				
				break;
				
			case 3: //Localizar nota atrav�s do RA
				rewind(arquivo);
				printf("Digite o RA que deseja buscar: ");
				scanf("%d", &ra_digitado);
				
				while(fscanf(arquivo, "%d %f", &ra, &nota) != EOF){
					if(ra == ra_digitado)
						nota_encontrada = nota;
				}
				if(nota_encontrada)
					printf("\nNota do RA %d: %.2f", ra_digitado, nota_encontrada);
				else
					printf("\nRA n�o encontrado!");
					
				break;
				
			default:
				printf("Op��o inv�lida!");
				break;
		}
		
	}
	else{
		printf("Erro ao abrir arquivo!");
	}
	
	fclose(arquivo);
	
	return 0;
}
