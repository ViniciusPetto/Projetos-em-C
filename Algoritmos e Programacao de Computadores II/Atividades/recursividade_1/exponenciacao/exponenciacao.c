#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int f_exponencial(int base, int potencia);

int main() {
	setlocale(LC_ALL, "portuguese");
	int base, potencia;
	
	printf("Digite a base e a potência que deseja calcular:\n");
	scanf("%d %d", &base, &potencia);
	printf("%d", f_exponencial(base, potencia));
	return 0;
}
int f_exponencial(int base, int potencia){
	if(potencia == 0){
		return 1;
	}
	return base * f_exponencial(base, potencia - 1);
}