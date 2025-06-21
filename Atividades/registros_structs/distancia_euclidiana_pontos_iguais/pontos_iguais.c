#include <stdio.h>
#include <math.h>

int main() {	
	typedef struct point{
		float x;
		float y;
	}ponto;
	
	ponto p1, p2;
	float d;
	
	//leitura de x e y dos pontos 1 e 2
	scanf("%f %f", &p1.x, &p1.y);
	scanf("%f %f", &p2.x, &p2.y);
	
	/*Esse método abaixo, faz o uso de diversas variáveis para realizar o
	cálculo da distância euclidiana*/
	
	/*float subX, subY, quadX, quadY, soma;
	subX = p2.x - p1.x;
	subY = p2.y - p1.y;
	
	quadX = subX * subX;
	quadY = subY * subY;
	
	soma = quadX + quadY;
	
	d = sqrt(soma);*/
	
	/*O método abaixo, com apenas as variáveis da struct, e uma variável d, 
	é possível realizar o cálculo todo, com o uso de parênteses na equação*/
	d = sqrt((((p2.x - p1.x) * (p2.x - p1.x)) + ((p2.y - p1.y) * (p2.y - p1.y))));
	
	//verificação se P1 e P2 são ou não o mesmo ponto pela distância euclidiana
	if(d < 0.0000001)
		printf("os pontos sao iguais\n");
	else
	 printf("os pontos nao sao iguais\n");
	 
	return 0;
}
