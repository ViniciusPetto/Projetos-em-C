#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int dia, mes, ano;
	
	printf("Digite a sua data de nascimento no seguinte formato: 'dd-mm-aaaa': ");
	scanf("%d-%d-%d", &dia, &mes, &ano);
	
	if((dia >= 21 && mes == 12) || (dia <= 20 && mes == 1))
		printf("Capric�rnio!");
	if((dia >= 21 && mes == 1) || (dia <= 20 && mes == 2))
		printf("Aqu�rio!");
	if((dia >= 21 && mes == 2) || (dia <= 20 && mes == 3))
		printf("Peixes!");
	if((dia >= 21 && mes == 3) || (dia <= 20 && mes == 4))
		printf("�ries!");
	if((dia >= 21 && mes == 4) || (dia <= 20 && mes == 5))
		printf("Touro!");
	if((dia >= 21 && mes == 5) || (dia <= 20 && mes == 6))
		printf("G�meos!");
	if((dia >= 21 && mes == 6) || (dia <= 20 && mes == 7))
		printf("C�ncer!");
	if((dia >= 21 && mes == 7) || (dia <= 20 && mes == 8))
		printf("Le�o!");
	if((dia >= 21 && mes == 8) || (dia <= 20 && mes == 9))
		printf("Virgem!");
	if((dia >= 21 && mes == 9) || (dia <= 20 && mes == 10))
		printf("Libra!");
	if((dia >= 21 && mes == 10) || (dia <= 20 && mes == 11))
		printf("Escorpi�o!");
	if((dia >= 21 && mes == 11) || (dia <= 20 && mes == 12))
		printf("Sagit�rio!");

	return 0;
}
