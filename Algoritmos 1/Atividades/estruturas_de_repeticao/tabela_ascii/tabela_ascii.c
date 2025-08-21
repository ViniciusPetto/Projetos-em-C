#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	char c;
	
	printf("Digite um caractere (digite # para sair): ");
	scanf("%c", &c);
	
	while(c != '#'){	
		printf("O caractere '%c' tem o seguinte código ASCII: %d\n\n", c, c);
		
		fflush(stdin);
		
		printf("Digite um caractere (digite # para sair): ");
		scanf("%c", &c);
	}
	
	
	return 0;
}
