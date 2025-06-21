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
	
	/*O método abaixo, com apenas as variáveis da struct, e uma variável d, 
	é possível realizar o cálculo todo, com o uso de parênteses na equação*/
	d = sqrt((((p2.x - p1.x) * (p2.x - p1.x)) + ((p2.y - p1.y) * (p2.y - p1.y))));
	
	//verificação se P1 e P2 são ou não o mesmo ponto pela distância euclidiana
	printf("A distância euclidiana entre os pontos X e Y é: %.3f", d);
	 
	return 0;
}
