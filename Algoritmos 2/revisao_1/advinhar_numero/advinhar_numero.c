#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int tentativas = 5, n = 41, n_digitado;
	
	while(tentativas > 0){
		printf("\nDigite o número que você acha que é: ");
		scanf("%d", &n_digitado);
		
		if(n_digitado == n){
			printf("Parabéns, você acertou o número!\n");
			break;
		}
		else if(n_digitado < n){
			printf("O número a ser adivinhado é maior!\n");
			if((n - n_digitado) <= 3)
				printf("E você está bem próximo!\n");
		}	
		else if(n_digitado > n){
			printf("O número a ser adivinhado é menor!\n");
			if((n_digitado - n) <= 3)
				printf("E você está bem próximo!\n");
		}
		tentativas--;
	}
	
	if(tentativas == 0)
		printf("\nSuas tentativas acabaram, o número correto era %d", n);
		
	return 0;
}
