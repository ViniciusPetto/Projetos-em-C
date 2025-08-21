#include <stdio.h>
#include <locale.h>

/*Exerc�cio: Coletar um n�mero digitado pelo usu�rio, que vir� em uma base TMTL e converter para base 10:
Exemplo: Usu�rio digita 719 -> 7 est� na posi��o 3, 1 est� na posi��o 2 e 9 est� na posi��o 1. Fazer fatorial
de 3 e depois multiplicar por 7, depois fazer fatorial de 2 e depois multiplicar por 1, e por fim fazer fatorial
de 1 e depois multiplicar por 9. O resultado da convers�o para a base 10 se dar� pela soma de todas essas multiplica��es
entre si: 719 base TMTL = 53 base 10*/

int main() {
	//Fun��o para que o printf aceite caracteres especiais
	setlocale(LC_ALL, "Portuguese");
	
	while(1){
		/*Descri��o das Vari�veis
		
		->num: recebe o que o usu�rio digitar
		->copia: c�pia da vari�vel num para que seja poss�vel realizar opera��es com num
		sem perder seu valor original
		->digito: coleta digito por digito do n�mero digitado pelo usu�rio
		->posicao: coleta a posi��o do digito do respectivo n�mero
		->fatorial: armazena o calculo do fatorial do valor da posi��o
		->resultado: armazena o resultado final, feito a partir da multiplica��o entre o digito e o fatorial
		primeiro, e depois a soma dessa multi�ica��o com a multiplica��o do digito e fatorial dos pr�ximos
		n�meros*/
		int num, copia, digito, posicao = 1, fatorial = 1, resultado = 0;
		
		printf("Digite um n�mero inteiro positivo (maximo 9999). Ou digite '-1' para sair:\n");
		scanf("%d", &num);
		
		/*Caso o n�mero seja maior que 9999, o c�digo exibir� "N�mero inv�lido",
		e pedir� ao usu�rio que insira um n�mero novamente*/
		if(num > 9999){
			printf("N�mero inv�lido\n\n");
			continue;
		}
		
		//Se o usu�rio digitar um n�mero diferente de -1, o programa seguir� normalmente
		if(num != -1){
			
			if(num > 0){
				//Criando uma c�pia do n�mero digitado pelo usu�rio para que n�o seja perdido
				copia = num;
				
				while(copia > 0){
					//Pegando cada digito do n�mero digitado pelo usu�rio, da direita para a esquerda
					digito = copia % 10;
					printf("Vari�vel digito: %d\n", digito);
		        
		        		/*Fazendo o fatorial da posi��o do digital atual (inicia em 1 e vai at� no m�ximo 4,
					por causa do valor m�ximo ser 9999)*/
		        		fatorial = fatorial*posicao;
		        		printf("D�gito atual %d esta na posi��o atual %d\n", digito, posicao);
		        		printf("Fatorial da posi��o atual %d: %d\n\n", posicao, fatorial);
		        	
		        		/*Pegando o fatorial da posi��o atual e multiplicando pelo digito atual, em seguida, 
						soma-se com o resultado que j� estava na vari�vel na �ltima itera��o do loop*/
		        		resultado = (fatorial*digito) + resultado;
			        
			        	//Faz-se a divis�o por 10 para passarmos para o pr�ximo n�mero digitado pelo usu�rio
			        	copia = copia/10;
			        
			        	/*Aumenta 1 na posi��o, para passarmos para o pr�ximo n�mero para fazer o fatorial.
						Essa posi��o, corresponde aonde est�o os digitos de cada n�mero que o usu�rio digitou*/
			        	posicao++;
				}
				
				//Exibindo o resultado final da convers�o de bases
				printf("O resultado de %d na base TMTL � igual a %d na base 10\n\n", num, resultado);
				
			}
			else{
				/*Caso o n�mero seja negativo (menor que 0), o c�digo exibir� "N�mero inv�lido",
				e pedir� ao usu�rio que insira um n�mero novamente*/
				printf("N�mero inv�lido\n\n");
				continue;
			}
			
		}
		else{
			/*Caso o n�mero digite -1, ele sair� do programa*/
			printf("Voc� digitou -1 para sair\n");
			break;
		}
		
	}
	
    return 0; 
}
