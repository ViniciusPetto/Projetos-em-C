#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int numero, i, tamanho = 1;
    int* array_numerico;

    while(1){
        printf("Digite um número inteiro para ser guardado em um vetor ou digite -1 para sair: ");
        scanf("%d", &numero);

        //Usuário digita -1 para sair
        if(numero == -1)
            break;
        else{
            //Inicializa o array com pelo menos um espaço de armazenamento
            if(tamanho == 1){
                array_numerico = malloc(tamanho * sizeof(int));
                array_numerico[tamanho-1] = numero;
            }
            //Aloca mais espaços conforme necessário (usuário digitar)
            else{
                array_numerico = realloc(array_numerico, tamanho * sizeof(int)); 
                array_numerico[tamanho-1] = numero;
            }           
            tamanho++;
        }
    }

    //Exibindo array preenchido
    printf("\nNúmeros armazenados no vetor: | ");
    for(i = 0; i < tamanho-1; i++){
        printf("%d | ", array_numerico[i]);
    }
    printf("\n");
    return 0;
}