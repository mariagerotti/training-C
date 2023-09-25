#include <stdio.h>

int main(void) {

	float altura[5];
	int i, count=0;

	for(i=0; i<5; i++) {

		printf("informe sua altura:");
		scanf("%f", &altura[i]);
		if (altura[i]>1.50) {
			printf("vc pode ir na montanha russa!\n");
			count++;
		} else {
			printf("vc precisa crescer mais...\n");
		}

	}
	printf("\n %i pessoas podem usar a montanha russa", count);
	printf("\n as alturas lidas foram: ");

	for(i=0; i<5; i++) {
		printf("\n \t %.2f", altura[i]);
	}

}