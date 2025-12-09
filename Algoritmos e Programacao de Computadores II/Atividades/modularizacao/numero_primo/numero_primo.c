#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int verifica_primo(int numero);

int main(){
	setlocale(LC_ALL, "portuguese");
	int n;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if(verifica_primo(n))
		printf("O número %d é um número primo!\n", n);
	else
		printf("O número %d não é um número primo!\n", n);
	
	return 0;
}

int verifica_primo(int numero){
	int i;
	
	if(numero <= 1)
		return 0;
		
	for(i=2; i<=sqrt(numero); i++){
		if(numero % i == 0){
			return 0;
		}
	}
	
	return 1;
}
