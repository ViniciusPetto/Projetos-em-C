#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int qtd_cidades, i, indice_cara, indice_barata;
	float cidade_cara = 0, cidade_barata = INT_MAX, total_gasto = 0;
	
	printf("Digite o número de cidade que você já visitou: ");
	scanf("%d", &qtd_cidades);
	
	char cidades[qtd_cidades][35];
	float gasto[qtd_cidades];
	
	for(i=0; i<qtd_cidades; i++){
		getchar();
		printf("\nDigite o nome da cidade %d: ", i+1);
		fgets(cidades[i],34,stdin);
		
		printf("Digite o gasto da cidade %d: ", i+1);
		scanf("%f", &gasto[i]);
	}
	
	for(i=0; i<qtd_cidades; i++){
		if(gasto[i] > cidade_cara){
			cidade_cara = gasto[i];
			indice_cara = i;
		}
		
		if(gasto[i] < cidade_barata){
			cidade_barata = gasto[i];
			indice_barata = i;
		}
		
		total_gasto += gasto[i];
	}
	
	printf("A cidade mais cara foi %s com um gasto de R$ %.2f\n", cidades[indice_cara], cidade_cara);
	printf("A cidade mais barata foi %s com um gasto de R$ %.2f\n", cidades[indice_barata], cidade_barata);
	printf("O gasto total das %d cidades foi de R$ %.2f\n", qtd_cidades, total_gasto);
	
	return 0;
}
