#include <stdio.h>

int main() {
	typedef struct pessoa{
		float altura;
		float peso;
		char nome[20];
	}corpo;
	
	corpo p1;
	float imc;
	
	scanf("%f", &p1.altura);
	scanf("%f", &p1.peso);
	scanf("%s", &p1.nome);
	
	imc = p1.peso / (p1.altura * p1.altura);
	
	printf("%.3f\n", imc);
	
	return 0;
}
