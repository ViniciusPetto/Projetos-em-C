#include <stdio.h>
#include <stdlib.h>


int main() {
	float op1, op2;
    char sinal;

    scanf("%f%c%f", &op1, &sinal, &op2);
    
    switch(sinal){
    	case 43:
	    	printf("%.3f+%.3f=%.3f\n", op1, op2, op1+op2);
	    	break;
	    	
	    case 45:
	    	printf("%.3f-%.3f=%.3f\n", op1, op2, op1-op2);
	    	break;
	    	
	    case 47:
	    	printf("%.3f/%.3f=%.3f\n", op1, op2, op1/op2);
	    	break;
	    
	    case 42:
	    	printf("%.3f*%.3f=%.3f\n", op1, op2, op1*op2);
	    	break;
	    	
	    default:
	    	printf("Operador invalido\n");
	}
                    
	return 0;
}
