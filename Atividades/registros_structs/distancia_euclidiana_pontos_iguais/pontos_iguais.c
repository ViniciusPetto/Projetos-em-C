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
	
	/*Esse m�todo abaixo, faz o uso de diversas vari�veis para realizar o
	c�lculo da dist�ncia euclidiana*/
	
	/*float subX, subY, quadX, quadY, soma;
	subX = p2.x - p1.x;
	subY = p2.y - p1.y;
	
	quadX = subX * subX;
	quadY = subY * subY;
	
	soma = quadX + quadY;
	
	d = sqrt(soma);*/
	
	/*O m�todo abaixo, com apenas as vari�veis da struct, e uma vari�vel d, 
	� poss�vel realizar o c�lculo todo, com o uso de par�nteses na equa��o*/
	d = sqrt((((p2.x - p1.x) * (p2.x - p1.x)) + ((p2.y - p1.y) * (p2.y - p1.y))));
	
	//verifica��o se P1 e P2 s�o ou n�o o mesmo ponto pela dist�ncia euclidiana
	if(d < 0.0000001)
		printf("os pontos sao iguais\n");
	else
	 printf("os pontos nao sao iguais\n");
	 
	return 0;
}
