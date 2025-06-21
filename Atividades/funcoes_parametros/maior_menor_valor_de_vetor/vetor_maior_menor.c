#include <stdio.h>
int menor, maior, tam;

void buscaMenorMaior(int vet[]);

int main(){
    scanf("%d", &tam);
    int vet[tam], i;
    
    for (i=0; i<tam; i++)
        scanf("%d", &vet[i]);

    buscaMenorMaior(vet);
    
    printf("maior valor: %d\nmenor valor: %d\n", maior, menor);

    return 0;
}

void buscaMenorMaior(int vet[]){
    menor = vet[0];
    maior = vet[0];
    
    int i;

    for (i=1; i<tam; i++) {
        if (vet[i] < menor)
            menor = vet[i];
            
        if (vet[i] > maior)
            maior = vet[i];
    }
}
