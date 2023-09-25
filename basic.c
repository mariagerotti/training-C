#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char nome[50];
    printf("digite seu nome:");
    scanf("%s", &nome);
    printf("bom dia %s \n", nome);

    int idade;
    printf("digite sua idade:");
    scanf("%i", &idade);
}
