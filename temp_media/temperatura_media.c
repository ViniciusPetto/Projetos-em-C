#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	float temp_media[12], temp_media_max=-280, temp_media_min=150;
	int i, mes_max, mes_min;
	
	printf("Digite as temperaturas médias dos 12 meses do último ano em ordem (de janeiro à dezembro):\n");
	for(i=0; i<12; i++)
		scanf("%f", &temp_media[i]);
		
	for(i=0; i<12; i++){
		
		if(temp_media[i] > temp_media_max){
			temp_media_max = temp_media[i];
			mes_max = i+1;
		}
			
	}
	
	for(i=0; i<12; i++){
		
		if(temp_media[i] < temp_media_min){
			temp_media_min = temp_media[i];
			mes_min = i+1;
		}
		
	}
	
	switch(mes_max){
		case 1:
			printf("A média máxima de temperatura no último ano foi no mês janeiro e foi de %.2f°C\n", temp_media_max);			
			break;
			
		case 2:
			printf("A média máxima de temperatura no último ano foi no mês fevereiro e foi de %.2f°C\n", temp_media_max);			
			break;
			
		case 3:
			printf("A média máxima de temperatura no último ano foi no mês março e foi de %.2f°C\n", temp_media_max);			
			break;
			
		case 4:
			printf("A média máxima de temperatura no último ano foi no mês abril e foi de %.2f°C\n", temp_media_max);			
			break;
			
		case 5:
			printf("A média máxima de temperatura no último ano foi no mês maio e foi de %.2f°C\n", temp_media_max);			
			break;
			
		case 6:
			printf("A média máxima de temperatura no último ano foi no mês junho e foi de %.2f°C\n", temp_media_max);			
			break;
			
		case 7:
			printf("A média máxima de temperatura no último ano foi no mês julho e foi de %.2f°C\n", temp_media_max);			
			break;
			
		case 8:
			printf("A média máxima de temperatura no último ano foi no mês agosto e foi de %.2f°C\n", temp_media_max);			
			break;
			
		case 9:
			printf("A média máxima de temperatura no último ano foi no mês setembro e foi de %.2f°C\n", temp_media_max);			
			break;
			
		case 10:
			printf("A média máxima de temperatura no último ano foi no mês outubro e foi de %.2f°C\n", temp_media_max);			
			break;
			
		case 11:
			printf("A média máxima de temperatura no último ano foi no mês novembro e foi de %.2f°C\n", temp_media_max);			
			break;
			
		case 12:
			printf("A média máxima de temperatura no último ano foi no mês dezembro e foi de %.2f°C\n", temp_media_max);			
			break;
	}
	
	
	
	switch(mes_min){
		case 1:			
			printf("A média mínima de temperatura no último ano foi no mês janeiro e foi de %.2f°C\n", temp_media_min);
			break;
			
		case 2:			
			printf("A média mínima de temperatura no último ano foi no mês fevereiro e foi de %.2f°C\n", temp_media_min);
			break;
			
		case 3:			
			printf("A média mínima de temperatura no último ano foi no mês março e foi de %.2f°C\n", temp_media_min);
			break;
			
		case 4:			
			printf("A média mínima de temperatura no último ano foi no mês abril e foi de %.2f°C\n", temp_media_min);
			break;
			
		case 5:			
			printf("A média mínima de temperatura no último ano foi no mês maio e foi de %.2f°C\n", temp_media_min);
			break;
			
		case 6:			
			printf("A média mínima de temperatura no último ano foi no mês junho e foi de %.2f°C\n", temp_media_min);
			break;
			
		case 7:			
			printf("A média mínima de temperatura no último ano foi no mês julho e foi de %.2f°C\n", temp_media_min);
			break;
			
		case 8:			
			printf("A média mínima de temperatura no último ano foi no mês agosto e foi de %.2f°C\n", temp_media_min);
			break;
			
		case 9:			
			printf("A média mínima de temperatura no último ano foi no mês setembro e foi de %.2f°C\n", temp_media_min);
			break;
			
		case 10:			
			printf("A média mínima de temperatura no último ano foi no mês outubro e foi de %.2f°C\n", temp_media_min);
			break;
			
		case 11:			
			printf("A média mínima de temperatura no último ano foi no mês novembro e foi de %.2f°C\n", temp_media_min);
			break;
			
		case 12:			
			printf("A média mínima de temperatura no último ano foi no mês dezembro e foi de %.2f°C\n", temp_media_min);
			break;
	}
		
	return 0;
}
