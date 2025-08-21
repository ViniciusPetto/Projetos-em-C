#include <stdio.h>
#include <stdlib.h>
//bibliotecal para usar a função setlocale()
#include <locale.h>
//biblioteca para usar a função toupper()
#include <ctype.h>

int main() {
	//serve para que o printf utilize caracteres especiais como ç, `, @, etc
	setlocale(LC_ALL, "portuguese");
	
	int idade;
	float altura;
	char sexo;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite sua altura, no seguinte padrão: metros,centímetos: ");
	scanf("%f", &altura);
	
	//"limpa" o buffer do teclado para que seja possível inserir uma informação na variável "sexo"
	fflush(stdin);
	
	printf("Digite seu sexo, no seguinte padrão: M (para masculinho), F (para feminino): ");
	scanf("%c", &sexo);
	
	//toupper() serve para deixar a letra ou a palavra dentro da variável totalmente maiúscula
	if(toupper(sexo) == 'M' && idade >= 0)
		printf("Você tem %d anos, %.2f metros de altura e é do sexo %c (Masculino).\n", idade, altura, toupper(sexo));
	else if(toupper(sexo) == 'F' && idade >= 0)
		printf("Você tem %d anos, %.2f metros de altura e é do sexo %c (Feminino).\n", idade, altura, toupper(sexo));
	else
		printf("Você digitou uma letra para o campo 'sexo'  inválida, ou um valor para o campo idade inválidade.\n");
	
	return 0;
}
