#include <stdio.h>
/*C�lculo de fatorial da vvari�vei n, depois da vari�vel s, depois o fatorial de n-s e multiplicado pelo fatorial de s
por fim, executando a f�rmula n! / s! * (n-s)!*/

int main() {
	int n, s, n_menos_s;
	long fat_n, fat_s, fat_n_menos_s, resultado;
	
		scanf("%d", &n);
		scanf("%d", &s);
			
		n_menos_s = n-s;	
	
		fat_s = 1;
		fat_n = 1;
		fat_n_menos_s = 1;
		
		//calculando fatorial de "n" -> n!	
		while(n > 1){
			fat_n = fat_n * n; 
			n--;
		}
		
		//calculando fatorial de "s" -> s!
		while(s > 1){
			fat_s = fat_s * s;
			s--;	
		}
		
		//calculando fatorial de "n-s" -> (n-s)!	
		while(n_menos_s > 1){
			fat_n_menos_s = fat_n_menos_s * n_menos_s;
			n_menos_s--;
		}
			
		//f�rmula -> n! / s! * (n - s)!
		resultado = fat_n/(fat_s*fat_n_menos_s);
		
		printf("%ld\n", resultado);
			
	return 0;
}
