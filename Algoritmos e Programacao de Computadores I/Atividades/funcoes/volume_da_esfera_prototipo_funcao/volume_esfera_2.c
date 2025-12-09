#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float voluma_esfera(float r);

int main() {
	setlocale(LC_ALL, "portuguese");
	
	float raio;
	
	printf("Digite o valor do raio da esfera: ");
	scanf("%f", &raio);
	
	printf("Volume da esfera aproximado: %.2f unidades cúbicas\n", voluma_esfera(raio));
	return 0;
}

float voluma_esfera(float r){ 
	return (((4.0/3.0)*3.14159)*(r*r*r));
}
