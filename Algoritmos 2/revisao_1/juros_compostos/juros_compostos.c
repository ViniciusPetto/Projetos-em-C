#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int tempo;
	float taxa, v_investimento, saldo_final = 0;
	
	printf("Digite a quantidade de tempo (em anos) que deseja deixar seu dinheiro investido: ");
	scanf("%d", &tempo);
	
	printf("Digite a taxa de juros anual do investimento: ");
	scanf("%f", &taxa);
	
	printf("Digite o valor inicial do investimento: ");
	scanf("%f", &v_investimento);
	
	saldo_final = v_investimento;
	
	while(tempo > 0){
		saldo_final = saldo_final * (1 + (taxa/100));
		tempo--;
	}
	
	printf("O valor inicial investido é de R$ %.2f.\nO saldo final é de R$ %.2f.\nOs juros que renderam esse investimento é de R$ %.2f", v_investimento, saldo_final, saldo_final - v_investimento);
	
	return 0;
}
