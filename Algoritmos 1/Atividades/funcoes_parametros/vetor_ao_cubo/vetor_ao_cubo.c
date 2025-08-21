#include <stdio.h>
#include <math.h>
#define tam 10

int vet_ao_cubo(int vetA[tam], int vetB[tam], int i);

int main(){
	int vetA[tam], vetB[tam], i;
	
	for(i=0; i<tam; i++)
		scanf("%d", &vetA[i]);
	
	for(i=0; i<tam; i++)
		printf("%d\n", vet_ao_cubo(vetA, vetB, i));
	
	return 0;
}

int vet_ao_cubo(int vetA[tam], int vetB[tam], int i){
	vetB[i] = pow(vetA[i], 3);
	
	return vetB[i];
}
