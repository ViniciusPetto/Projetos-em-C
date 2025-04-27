#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
 	int vetor[10], i, j, temp;
	
	printf("Digite 10 valores inteiros:\n");
	for(i=0; i<10; i++)
		scanf("%d", &vetor[i]);
	
	//implementa o bubble sort decrescente
 	for (j=9; j>0; j--){
 		
 		for (i=0; i<j; i++){

 			if (vetor[i] < vetor[i+1]){
 				temp = vetor[i];
 				vetor[i] = vetor[i+1];
 				vetor[i+1] = temp;
 			}
 				
 		}
 			
 	}
 	
 	printf("Vetor ordenado em ordem decrescente através de bubble sort: ");
 	for(i=0; i<10; i++)
 		printf("%d|", vetor[i]);
	
	return 0;
}
