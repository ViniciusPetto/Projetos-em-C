#include <stdio.h>
/*Total de n�meros pares e �mpares digitados pelo usu�rio (m�ximo 10 n�meros)*/

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
