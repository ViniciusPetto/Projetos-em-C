#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void num_decrescente(int n);

int main(){
	setlocale(LC_ALL, "portuguese");
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	printf("A ordem decrescente do número digitado até 1 é:\n");
	
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
