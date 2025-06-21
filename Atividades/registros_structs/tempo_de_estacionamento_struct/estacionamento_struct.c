#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	typedef struct time{
		int hora;
		int minuto;
		int segundo;
	}Tempo;
	
	typedef struct control{
		char placa[9];
		char marca[20];
		Tempo entrada;
		Tempo saida;
	}Controle;
	
	Controle veiculos[1];
	int i;
	
	/*leitura das informações do veículo, horário de entrada e saída do estacionamento*/
	for(i=0; i<1; i++){
		printf("Digite a placa do carro: ");
		fgets(veiculos[i].placa, 9, stdin);
		
		printf("Digite a marca do carro: ");
		fgets(veiculos[i].marca, 20, stdin);
		
		printf("Digite o horário exato que o carro entrou no estacionamento no seguinte formato (HORAS MINUTOS SEGUNDOS): ");
		scanf("%d %d %d", &veiculos[i].entrada.hora, &veiculos[i].entrada.minuto, &veiculos[i].entrada.segundo);
		
		printf("Digite o horário exato que o carro saiu do estacionamento no seguinte formato (HORAS MINUTOS SEGUNDOS): ");
		scanf("%d %d %d", &veiculos[i].saida.hora, &veiculos[i].saida.minuto, &veiculos[i].saida.segundo);
	}
	
	for(i=0; i<1; i++){
		/*Se os segundos de saída forem menores que os de entrada:
		Tira 1 minuto da saída, ou seja: saida.minuto -= 1
		Transforma esse 1 minuto em 60 segundos e adiciona aos segundos de saída: saida.segundo += 60
		Agora sim: saida.segundo - entrada.segundo será positivo.*/
		if(veiculos[i].saida.segundo < veiculos[i].entrada.segundo){
			veiculos[i].saida.segundo += 60;
			veiculos[i].saida.minuto -= 1;
		}
		/*Se os minutos de saída forem menores que os de entrada:
		Tira 1 hora da saída, ou seja: saida.hora -= 1
		Transforma essa 1 hora em 60 minutos e adiciona aos minutos de saída: saida.minuto += 60
		Agora sim: saida.minuto - entrada.minuto será positivo.*/
		if(veiculos[i].saida.minuto < veiculos[i].entrada.minuto){
			veiculos[i].saida.minuto += 60;
			veiculos[i].saida.hora -= 1;
		}
		/*Exibição dos dados do veículo e o cálculo correto do tempo de permanência no estacionamento
		(diferença entre o horário de saída e entrada)*/
		printf("\nInformações do veículo\nPlaca: %sMarca: %sTempo de permanência: %02d:%02d:%02d\n", veiculos[i].placa, veiculos[i].marca, (veiculos[i].saida.hora - veiculos[i].entrada.hora), (veiculos[i].saida.minuto - veiculos[i].entrada.minuto), (veiculos[i].saida.segundo - veiculos[i].entrada.segundo));
	}
	
	return 0;
}
