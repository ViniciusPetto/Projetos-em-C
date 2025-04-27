#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	long n, contador=0, impar=0, quadrado=0;
	
	printf("Digite um n�mero inteiro positivo: ");
	scanf("%d", &n);
	
	while(contador < n){
		
		/*A cada loop, verifica-se se o contador � menor que o valor digitado pelo usu�rio, ap�s isso, verifica-se se o n�mero que est� em "impar" � �mpar,
		caso seja, soma-se seu valor ao que j� estava na vari�vel "quadrado", aumenta 1 em impar e 1 no contador, para que no futuro seja poss�vel sair do
		loop. Caso o que n�o esteja em "impar" seja �mpar, apenas aumenta 1, sem fazer a opera��o (que precisa que o valor de fato seja �mpar)*/
		if(impar%2 != 0){
			quadrado = quadrado + impar;
			contador++;
			impar++;
		}
		else{
			impar++;
		}
		
	}
	
	printf("%ld elevado ao quadrado � %ld\n", n, quadrado);
	
	return 0;
}
