#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma_pares(int vetor[],int i);

int main(){
	setlocale(LC_ALL, "portuguese");
	int vetor[] = {1, 2, 3, 4, 5};
	int i = 4;
	
	printf("Resultado da função: %d", soma_pares(vetor,i));
	return 0;
}

int soma_pares(int vetor[], int i){
	if(i == -1){
		return 0;
	}
	else if(vetor[i]%2==0){
		return vetor[i]+soma_pares(vetor,i-1);
	}
	else{
		return soma_pares(vetor,i-1);
	}
}
