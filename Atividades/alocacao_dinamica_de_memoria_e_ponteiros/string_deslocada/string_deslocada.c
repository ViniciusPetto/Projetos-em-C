#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char* string_deslocada(char str[], int n);

int main(){
	setlocale(LC_ALL, "portuguese");
	int n;
	char* str;
	
	printf("Digite qual ser� o tamanho da sua string (n�mero de letras): ");
	scanf("%d", &n);
	
	//alocando dinamicamente a string
	str = (char*) malloc(n+1*sizeof(char));
	
	getchar();
	
	printf("Digite sua string: ");
	fgets(str, n+1, stdin);
	
	//exibindo a string deslocada
	printf("%s", string_deslocada(str, n));
	
	return 0;
}

//fun��o que desloca a string e coloca o �ltimo caracter no primeiro
char* string_deslocada(char str[], int n){
	char* str_nova;
	int i;
	
	//alocando dinamicamente a string deslocada
	str_nova = (char*) malloc(n+1*sizeof(char));
	
	/*str_nova na posi��o 0 rececebe o que est� na string original na �ltima posi��o*/
	str_nova[0] = str[n-1];
	
	/*� copiado o que est� na string original da posi��o 0 em dia para a string deslocada,
	da posi��o 1 em diante, pois na posi��o 0 j� tem uma letra preenchendo*/
	for(i=1; i<n; i++){
		str_nova[i] = str[i-1];
	}
	
	//retorna a string deslocada
	return str_nova;
}
