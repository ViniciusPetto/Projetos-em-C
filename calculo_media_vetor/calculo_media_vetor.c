#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int i;
	float media=0, notas[30];
	
	printf("Digite as 30 notas, para que sejam calculadas as médias:\n");
	for(i=0; i<30; i++){
		scanf("%f", &notas[i]);
	}
	
	for(i=0; i<30; i++)
		media += notas[i];
		
	media /= 30;
	
	printf("A média da turma foi de %.2f\n\n", media);
	for(i=0; i<30; i++){
		if(notas[i] >= media)
			printf("O aluno %d teve uma nota %.2f (na média ou acima dela)\n", i+1, notas[i]);
	}
	
	return 0;
}
