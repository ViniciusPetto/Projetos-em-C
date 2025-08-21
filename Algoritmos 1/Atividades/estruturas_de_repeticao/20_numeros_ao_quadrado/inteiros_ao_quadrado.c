#include <stdio.h>

/*Todos os números inteiros elevados ao quadrado até o número 20*/
int main() {
	
	int valor = 1;
	
	do {
		printf("%d\n", valor*valor);
		valor++;
		
	} while(valor <= 20);
	
	return 0;
	
}


