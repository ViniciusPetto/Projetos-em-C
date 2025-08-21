#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	typedef struct ret{
		float x;
		float y;
	}retangulo;
	
	retangulo ponto_inferior_esq, ponto_superior_dir;
	float area;
	
	//lendo dados (X e Y) sobre o ponto inferior esquerdo e ponto superior direito do ret�ngulo
	printf("Digite as coordenadas X e Y do ponto inferior esquerdo do ret�ngulo: ");
	scanf("%f %f", &ponto_inferior_esq.x, &ponto_inferior_esq.y);
	
	printf("Digite as coordenadas X e Y do ponto superior direito do ret�ngulo: ");
	scanf("%f %f", &ponto_superior_dir.x, &ponto_superior_dir.y);
	
	//calculando a �rea desses dois ret�ngulos com base nos pontos informados pelo usu�rio
	area = (ponto_superior_dir.x - ponto_inferior_esq.x) * (ponto_superior_dir.y - ponto_inferior_esq.y);
	
	printf("A �rea do ret�ngulo, usando os pontos fornecidos �: %.2f\n", area);
	
	return 0;
}
