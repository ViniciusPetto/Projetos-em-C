#include <stdio.h>

int main(){
    float p1;
    float p2;
    float t;
    float media;

    printf("Digite a nota P1 do aluno:\n");
    scanf("%f", &p1);

    printf("Digite a nota P2 do aluno:\n");
    scanf("%f", &p2);

    printf("Digite a nota T do aluno:\n");
    scanf("%f", &t);

    media=(p1+p2+t)/3;

    printf("A média final do aluno, segundo as notas inseridas é %.2f\n", media);

    return 0;
}