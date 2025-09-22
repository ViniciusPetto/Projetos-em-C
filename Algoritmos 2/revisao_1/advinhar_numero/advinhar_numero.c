#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int tentativas = 5, n = 41, n_digitado;
	
	while(tentativas > 0){
		printf("\nDigite o n�mero que voc� acha que �: ");
		scanf("%d", &n_digitado);
		
		if(n_digitado == n){
			printf("Parab�ns, voc� acertou o n�mero!\n");
			break;
		}
		else if(n_digitado < n){
			printf("O n�mero a ser adivinhado � maior!\n");
			if((n - n_digitado) <= 3)
				printf("E voc� est� bem pr�ximo!\n");
		}	
		else if(n_digitado > n){
			printf("O n�mero a ser adivinhado � menor!\n");
			if((n_digitado - n) <= 3)
				printf("E voc� est� bem pr�ximo!\n");
		}
		tentativas--;
	}
	
	if(tentativas == 0)
		printf("\nSuas tentativas acabaram, o n�mero correto era %d", n);
		
	return 0;
}
