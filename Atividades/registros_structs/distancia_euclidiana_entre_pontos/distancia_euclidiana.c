#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	typedef struct point{
		float x;
		float y;
	}ponto;
	
	ponto p1, p2;
	float d;
	
	//leitura de x e y dos pontos 1 e 2
	printf("Digite os pontos X e Y de P1: ");
	scanf("%f %f", &p1.x, &p1.y);
	
	printf("Digite os pontos X e Y de P2: ");
	scanf("%f %f", &p2.x, &p2.y);
	
	/*O m�todo abaixo, com apenas as vari�veis da struct, e uma vari�vel d, 
	� poss�vel realizar o c�lculo todo, com o uso de par�nteses na equa��o*/
	d = sqrt((((p2.x - p1.x) * (p2.x - p1.x)) + ((p2.y - p1.y) * (p2.y - p1.y))));
	
	//verifica��o se P1 e P2 s�o ou n�o o mesmo ponto pela dist�ncia euclidiana
	printf("A dist�ncia euclidiana entre os pontos X e Y �: %.3f", d);
	 
	return 0;
}
