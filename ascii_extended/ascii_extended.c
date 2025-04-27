#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int i;
	
	printf("Tabela ASCII Extended:\n");
    for (i = 32; i <= 255; i++) {
        printf("Caractere: '%c' | Decimal: %d | Hexadecimal: %X\n", i, i, i);
    }
    
    return 0;
}
