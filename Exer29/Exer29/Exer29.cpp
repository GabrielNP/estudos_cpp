// Exer29.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva um programa que leia números inteiros até que seja digitado um número negativo. No final apresentar a quantidade de números que foram digitados.

#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int numero=0, qtde=0;
	
	while (numero >= 0)
	{
		printf("Digite um numero inteiro: ");
		scanf_s("%d", &numero);

		qtde = qtde + 1;
	}
	printf("\n** Voce digitou um numero negativo, fim do programa... **\n\n");
	printf("A quantidade de numeros digitados foi de %d \n\n", qtde);
	system("pause");
    return 0;
}

