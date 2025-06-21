#include <stdio.h>

int main() {
	typedef struct ret{
		float x;
		float y;
	}retangulo;
	
	retangulo ret_p_inf1, ret_p_sup1, ret_p_inf2, ret_p_sup2;
	float area_ret1, area_ret2;
	
	//lendo dados sobre o ponto inferior esquerdo do ret�ngulo1 e ponto superior direito do ret�ngulo1
	scanf("%f %f", &ret_p_inf1.x, &ret_p_inf1.y);
	scanf("%f %f", &ret_p_sup1.x, &ret_p_sup1.y);
	
	//lendo dados sobre o ponto inferior esquerdo do ret�ngulo2 e ponto superior direito do ret�ngulo2
	scanf("%f %f", &ret_p_inf2.x, &ret_p_inf2.y);
	scanf("%f %f", &ret_p_sup2.x, &ret_p_sup2.y);
	
	//calculando a �rea desses dois ret�ngulos com base nos pontos informados pelo usu�rio
	area_ret1 = (ret_p_sup1.x - ret_p_inf1.x) * (ret_p_sup1.y - ret_p_inf1.y);
	area_ret2 = (ret_p_sup2.x - ret_p_inf2.x) * (ret_p_sup2.y - ret_p_inf2.y);
	
	//verificando se o ret�ngulo2 est� ou n�o contido dentro do ret�ngulo1
	if(area_ret1 >= area_ret2)
		printf("o segundo retangulo esta contido no primeiro\n");
	else
		printf("o segundo retangulo nao esta contido no primeiro\n");
	
	return 0;
}
