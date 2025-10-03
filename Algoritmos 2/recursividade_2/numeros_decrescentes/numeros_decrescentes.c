#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void num_decrescente(int n);

int main(){
	setlocale(LC_ALL, "portuguese");
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	printf("A ordem decrescente do n�mero digitado at� 1 �:\n");
	
	num_decrescente(num);
	return 0;
}

void num_decrescente(int n){
	if(n == 0){
		return;
	}
	else{
		printf("%d | ", n);
		num_decrescente(n-1);
	}
	
}
