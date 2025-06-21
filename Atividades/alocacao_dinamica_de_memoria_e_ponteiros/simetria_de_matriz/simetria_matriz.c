#include <stdio.h>
#include <stdlib.h>

int main(){
	int linha, coluna, i, j, simetria = 0;
	int** mat;
	
	scanf("%d %d", &linha, &coluna);
	
	mat = (int**) malloc(linha*sizeof(int*));
	
	for(i=0; i<coluna; i++)
		mat[i] = (int*) malloc(coluna*sizeof(int));
		
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			if(mat[i][j] != mat [j][i])
				simetria = 1;
		}
	}
	
	if(simetria != 1)
		printf("Eh simetrica\n");
	else
		printf("Nao eh simetrica\n");
	
	return 0;
}
