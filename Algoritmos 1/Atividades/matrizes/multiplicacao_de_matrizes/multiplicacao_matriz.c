#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int linhas_mat1, colunas_mat1, linhas_mat2, colunas_mat2, i, j, k;
	int** mat1;
	int** mat2;
	int** resultado;
	
	//leitura do tamanho das matrizes
	printf("Digite o n�mero de linhas para sua matriz 1: ");
	scanf("%d", &linhas_mat1);
	
	printf("Digite o n�mero de colunas para sua matriz 1: ");
	scanf("%d", &colunas_mat1);
	
	printf("Digite o n�mero de linhas para sua matriz 2: ");
	scanf("%d", &linhas_mat2);
	
	printf("Digite o n�mero de colunas para sua matriz 2: ");
	scanf("%d", &colunas_mat2);
	
	if(colunas_mat1 == linhas_mat2){
		//aloca��o din�mica das matrizes mat1, mat2 e resultado
		mat1 = (int**) malloc(linhas_mat1 * sizeof(int*));
		for(i=0; i<linhas_mat1; i++)
			mat1[i] = (int*) malloc(colunas_mat1 * sizeof(int));
			
		mat2 = (int**) malloc(linhas_mat2 * sizeof(int*));
		for(i=0; i<linhas_mat2; i++)
			mat2[i] = (int*) malloc(colunas_mat2 * sizeof(int));
			
		int** resultado = (int**) malloc(linhas_mat1 * sizeof(int*));
		for(i = 0; i < linhas_mat1; i++)
    		resultado[i] = (int*) malloc(colunas_mat2 * sizeof(int));
				
		//leitura dos dados de mat1 e mat2
		printf("Digite os dados da matriz 1:\n");
		for(i=0; i<linhas_mat1; i++){
			for(j=0; j<colunas_mat1; j++){
				scanf("%d", &mat1[i][j]);
			}
		}
		
		printf("Digite os dados da matriz 2:\n");
		for(i=0; i<linhas_mat2; i++){
			for(j=0; j<colunas_mat2; j++){
				scanf("%d", &mat2[i][j]);
			}
		}
		
		//multiplica��o de matrizes		
		for(i=0; i<linhas_mat1; i++){
			for(j=0; j<colunas_mat1; j++){
				resultado[i][j] = 0;
				for(k=0; k<colunas_mat1; k++){
					resultado[i][j] += mat1[i][k] * mat2[k][j];
				}
				
			}
		}
			
		//exibi��o do resultado
		printf("Matriz resultante da multiplica��o:\n");
		for(i=0; i<linhas_mat1; i++){
			for(j=0; j<colunas_mat2; j++){
				printf("%d ", resultado[i][j]);
			}
			printf("\n");
		}
			
	}
	else{
		//caso as matrizes n�o forem iguais entre si (n� de linhas e colunas) n�o � realizado a opera��o
		printf("As dimens�es das duas matrizes n�o permitem a multiplica��o entre elas (� necess�rio que o n�mero de linhas de uma matriz seja igual ao n�mero de colunas da outra matriz).");
	}
			
	return 0;
}
