#include <stdio.h>
/*Total de números pares e ímpares digitados pelo usuário (máximo 10 números)*/

int main() {
	
	int num, i, par = 0, impar = 0;
	
	for(i = 0; i < 10; i++) {
		
		scanf("%d", &num);
		
		if(num % 2 == 0)
			par++;	
		else
			impar++;
			
		
	}
	
	printf("%d pares, %d impares\n", par, impar);

	return 0;
	
}
