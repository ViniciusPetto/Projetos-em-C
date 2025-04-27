#include <stdio.h>

int main() {
	
	float notas[20], pesquisa=0, contador=0;
	int i;
	
	printf("Digite 20 notas:\n");
	//Preenchendo o vetor com as 20 notas
	for(i=0; i<20; i++){
		
		scanf("%f", &notas[i]);
		
	}
	
	printf("Digite uma nota que voce deseja pesquisar se foi digitada (digite -1 para sair):\n");
	//Enquanto a variável pesquisa for maior que 0, o loop continua
	while(pesquisa>=0){
		
		scanf("%f", &pesquisa);
		
		if(pesquisa<0){
			break;
		}
		
		//Verificando se a nota que o usuário digitou está dentro do vetor
		for(i=0; i<20; i++){
			
			if(notas[i] == pesquisa){
				contador++;
			}
			
		}
		
		//Caso o contador fique em 0, não existe a nota digitada pelo usuário, caso contrário, ela existe
		if(contador == 0){
			printf("nao existe\n");
		}
		else{
			printf("existe\n");
		}
		
		contador=0;
		
	}
	return 0;
}
