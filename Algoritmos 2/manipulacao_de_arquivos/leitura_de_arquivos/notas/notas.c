#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	FILE* arquivo;
	int ra;
	float nota;
	
	arquivo = fopen("notas.txt", "r");
	
	if(arquivo != NULL){
		while(fscanf(arquivo, "%d %f", &ra, &nota) != EOF){
			printf("RA: %d, Nota: %.2f\n", ra, nota);
		}
	}
	else{
		printf("Erro ao abrir arquivo!\n");
	}
	
	fclose(arquivo);
	
	return 0;
}
