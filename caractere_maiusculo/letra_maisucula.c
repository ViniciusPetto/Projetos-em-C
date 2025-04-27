#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	char c;
	
	printf("Digite uma letra: ");
	scanf("%c", &c);
	
	if(c >= 97 && c <= 122)
		printf("A letra digitada foi %c", toupper(c));
	else
		printf("A letra digitada foi %c", c);
	
	return 0;
}
