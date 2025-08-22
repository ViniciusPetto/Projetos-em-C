#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float celsius_para_fahrenheit();
float fahrenheit_para_celsius();
void exibir_menu();
void exibir_resultado(float temp);

int main() {
	setlocale(LC_ALL, "portuguese");
	
	exibir_menu();
	
	return 0;
}

void exibir_menu(){
	int opcao;
	float temperatura;
	
	printf("Escolha uma opção:\n1 - Converter Celsius pra Fahrenheit;\n2 - Converter Fahrenheit para Celsius\n3 - Sair.\n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			temperatura = celsius_para_fahrenheit();
			exibir_resultado(temperatura);
			break;
			
		case 2:
			temperatura = fahrenheit_para_celsius();
			exibir_resultado(temperatura);
			break;
		
		default:
			break;
	}
}

float celsius_para_fahrenheit(){
	float temp;
	
	printf("\nDigite uma temperatura em Celsius para converter para Fahrenheit: ");
	scanf("%f", &temp);
	
	temp = (temp * 1.8) + 32;
	
	return temp;
}

float fahrenheit_para_celsius(){
	float temp;
	
	printf("Digite uma temperatura em Fahrenheit para converter para Celsius: ");
	scanf("%f", &temp);
	
	temp = (temp - 32) * (5.0/9.0);
	
	return temp;
}

void exibir_resultado(float temp){
	printf ("O valor da temperatura convertida é: %f", temp);
}
