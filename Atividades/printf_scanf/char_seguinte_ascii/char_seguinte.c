#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");

    char caractere;
    
    printf("Digite um caractere qualquer do teclado: ");
    scanf("%c", &caractere);
    
    printf("O caractere seguinte ao que voc� digitou ('%c'), segundo a tabela ASCII �: %c\n", caractere, caractere+1);

    return 0;
}
