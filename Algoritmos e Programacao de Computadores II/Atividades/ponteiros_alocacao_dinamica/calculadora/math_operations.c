#include "math_operations.h"

//Implementação das funções (source)
int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mult(int a, int b){
    return a * b;
}

int divide(int a, int b){
    if(b == 0)
        return -1;
    else
        return a / b;
}

/*Função responsável por receber o ponteiro para uma das funções
acima e recebe os parâmetros, para que seja possível realizar a operação
em questão dinamicamente*/
int compute(int (*operation)(int, int), int x, int y){
    return operation(x, y);
}