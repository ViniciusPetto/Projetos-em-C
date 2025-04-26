#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int idade;
	long minutos;
	
	printf ("Digite a sua idade, em anos, para que ela seja convertidade em minutos: ");
	scanf("%d", &idade);
	
	//525600 é a quantidade de minutos que existe em 1 ano (com 365 dias)
	minutos = idade*525600;
	
	printf("A sua idade (%d anos), é aproximadamente %ld minutos", idade, minutos);
	
	return 0;
}
