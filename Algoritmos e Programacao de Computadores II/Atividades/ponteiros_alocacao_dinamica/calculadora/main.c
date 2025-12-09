#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "math_operations.h"

int main(){
    setlocale(LC_ALL, "portuguese");
    int a, b, op;

    //Inserindo números e a operação a ser realizada
    printf("Digite o número da operação matemática que deseja realizar:\n1 - Adição;\n2 - Subtração;\n3 - Multiplicação;\n4 - Divisão;\n");
    printf("Opção: ");
    scanf("%d", &op);

    printf("\nDigite o primeiro número inteiro para realizar uma operação matemática: ");
    scanf("%d", &a);

    printf("Digite o segundo número inteiro para realizar uma operação matemática: ");
    scanf("%d", &b);

    //Seleção da operação matemática
    switch (op)
    {
    case 1:
        printf("\nO resultado da adição é: %d\n", compute(add, a, b));
        break;

    case 2:
        printf("\nO resultado da subtração é: %d\n", compute(sub, a, b));
        break;

    case 3:
        printf("\nO resultado da multiplicação é: %d\n", compute(mult, a, b));
        break;

    case 4:
        if(compute(divide, a, b) < 0 ){
            printf("\nNão é possivel realizar divisão por 0!\n");
            break;
        }
        else{
            printf("\nO resultado da divisão é: %d\n", compute(divide, a, b));
            break;
        }
    
    default:
        printf("\nOpção inválida!\n");
        break;
    }
    
    return 0;
}