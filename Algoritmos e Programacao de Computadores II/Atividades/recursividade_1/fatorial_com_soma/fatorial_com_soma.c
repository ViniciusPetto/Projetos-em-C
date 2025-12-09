#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fatorial_soma(int n){
	if(n == 0){
		return 0;
	}
	return n + fatorial_soma(n-1);
}

int main(){
	setlocale(LC_ALL, "portuguese");
	int n;
	scanf("%d", &n);
	if(n < 0){
		printf("Digite um número maior que 0!\n");
	}
	else{
		printf("%d", fatorial_soma(n));
	}
	return 0;
}