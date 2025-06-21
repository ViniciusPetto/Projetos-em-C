#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	float tempCelsius, tempFahrenheit;
	
	printf("Digite a temperatura, em Celsius (°C), que deseja converter para Fahrenheit (°F):\n");
	scanf("%f", &tempCelsius);
	
	tempFahrenheit = (tempCelsius*1.8)+32;
	
	printf("\nTemperatura em Celsius: %.1f°C\n", tempCelsius);
	printf("Temperatura em Fahrenheit: %.1f°F\n", tempFahrenheit);
	
	return 0;
}
