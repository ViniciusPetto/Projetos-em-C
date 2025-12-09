#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	long n, contador=0, impar=0, quadrado=0;
	
	printf("Digite um número inteiro positivo: ");
	scanf("%d", &n);
	
	while(contador < n){
		
		/*A cada loop, verifica-se se o contador é menor que o valor digitado pelo usuário, após isso, verifica-se se o número que está em "impar" é ímpar,
		caso seja, soma-se seu valor ao que já estava na variável "quadrado", aumenta 1 em impar e 1 no contador, para que no futuro seja possível sair do
		loop. Caso o que não esteja em "impar" seja ímpar, apenas aumenta 1, sem fazer a operação (que precisa que o valor de fato seja ímpar)*/
		if(impar%2 != 0){
			quadrado = quadrado + impar;
			contador++;
			impar++;
		}
		else{
			impar++;
		}
		
	}
	
	printf("%ld elevado ao quadrado é %ld\n", n, quadrado);
	
	return 0;
}
