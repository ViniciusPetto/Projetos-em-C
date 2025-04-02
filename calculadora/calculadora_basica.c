#include <stdio.h>

int main(){

    float op1, op2;
    char sinal;

    scanf("%f%c%f", &op1, &sinal, &op2);

    if(sinal == 43)
        printf("%.3f+%.3f=%.3f\n", op1, op2, op1+op2);
    else
        if(sinal == 45)
            printf("%.3f-%.3f=%.3f\n", op1, op2, op1-op2);
        else
            if(sinal == 47)
                printf("%.3f/%.3f=%.3f\n", op1, op2, op1/op2);
            else
                if(sinal == 42)
                    printf("%.3f*%.3f=%.3f\n", op1, op2, op1*op2);
                else
                    printf("Operador invalido\n");

    return 0;

}
