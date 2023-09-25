#include <stdio.h>

int main(){
	int idade;
	
	printf("Digite sua idade:");
	scanf("%i", &idade);
	
	if(idade >=18 && idade <60){
		printf("deve votar");
	}
	else if(idade >=16){
		printf("voto facultativo");
	}
	else{
		printf("nao pode votar");
	}
}