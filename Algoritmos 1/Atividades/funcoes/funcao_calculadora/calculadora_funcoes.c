#include <stdio.h>
#include <math.h>

float soma(float x, float y);
float subtracao(float x, float y);
float multiplicacao(float x, float y);
float divisao(float x, float y);
float potenciacao(float x, float y);

int main() {
	float op1, op2;
	char operador;
	
	scanf("%f%c%f", &op1, &operador, &op2);
	
	switch(operador){
		
		case '+':
			printf("%.3f\n", soma(op1, op2));
			break;
			
		case '-':
			printf("%.3f\n", subtracao(op1, op2));
			break;
			
		case '*':
			printf("%.3f\n", multiplicacao(op1, op2));
			break;

		case '/':
			printf("%.3f\n", divisao(op1, op2));
			break;
			
		case '^':
			printf("%.3f\n", potenciacao(op1, op2));
			break;

	}
	
	return 0;
}

float soma(float x, float y){
	return x+y;	
}

float subtracao(float x, float y){
	return x-y;	
}

float multiplicacao(float x, float y){
	return x*y;	
}

float divisao(float x, float y){
	return x/y;	
}

float potenciacao(float x, float y){
	return pow(x, y);
}
