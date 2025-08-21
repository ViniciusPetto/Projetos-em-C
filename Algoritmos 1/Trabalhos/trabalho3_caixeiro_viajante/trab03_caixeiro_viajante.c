#include <stdio.h>
#include <limits.h>

/*prot�tipo da fun��o, passando como par�metro o tamanho da matriz, i e j para percorrer a matriz,
a matriz de tempos preenchida, e o vetor de locais visitados preenchido com 0 (nenhum local visitado)*/
int calculo_rota(int n, int i, int j, int tempos[n+1][n+1], int local_visitado[n+1]);

int main(){
	int n, i, j;
	//lendo o tamanho da matriz quadrada
	scanf("%d", &n);
	
	int tempos[n+1][n+1], local_visitado[n+1];
	
	/*lendo os tempos, atribuindo � matriz, e tornando todos os locais visitados como 0
	(n�o visitamos nenhum local ainda)*/
	for(i=0; i<n+1; i++){
		local_visitado[i] = 0;
		for(j=0; j<n+1; j++){
			scanf("%d", &tempos[i][j]);
		}
	}

	//exibindo a soma dos tempos e a rota percorrida em si, atrav�s da chamada da fun��o no pr�prio printf()
    printf("\n%d\n", calculo_rota(n, i, j, tempos, local_visitado));
	
	return 0;
}

/*foi criado uma fun��o para separar a l�gica do m�todo guloso do resto do c�digo,
facilitando o entendimento e a leitura*/
int calculo_rota(int n, int i, int j, int tempos[n+1][n+1], int local_visitado[n+1]){
	int menor, soma = 0, local_atual = 0, proximo_local, rota_percorrida[n+2];
	
	//marcando o local inicial (0) como j� visitado (1)
	local_visitado[0] = 1;
	//primeiro passo da rota a ser percorrida � saindo do local inicial (local_atual = 0)
	rota_percorrida[0] = local_atual;
		
	for(i=1; i<n+1; i++){
		
		//colocando um valor alto em menor para que seja poss�vel realizar as compara��es	
		menor = INT_MAX;
			
		for(j=0; j<n+1; j++){
			/*se o local ainda n�o foi visitado (visitado[j] = 0 -> !0 -> 1) e, o tempo at� esse local � maior que 0 
			(onde estamos) e, esse tempo for o menor poss�vel, atribu�mos esse tempo � veri�vel menor, e em pr�ximo_local,
			atribu�mos j, para sabermos onde devemos ir em seguida (local mais pr�ximo)*/
			if((!local_visitado[j] && tempos[local_atual][j] > 0) && (tempos[local_atual][j] < menor)){
				menor = tempos[local_atual][j];
				proximo_local = j;
			}
		}
		
		/*somamos o menor tempo encontrado na vari�vel soma, para sabermos o total de tempo gasto /
		marcamos esse pr�ximo local como visitado / adicionamos ele na nossa rota_percorrida /
		atribu�mos � local_atual, o valor de pr�ximo_local, para irmos ao pr�ximo local /
		retornamos ao loop at� que todos os locais da matriz sejam percorridos*/
		soma += menor;
        local_visitado[proximo_local] = 1;
        rota_percorrida[i] = proximo_local;
        local_atual = proximo_local;
        
	}
	
	/*quando visitamos todos os locais (linhas da matriz), voltamos ao local inicial (coluna 0 | linha n+1
	da matriz) e somamos o seu valor em soma e, na �ltima posi��o de rota_percorrida colocamos o local
	inicial (0), pois voltamos para l� ao final de todo caminho*/	
	soma += tempos[local_atual][0];
    rota_percorrida[n+1] = 0;
    
    //mostrando a rota formada
    for (i=0; i<n+2; i++) {
        printf("%d", rota_percorrida[i]);
        
        //enquanto o valor de i for menor que o tamanho da matriz, � mostrado as setas, indicando a rota
        if (i < n+1){
        	printf(" -> ");
		}		
    }
    
    //retornando soma para ser exibida na fun��o main
    return soma;
}
