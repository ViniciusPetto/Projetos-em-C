#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int grau, i;
	float x, resultado = 0;
	
	printf("Digite o maior grau do polinomio: ");
	scanf("%d", &grau);
	
	float* p = (float*)malloc((grau+1)*sizeof(float));
	
	printf("Digite os coeficientes do polinomio em ordem decrescente de grau (x^0, x^n-1 ... x^n):\n");
	for(i=0;i<=grau;i++)
		scanf("%f", &p[i]);
	
	printf("Digite o valor de X:");
	scanf("%f", &x);
	
	for(i=0;i<=grau;i++)
		resultado += (p[i] * pow(x, i));
	
	printf("Resultado: %.2f\n", resultado);
	
	return 0;
}
