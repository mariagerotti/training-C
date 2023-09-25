#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int opcao;
	float n1, n2, r;

	printf("digite uma opcao: \n");
	printf("[1] - somar\n");
	printf("[2] - diminuir\n");
	printf("[3] - multiplicar\n");
	printf("[4] - dividir\n");
	printf("[5] - sair\n");

	printf("digite aqui: ");
	scanf("%i", &opcao);

	if(opcao>=1 && opcao<=4) {
		printf("digite o primeiro numero: ");
		scanf("%f", &n1);

		printf("digite o segundo numero: ");
		scanf("%f", &n2);
	}

	switch(opcao) {
		case 1:
			r = n1+n2;
			printf("a soma de %.2f e %.2f corresponde a = %.2f", n1, n2, r);
			break;

		case 2:
			r = n1-n2;
			printf("a subtracao de  %.2f e %.2f corresponde a = %.2f", n1, n2, r);
			break;

		case 3:
			r = n1*n2;
			printf("a multiplicacao de  %.2f e %.2f corresponde a = %.2f", n1, n2, r);
			break;

		case 4:
			r = n1/n2;
			printf("a divisao de %.2f e %.2f corresponde a = %.2f", n1, n2, r);
			break;

		case 5:
			printf("ate a proxima :)");
			break;
		
		
		default:
			printf("\n opcao invalida");
			break;


	}

	return 0;
}