#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	float forn_A, forn_B, forn_C;
	
	printf("Digite o valor dos 3 fornecedores em sequ�ncia:\n");
	scanf("%f %f %f", &forn_A, &forn_B, &forn_C);
	
	//Verifica��o de fornecedor mais caro
	if(forn_A > forn_B && forn_A > forn_C)
		printf("O fornecedor 1 � o mais caro, com valor de R$ %.2f\n", forn_A);
	else if(forn_B > forn_A && forn_B > forn_C)
		printf("O fornecedor 2 � o mais caro, com valor de R$ %.2f\n", forn_B);
	else
		printf("O fornecedor 3 � o mais caro, com valor de R$ %.2f\n", forn_C);
	
	
	//Verifica��o de fornecedor mais barato
	if(forn_A < forn_B && forn_A < forn_C)
		printf("O fornecedor 1 � o mais barato, com valor de R$ %.2f\n", forn_A);
	else if(forn_B < forn_A && forn_B < forn_C)
		printf("O fornecedor 2 � o mais barato, com valor de R$ %.2f\n", forn_B);
	else
		printf("O fornecedor 3 � o mais barato, com valor de R$ %.2f\n", forn_C);
	
	return 0;
}
