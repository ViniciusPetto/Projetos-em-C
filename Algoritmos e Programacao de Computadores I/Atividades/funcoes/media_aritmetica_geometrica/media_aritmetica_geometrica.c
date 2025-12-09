#include <stdio.h>
#include <math.h>

float media(char m, float x, float y);

int main() {
	char tipo_media;
	float nota1, nota2;
	
	scanf("%c", &tipo_media);
	scanf("%f %f", &nota1, &nota2);
	
	printf("%.3f\n", media(tipo_media, nota1, nota2));
	
	return 0;
}

float media(char m, float x, float y) {
	if(m == 'A'){
		return (x+y)/2;
	}
	else if(m == 'B'){
		return sqrt(x*y);
	}
}
