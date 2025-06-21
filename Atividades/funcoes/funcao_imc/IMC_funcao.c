#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void IMC(float peso, float altura);
float calculo_IMC(float peso, float altura);

int main(){
	float peso, altura;
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	IMC(peso, altura);
	
	return 0;
}

void IMC(float peso, float altura){
	setlocale(LC_ALL, "portuguese");
	
	float IMC = calculo_IMC(peso, altura);
	
	printf("\nSeu IMC é de: %.1f\nStatus: ", IMC);
	if(IMC < 18.5)
		printf("Abaixo do peso\n");
	else if(IMC >= 18.5 && IMC <= 25.0)
		printf("Peso normal\n");
	else if(IMC > 25.0 && IMC <=30.0)
		printf("Acima do peso\n");
	else if(IMC > 30.0)
		printf("Obesidade\n");
}

float calculo_IMC(float peso, float altura){
	return (peso/pow(altura, 2));
}
