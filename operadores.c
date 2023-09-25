#include <stdio.h>

int main(){
	float n1;
	float n2;
	
	printf("informe o 1 numero:");
	scanf("%f", &n1);
	printf("informe o 2 numero:");
	scanf("%f", &n2);
	
	
	printf("soma: %.2f \n", n1+n2);
	printf("multiplicacao: %.2f \n", n1*n2);
	printf("subtracao: %.2f \n", n1-n2);
	printf("divisao: %.2f \n", n1/n2);
	
}