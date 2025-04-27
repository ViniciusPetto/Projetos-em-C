#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int n=0;
	
	while(1){
		
		if((n%3 == 2) && (n%5 == 3) && (n%7 == 4)){
			printf("%d é o menor número inteiro positivo que atende as seguintes condições:\n->%d/3 possui resto 2\n->%d/5 possui resto 3\n->%d/7 possui resto 4", n, n, n, n);
			break;
		}
		else
			n++;
		
	}
	
	return 0;
}
