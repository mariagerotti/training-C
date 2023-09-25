#include <stdio.h>

int main(void){
	float altura;
	
	printf("informe sua altura:");
	scanf("%f", &altura);
	if (altura>1.50){
		printf("voce pode ir na montanha russa!");
	}
	else{
		printf("voce precisa crescer mais...");
	}
}