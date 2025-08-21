#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int vet[20], n = 1, i, j, temp;
	
	//c�lculo de 20 n�meros inteiros elevados ao quadrado e sendo armazenados em um vetor
	for(i = 0; i < 20; i++){
		vet[i] = n * n;
		n++;	
	}
	
	//ordena��o do vetor descrescente (bubble sort)
	
	/*serve para que a ordena��o do vetor se repita at� que 
	todas as posi��es estejam ordenadas, sem isso, o vetor 
	seria organizado apenas uma �nica vez, e as demais posi��es 
	continuariam fora de ordem*/
	for(j=19; j>0; j--){
		
		//ordena��o do vetor, de posi��o em posi��o
		for(i=0; i<j; i++){
			
			//caso o n�mero seguinte seja menor que o atual, um troca de posi��o com o outro
			if(vet[i] < vet[i+1]){
				temp = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = temp;
			}
				
		}
		
	}
	
	//exibi��o o vetor ordenado, pelo bubble sort, de forma descrescente
	for(i = 0; i < 20; i++)
		printf("Teste: %d\n", vet[i]);
	
	
	return 0;
}
