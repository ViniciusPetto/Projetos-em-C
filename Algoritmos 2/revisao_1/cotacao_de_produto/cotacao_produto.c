#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	float forn_A, forn_B, forn_C;
	
	printf("Digite o valor dos 3 fornecedores em sequência:\n");
	scanf("%f %f %f", &forn_A, &forn_B, &forn_C);
	
	//Verificação de fornecedor mais caro
	if(forn_A > forn_B && forn_A > forn_C)
		printf("O fornecedor 1 é o mais caro, com valor de R$ %.2f\n", forn_A);
	else if(forn_B > forn_A && forn_B > forn_C)
		printf("O fornecedor 2 é o mais caro, com valor de R$ %.2f\n", forn_B);
	else
		printf("O fornecedor 3 é o mais caro, com valor de R$ %.2f\n", forn_C);
	
	
	//Verificação de fornecedor mais barato
	if(forn_A < forn_B && forn_A < forn_C)
		printf("O fornecedor 1 é o mais barato, com valor de R$ %.2f\n", forn_A);
	else if(forn_B < forn_A && forn_B < forn_C)
		printf("O fornecedor 2 é o mais barato, com valor de R$ %.2f\n", forn_B);
	else
		printf("O fornecedor 3 é o mais barato, com valor de R$ %.2f\n", forn_C);
	
	return 0;
}
