#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	typedef struct banda{
		char nome[50], genero[50];
		int integrantes, seg_twitter, seg_spotify, engajamento;
	}banda;
	
	int i, max_engajamento=0;
	banda vet_banda[2];
	char genero_busca[50];
	
	for(i=0; i<2; i++){
		printf("Digite o nome da banda %d: ",i+1);
		fgets(vet_banda[i].nome, 50, stdin);
		
		printf("Digite o gênero da banda %d: ",i+1);
		fgets(vet_banda[i].genero, 50, stdin);
		
		printf("Digite a quantidade de integrantes da banda %d: ",i+1);
		scanf("%d", &vet_banda[i].integrantes);
		
		printf("Digite a quantidade de seguidores no Twitter(X) da banda %d: ",i+1);
		scanf("%d", &vet_banda[i].seg_twitter);
		
		printf("Digite a quantidade de ouvintes no Spotify da banda %d: ",i+1);
		scanf("%d", &vet_banda[i].seg_spotify);
		
		vet_banda[i].engajamento = vet_banda[i].seg_twitter + vet_banda[i].seg_spotify;
		
		getchar();
		printf("\n");
	}
	
	printf("Digite o gênero que deseja encontrar a banda: ");
	fgets(genero_busca, 50, stdin);
	
	printf("\nBandas encontradas:\n");
	for(i=0; i<2; i++){
		if(strcmp(genero_busca, vet_banda[i].genero) == 0){
			printf("%s", vet_banda[i].nome);
		}
	}
	
	for(i=0; i<2; i++){
		if(max_engajamento < vet_banda[i].engajamento){
			max_engajamento = vet_banda[i].engajamento;
		}
	}
	
	for(i=0; i<2; i++){
		if(max_engajamento == vet_banda[i].engajamento){
			printf("\nBanda com maior engajamento: %s\nEngajamento (Twitter(X) + Spotify): %d", vet_banda[i].nome, vet_banda[i].engajamento);
		}
	}
	
	return 0;
}
