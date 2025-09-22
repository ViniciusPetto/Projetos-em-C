#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calcula_fatorial(int n1);

int main() {
	setlocale(LC_ALL, "portuguese");
	
	long int n1;
	
	printf("Digite um número para calcular o fatorial: ");
	scanf("%ld", &n1);
	
	printf("Fatorial de %ld = %ld", n1, calcula_fatorial(n1));
	
	return 0;
}

int calcula_fatorial(int n1){
	long int fat=1;
	int i;
	
	for(i=1; i<=n1; i++){
		fat *= i;
	}
	
	return fat;
}
