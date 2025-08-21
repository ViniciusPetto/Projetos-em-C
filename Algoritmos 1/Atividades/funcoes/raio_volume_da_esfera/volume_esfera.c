#include <stdio.h>

float voluma_esfera(float r){ 
	return (((4.0/3.0)*3.14159)*(r*r*r));
}

int main() {
	float raio;
	
	scanf("%f", &raio);
	
	printf("%.2f\n", voluma_esfera(raio));
	return 0;
}
