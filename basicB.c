#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	char nomePai [50], nomeMae[50];
	printf("digite o nome do seu pai:");
	scanf("%s", &nomePai);
	printf("digite o nome da sua mae:");
	scanf("%s", &nomeMae);
	
	printf("bom dia %s e %s", nomePai, nomeMae);  
}