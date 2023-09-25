#include <stdio.h>

int main(void) {

	float altura;
	int i, count=0;
	

	for(i=1; i<=3; i++) {

		printf("informe sua altura:");
		scanf("%f", &altura);
		if (altura>1.50) {
			printf("voce pode ir na montanha russa!\n");
			count++;
		} else {
			printf("voce precisa crescer mais...\n");
		}

	}
	printf("\n %i pessoas podem usar a montanha russa", count);

}