#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	float tempCelsius, tempFahrenheit;
	
	printf("Digite a temperatura, em Fahrenheit (°F), que deseja converter para Celsius (°C):\n");
	scanf("%f", &tempFahrenheit);

	tempCelsius = (tempFahrenheit-32)*0.556;
	
	printf("\nTemperatura em Fahrenheit: %.1f°F\n", tempFahrenheit);
	printf("Temperatura em Celsius: %.1f°C\n", tempCelsius);
	
	return 0;
}
