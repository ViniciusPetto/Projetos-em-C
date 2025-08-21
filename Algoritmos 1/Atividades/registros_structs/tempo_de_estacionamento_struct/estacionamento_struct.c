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
	
	/*leitura das informa��es do ve�culo, hor�rio de entrada e sa�da do estacionamento*/
	for(i=0; i<1; i++){
		printf("Digite a placa do carro: ");
		fgets(veiculos[i].placa, 9, stdin);
		
		printf("Digite a marca do carro: ");
		fgets(veiculos[i].marca, 20, stdin);
		
		printf("Digite o hor�rio exato que o carro entrou no estacionamento no seguinte formato (HORAS MINUTOS SEGUNDOS): ");
		scanf("%d %d %d", &veiculos[i].entrada.hora, &veiculos[i].entrada.minuto, &veiculos[i].entrada.segundo);
		
		printf("Digite o hor�rio exato que o carro saiu do estacionamento no seguinte formato (HORAS MINUTOS SEGUNDOS): ");
		scanf("%d %d %d", &veiculos[i].saida.hora, &veiculos[i].saida.minuto, &veiculos[i].saida.segundo);
	}
	
	for(i=0; i<1; i++){
		/*Se os segundos de sa�da forem menores que os de entrada:
		Tira 1 minuto da sa�da, ou seja: saida.minuto -= 1
		Transforma esse 1 minuto em 60 segundos e adiciona aos segundos de sa�da: saida.segundo += 60
		Agora sim: saida.segundo - entrada.segundo ser� positivo.*/
		if(veiculos[i].saida.segundo < veiculos[i].entrada.segundo){
			veiculos[i].saida.segundo += 60;
			veiculos[i].saida.minuto -= 1;
		}
		/*Se os minutos de sa�da forem menores que os de entrada:
		Tira 1 hora da sa�da, ou seja: saida.hora -= 1
		Transforma essa 1 hora em 60 minutos e adiciona aos minutos de sa�da: saida.minuto += 60
		Agora sim: saida.minuto - entrada.minuto ser� positivo.*/
		if(veiculos[i].saida.minuto < veiculos[i].entrada.minuto){
			veiculos[i].saida.minuto += 60;
			veiculos[i].saida.hora -= 1;
		}
		/*Exibi��o dos dados do ve�culo e o c�lculo correto do tempo de perman�ncia no estacionamento
		(diferen�a entre o hor�rio de sa�da e entrada)*/
		printf("\nInforma��es do ve�culo\nPlaca: %sMarca: %sTempo de perman�ncia: %02d:%02d:%02d\n", veiculos[i].placa, veiculos[i].marca, (veiculos[i].saida.hora - veiculos[i].entrada.hora), (veiculos[i].saida.minuto - veiculos[i].entrada.minuto), (veiculos[i].saida.segundo - veiculos[i].entrada.segundo));
	}
	
	return 0;
}
