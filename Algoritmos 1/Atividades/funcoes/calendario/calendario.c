#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calendario(int total_dias, int dia_semana);

int main(){
	setlocale(LC_ALL, "portuguese");
	int dias, dia_semana;
	
	printf("Digite o total de dias de um m�s: ");
	scanf("%d", &dias);
	
	printf("Digite em que dia da semana o m�s se inicia:\n0 - domingo\n1 - segunda-feira\n2 - ter�a-feira\n3 - quarta-feira\n4 - quinta-feira\n5 - sexta-feira\n6 - s�bado\n");
	scanf("%d", &dia_semana);
	
	calendario(dias, dia_semana);
	
	return 0;
}

void calendario(int total_dias, int dia_semana){
	int i, coluna=0;
	
	/*imprime o cabe�alho do calend�rio de forma fixa*/
	printf("----------------------------------------------------\n");
	printf("|dom\tseg\tter\tqua\tqui\tsex\ts�b|\n");
	
	/*conforme o dia da semana selecionado para come�ar, colocamos um risco nos dias anteriores e,
	atualizamos o valor da colunas para que haja quebra de linha no dia correta, ou seja, a troca
	da semana*/
	switch(dia_semana){
		case 0:
			printf("|");
			coluna = 1;
			break;
		case 1:
			printf("|--\t");
			coluna = 2;
			break;
			
		case 2:
			printf("|--\t--\t");
			coluna = 3;
			break;
			
		case 3:
			printf("|--\t--\t--\t");
			coluna = 4;
			break;
			
		case 4:
			printf("|--\t--\t--\t--\t");
			coluna = 5;
			break;
			
		case 5:
			printf("|--\t--\t--\t--\t--\t");
			coluna = 6;
			break;
			
		case 6:
			printf("|--\t--\t--\t--\t--\t--\t");
			coluna = 7;
			break;
			
		default:
			break;
	}
	
	/*caso a coluna chegue ao final da semana, ela mostra o �ltimo dia, seguido de uma barra,
	uma quebra de linha e outra barra para iniciar a nova semana, mostrando os dias corretos
	conforme a semana � atualizada*/
	for(i=1; i<=total_dias; i++){
		if(coluna == 7){
			printf("%02d |\n|", i);
			coluna = 0;
		}
		else{
			printf("%02d\t", i);
		}
		coluna++;
	}
	
	
	/*quando chegamos ao final do m�s, fazemos o oposto do in�cio, colocando riscos nos dias
	seguintes que faltaram para completar a semana*/
	switch(coluna){
		case 7:
			printf("-- |");
			break;
			
		case 6:
			printf("--\t-- |");
			break;
			
		case 5:
			printf("--\t--\t-- |");
			break;
			
		case 4:
			printf("--\t--\t--\t-- |");
			break;
			
		case 3:
			printf("--\t--\t--\t--\t-- |");
			break;
			
		case 2:
			printf("--\t--\t--\t--\t--\t-- |");
			break;
			
		case 1:
			printf("--\t--\t--\t--\t--\t--\t-- |");
			break;
			
		default:
			break;
	}
	
	/*rodap� do calend�rio*/
	printf("\n----------------------------------------------------\n");
}
