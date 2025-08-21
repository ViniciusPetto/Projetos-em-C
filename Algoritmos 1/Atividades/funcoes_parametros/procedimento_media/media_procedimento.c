#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void media(float* nota1, float* nota2, char* tipo_media);

int main(){
	setlocale(LC_ALL, "portuguese");
	float n1, n2;
	char tipo;
	
	printf("Digite a nota 1: ");
	scanf("%f", &n1);
	
	printf("Digite a nota 2: ");
	scanf("%f", &n2);
	
	getchar();
	
	printf("Digite o tipo de média que deseja calcular (A - média aritmética | B - média geométrica): ");
	scanf("%c", &tipo);
	
	media(&n1, &n2, &tipo);
	
	printf("A média do aluno é: %.2f", n1);
	
	return 0;
}

void media(float* nota1, float* nota2, char* tipo_media){
	switch(*tipo_media){
		case 'A':
			*nota1 = (*nota1 + *nota2)/2;
			break;
			
		case 'B':
			*nota1 = sqrt((*nota1 * *nota2));
			break;
	}
}
