#include <stdio.h>

/*Todos os n�meros inteiros elevados ao quadrado at� o n�mero 20*/
int main() {
	
	int valor = 1;
	
	do {
		printf("%d\n", valor*valor);
		valor++;
		
	} while(valor <= 20);
	
	return 0;
	
}


