#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

float derivada(float *coef, int grau, float x);

int main() {
	setlocale(LC_ALL, "portuguese");
	int grau, i;
	float x, resultado = 0, resultado_derivada;
	
	//lendo o grau do polin�mio
	printf("Digite o maior grau do polin�mio: ");
	scanf("%d", &grau);
	
	float* p = (float*)malloc((grau+1)*sizeof(float));
	
	//lendo os coeficientes
	printf("Digite os coeficientes do seu polin�mio:\n");
	for(i=0; i<=grau; i++)
		scanf("%f", &p[i]);
	
	//lendo o valor de x
	printf("Digite o valor para X: ");	
	scanf("%f", &x);
	
	//calculando o resultado polin�mio e exibindo
	for(i=0; i<=grau; i++)
		resultado += (p[i] * pow(x, i));
	
	printf("\nResultado do polin�mio: %.2f\n", resultado);
	
	//chamando a fun��o que calcula a derivada e o retorno no resultado
	resultado_derivada = derivada(p, grau, x);
	
	printf("Derivada no ponto X = %.2f -> %.2f\n", x, resultado_derivada);
    
    //libera��o de mem�ria
    free(p);
	
	return 0;
}

float derivada(float *coef, int grau, float x) {
    float resultado = 0;
    int i;
    
    /*i � o expoente
	coef[i] � o n�mero que multiplica o termo
	pow(x, i - 1) � o x^n-1 que sobra na derivada
	esse valor � somado ao total em resultado*/
    for(i = 1; i <= grau; i++)
        resultado += i * coef[i] * pow(x, i - 1);
        
    return resultado;
}
