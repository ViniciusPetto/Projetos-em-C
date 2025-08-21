#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	typedef struct aluno{
		char nome[101];
		int ra;
		float notaP1;
		float notaP2;	
	}dados;
	
	int n, i;
	dados* alunos;
	
	scanf("%d", &n);
	
	alunos = (dados*) malloc(n*sizeof(dados));
	
	for(i=0; i<n; i++){
		getchar();
		fgets(alunos[i].nome, 101, stdin);
		alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';
		
		scanf("%d", &alunos[i].ra);
		scanf("%f", &alunos[i].notaP1);
		scanf("%f", &alunos[i].notaP2);
	}
	
	for(i=0; i<n; i++){
		printf("%d\t%s\t%.2f\n", alunos[i].ra, alunos[i].nome, ((alunos[i].notaP1 + alunos[i].notaP2) / 2));
	}	
	return 0;
}
