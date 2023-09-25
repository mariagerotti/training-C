#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	float peso, soma=0;
	
	printf("informe o peso das pessoas: \n");
	do{	//executa depois compara
		printf("\n pode entrar: ");
		scanf("%f", &peso);	
		soma = soma+peso;
	}
	while(soma<=1500); //compara depois executa
	printf("peso de 1500kg excedido. \n O peso atual e %.2f kg", soma);
}