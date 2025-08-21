#include <stdio.h>

int main() {
	int num_linha, num_coluna, i, j;
	
	//Lendo valores do tamanho da matriz
	scanf("%d %d", &num_linha, &num_coluna);
	
	int matriz[num_coluna][num_linha];
	
	//Preenchendo matriz
	for(i=0; i<num_linha; i++){
		for(j=0; j<num_coluna; j++){
			
			scanf("%d", &matriz[j][i]);
			
		}
	}
	
	//Imprimindo matriz
	for(i=0; i<num_coluna; i++){
		for(j=0; j<num_linha; j++){
			
			printf("%d ", matriz[i][j]);
			
		}
		printf("\n");
	}
	
	return 0;
}
