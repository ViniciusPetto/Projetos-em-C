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
	
	printf("Digite o tipo de m�dia que deseja calcular (A - m�dia aritm�tica | B - m�dia geom�trica): ");
	scanf("%c", &tipo);
	
	media(&n1, &n2, &tipo);
	
	printf("A m�dia do aluno �: %.2f", n1);
	
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
