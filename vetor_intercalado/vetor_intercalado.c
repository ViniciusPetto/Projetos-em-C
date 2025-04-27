#include <stdio.h>

int main() {
	int vet1[10], vet2[10], i;
	
	printf("Digite 20 valores para que eles sejam intercalados:\n");
	for(i=0; i<10; i++)
		scanf("%d", &vet1[i]);	
	
	for(i=0; i<10; i++)
		scanf("%d", &vet2[i]);
		
	for(i=0; i<10; i++)
		printf("%d|%d|",vet1[i], vet2[i]);
		
	printf("\n");
	
	return 0;
}
