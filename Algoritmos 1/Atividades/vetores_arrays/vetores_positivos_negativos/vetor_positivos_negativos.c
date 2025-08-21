#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int i, pos=0, neg=0, num[8], num_positivo[8], num_negativo[8];
	
	printf("Digite 8 n�meros inteiros:\n");
	for(i=0; i<8; i++)
		scanf("%d", &num[i]);
	
	/*percorre o vetor verificando se os n�meros s�o positivos ou negativos,
	caso sejam postivos, se atribui o valor do vetor original no vetor de positivos e
	incrementa 1 na vari�vel de controle do vetor dos positivos, caso contr�rio, faz a mesma
	coisa, mas para o vetor de n�meros negativos e a sua vari�vel de controle independente*/
	for(i=0; i<8; i++){
		
		if(num[i] >= 0){
			num_positivo[pos] = num[i];
			pos++;
		}
		else{
			num_negativo[neg] = num[i];
			neg++;
		}
	
	}
	
	printf("\nVetor com todos os n�meros inteiros: ");
	for(i=0; i<8; i++)
		printf("%d|", num[i]);
	
	printf("\nVetor com os n�meros inteiros positivos: ");
	for(i=0; i<pos; i++)
		printf("%d|", num_positivo[i]);
	
	printf("\nVetor com os n�meros inteiros negativos: ");
	for(i=0; i<neg; i++)
		printf("%d|", num_negativo[i]);
	
	return 0;
}
