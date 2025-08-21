#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int vet[20], n = 1, i, j, temp;
	
	//cálculo de 20 números inteiros elevados ao quadrado e sendo armazenados em um vetor
	for(i = 0; i < 20; i++){
		vet[i] = n * n;
		n++;	
	}
	
	//ordenação do vetor descrescente (bubble sort)
	
	/*serve para que a ordenação do vetor se repita até que 
	todas as posições estejam ordenadas, sem isso, o vetor 
	seria organizado apenas uma única vez, e as demais posições 
	continuariam fora de ordem*/
	for(j=19; j>0; j--){
		
		//ordenação do vetor, de posição em posição
		for(i=0; i<j; i++){
			
			//caso o número seguinte seja menor que o atual, um troca de posição com o outro
			if(vet[i] < vet[i+1]){
				temp = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = temp;
			}
				
		}
		
	}
	
	//exibição o vetor ordenado, pelo bubble sort, de forma descrescente
	for(i = 0; i < 20; i++)
		printf("Teste: %d\n", vet[i]);
	
	
	return 0;
}
