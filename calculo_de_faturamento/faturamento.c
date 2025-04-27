#include <stdio.h>

int main() {
	
	int produtos[10], totalProd=0, i;
	float valores[10], faturamento=0;
	
	printf("Digite a quantidade de 10 produtos:\n");
	for(i=0; i<10; i++)
		scanf("%d", &produtos[i]);
		
	printf("Digite os respectivos valores desses 10 produtos:\n");
	for(i=0; i<10; i++)
		scanf("%f", &valores[i]);
		
	for(i=0; i<10; i++){
		totalProd += produtos[i];
		faturamento += (produtos[i]*valores[i]);
	}
		
	printf("O faturamento foi de R$ %.2f e a quantidade de produtos vendidos foi de %d\n", faturamento, totalProd);
	
	return 0;
}
