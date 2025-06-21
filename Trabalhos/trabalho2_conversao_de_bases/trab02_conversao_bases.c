#include <stdio.h>
#include <locale.h>

/*Exercício: Coletar um número digitado pelo usuário, que virá em uma base TMTL e converter para base 10:
Exemplo: Usuário digita 719 -> 7 está na posição 3, 1 está na posição 2 e 9 está na posição 1. Fazer fatorial
de 3 e depois multiplicar por 7, depois fazer fatorial de 2 e depois multiplicar por 1, e por fim fazer fatorial
de 1 e depois multiplicar por 9. O resultado da conversão para a base 10 se dará pela soma de todas essas multiplicações
entre si: 719 base TMTL = 53 base 10*/

int main() {
	//Função para que o printf aceite caracteres especiais
	setlocale(LC_ALL, "Portuguese");
	
	while(1){
		/*Descrição das Variáveis
		
		->num: recebe o que o usuário digitar
		->copia: cópia da variável num para que seja possível realizar operações com num
		sem perder seu valor original
		->digito: coleta digito por digito do número digitado pelo usuário
		->posicao: coleta a posição do digito do respectivo número
		->fatorial: armazena o calculo do fatorial do valor da posição
		->resultado: armazena o resultado final, feito a partir da multiplicação entre o digito e o fatorial
		primeiro, e depois a soma dessa multiçicação com a multiplicação do digito e fatorial dos próximos
		números*/
		int num, copia, digito, posicao = 1, fatorial = 1, resultado = 0;
		
		printf("Digite um número inteiro positivo (maximo 9999). Ou digite '-1' para sair:\n");
		scanf("%d", &num);
		
		/*Caso o número seja maior que 9999, o código exibirá "Número inválido",
		e pedirá ao usuário que insira um número novamente*/
		if(num > 9999){
			printf("Número inválido\n\n");
			continue;
		}
		
		//Se o usuário digitar um número diferente de -1, o programa seguirá normalmente
		if(num != -1){
			
			if(num > 0){
				//Criando uma cópia do número digitado pelo usuário para que não seja perdido
				copia = num;
				
				while(copia > 0){
					//Pegando cada digito do número digitado pelo usuário, da direita para a esquerda
					digito = copia % 10;
					printf("Variável digito: %d\n", digito);
		        
		        		/*Fazendo o fatorial da posição do digital atual (inicia em 1 e vai até no máximo 4,
					por causa do valor máximo ser 9999)*/
		        		fatorial = fatorial*posicao;
		        		printf("Dígito atual %d esta na posição atual %d\n", digito, posicao);
		        		printf("Fatorial da posição atual %d: %d\n\n", posicao, fatorial);
		        	
		        		/*Pegando o fatorial da posição atual e multiplicando pelo digito atual, em seguida, 
						soma-se com o resultado que já estava na variável na última iteração do loop*/
		        		resultado = (fatorial*digito) + resultado;
			        
			        	//Faz-se a divisão por 10 para passarmos para o próximo número digitado pelo usuário
			        	copia = copia/10;
			        
			        	/*Aumenta 1 na posição, para passarmos para o próximo número para fazer o fatorial.
						Essa posição, corresponde aonde estão os digitos de cada número que o usuário digitou*/
			        	posicao++;
				}
				
				//Exibindo o resultado final da conversão de bases
				printf("O resultado de %d na base TMTL é igual a %d na base 10\n\n", num, resultado);
				
			}
			else{
				/*Caso o número seja negativo (menor que 0), o código exibirá "Número inválido",
				e pedirá ao usuário que insira um número novamente*/
				printf("Número inválido\n\n");
				continue;
			}
			
		}
		else{
			/*Caso o número digite -1, ele sairá do programa*/
			printf("Você digitou -1 para sair\n");
			break;
		}
		
	}
	
    return 0; 
}
