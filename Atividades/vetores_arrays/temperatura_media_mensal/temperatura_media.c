#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	float temp_media[12], temp_media_max=-280, temp_media_min=150;
	int i, mes_max, mes_min;
	
	printf("Digite as temperaturas m�dias dos 12 meses do �ltimo ano em ordem (de janeiro � dezembro):\n");
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
			printf("A m�dia m�xima de temperatura no �ltimo ano foi no m�s janeiro e foi de %.2f�C\n", temp_media_max);			
			break;
			
		case 2:
			printf("A m�dia m�xima de temperatura no �ltimo ano foi no m�s fevereiro e foi de %.2f�C\n", temp_media_max);			
			break;
			
		case 3:
			printf("A m�dia m�xima de temperatura no �ltimo ano foi no m�s mar�o e foi de %.2f�C\n", temp_media_max);			
			break;
			
		case 4:
			printf("A m�dia m�xima de temperatura no �ltimo ano foi no m�s abril e foi de %.2f�C\n", temp_media_max);			
			break;
			
		case 5:
			printf("A m�dia m�xima de temperatura no �ltimo ano foi no m�s maio e foi de %.2f�C\n", temp_media_max);			
			break;
			
		case 6:
			printf("A m�dia m�xima de temperatura no �ltimo ano foi no m�s junho e foi de %.2f�C\n", temp_media_max);			
			break;
			
		case 7:
			printf("A m�dia m�xima de temperatura no �ltimo ano foi no m�s julho e foi de %.2f�C\n", temp_media_max);			
			break;
			
		case 8:
			printf("A m�dia m�xima de temperatura no �ltimo ano foi no m�s agosto e foi de %.2f�C\n", temp_media_max);			
			break;
			
		case 9:
			printf("A m�dia m�xima de temperatura no �ltimo ano foi no m�s setembro e foi de %.2f�C\n", temp_media_max);			
			break;
			
		case 10:
			printf("A m�dia m�xima de temperatura no �ltimo ano foi no m�s outubro e foi de %.2f�C\n", temp_media_max);			
			break;
			
		case 11:
			printf("A m�dia m�xima de temperatura no �ltimo ano foi no m�s novembro e foi de %.2f�C\n", temp_media_max);			
			break;
			
		case 12:
			printf("A m�dia m�xima de temperatura no �ltimo ano foi no m�s dezembro e foi de %.2f�C\n", temp_media_max);			
			break;
	}
	
	
	
	switch(mes_min){
		case 1:			
			printf("A m�dia m�nima de temperatura no �ltimo ano foi no m�s janeiro e foi de %.2f�C\n", temp_media_min);
			break;
			
		case 2:			
			printf("A m�dia m�nima de temperatura no �ltimo ano foi no m�s fevereiro e foi de %.2f�C\n", temp_media_min);
			break;
			
		case 3:			
			printf("A m�dia m�nima de temperatura no �ltimo ano foi no m�s mar�o e foi de %.2f�C\n", temp_media_min);
			break;
			
		case 4:			
			printf("A m�dia m�nima de temperatura no �ltimo ano foi no m�s abril e foi de %.2f�C\n", temp_media_min);
			break;
			
		case 5:			
			printf("A m�dia m�nima de temperatura no �ltimo ano foi no m�s maio e foi de %.2f�C\n", temp_media_min);
			break;
			
		case 6:			
			printf("A m�dia m�nima de temperatura no �ltimo ano foi no m�s junho e foi de %.2f�C\n", temp_media_min);
			break;
			
		case 7:			
			printf("A m�dia m�nima de temperatura no �ltimo ano foi no m�s julho e foi de %.2f�C\n", temp_media_min);
			break;
			
		case 8:			
			printf("A m�dia m�nima de temperatura no �ltimo ano foi no m�s agosto e foi de %.2f�C\n", temp_media_min);
			break;
			
		case 9:			
			printf("A m�dia m�nima de temperatura no �ltimo ano foi no m�s setembro e foi de %.2f�C\n", temp_media_min);
			break;
			
		case 10:			
			printf("A m�dia m�nima de temperatura no �ltimo ano foi no m�s outubro e foi de %.2f�C\n", temp_media_min);
			break;
			
		case 11:			
			printf("A m�dia m�nima de temperatura no �ltimo ano foi no m�s novembro e foi de %.2f�C\n", temp_media_min);
			break;
			
		case 12:			
			printf("A m�dia m�nima de temperatura no �ltimo ano foi no m�s dezembro e foi de %.2f�C\n", temp_media_min);
			break;
	}
		
	return 0;
}
