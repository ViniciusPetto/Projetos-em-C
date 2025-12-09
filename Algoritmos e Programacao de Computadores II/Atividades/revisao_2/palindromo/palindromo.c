#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	char p1[21], p2[21], p2_invertida[21];
	int i, j;
	
	printf("Digite a primeira palavra: ");
	scanf("%s", p1);
	
	printf("Digite a segunda palavra: ");
	scanf("%s", p2);
	
	j = strlen(p2) - 1;
	
	for(i=0; i<strlen(p2); i++){
		p2_invertida[i] = p2[j];
		j--;
	}
	p2_invertida[i] = '\0';
	
	if(strcmp(p1, p2_invertida) == 0){
		printf("\nA duas palavras digitadas são palíndromos!\n");
	}
	else{
		printf("\nA duas palavras digitadas não são palíndromos!\n");
	}
	
	return 0;
}
