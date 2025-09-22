#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	FILE* arquivo;
	int ra, ra_digitado;
	float nota, nota_encontrada;
	
	arquivo = fopen("notas.txt", "r");
	
	if(arquivo != NULL){
		/*while(fscanf(arquivo, "%d %f", &ra, &nota) != EOF){
			printf("RA: %d, Nota: %.2f\n", ra, nota);
		}*/
		
		printf("Digite o RA que deseja buscar: ");
		scanf("%d", &ra_digitado);
		
		//retorna o cursor de leitura para o início do arquivo
		//rewind(arquivo);
		
		while(fscanf(arquivo, "%d %f", &ra, &nota) != EOF){
			if(ra == ra_digitado)
				nota_encontrada = nota;
		}
	}
	else{
		printf("Erro ao abrir o arquivo!\n");
	}
	
	if(nota_encontrada)
		printf("\nNota do RA %d: %.2f", ra_digitado, nota_encontrada);
	else
		printf("\nRA não encontrado!");
	
	fclose(arquivo);
	
	return 0;
}
