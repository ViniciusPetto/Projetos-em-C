#include <stdio.h>
#include <stdlib.h>
//bibliotecal para usar a fun��o setlocale()
#include <locale.h>
//biblioteca para usar a fun��o toupper()
#include <ctype.h>

int main() {
	//serve para que o printf utilize caracteres especiais como �, `, @, etc
	setlocale(LC_ALL, "portuguese");
	
	int idade;
	float altura;
	char sexo;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite sua altura, no seguinte padr�o: metros,cent�metos: ");
	scanf("%f", &altura);
	
	//"limpa" o buffer do teclado para que seja poss�vel inserir uma informa��o na vari�vel "sexo"
	fflush(stdin);
	
	printf("Digite seu sexo, no seguinte padr�o: M (para masculinho), F (para feminino): ");
	scanf("%c", &sexo);
	
	//toupper() serve para deixar a letra ou a palavra dentro da vari�vel totalmente mai�scula
	if(toupper(sexo) == 'M' && idade >= 0)
		printf("Voc� tem %d anos, %.2f metros de altura e � do sexo %c (Masculino).\n", idade, altura, toupper(sexo));
	else if(toupper(sexo) == 'F' && idade >= 0)
		printf("Voc� tem %d anos, %.2f metros de altura e � do sexo %c (Feminino).\n", idade, altura, toupper(sexo));
	else
		printf("Voc� digitou uma letra para o campo 'sexo'  inv�lida, ou um valor para o campo idade inv�lidade.\n");
	
	return 0;
}
