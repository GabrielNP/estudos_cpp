// Exerc15.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva um programa que leia um número inteiro qualquer. Informe se é diferente de 1000 ou se é igual.

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int valorA;

	printf("Digite um numero: ");
	scanf_s("%d", &valorA);

	if (valorA != 1000)
		printf("O numero eh diferente de 1000\n");
	else
		printf("O numero eh igual a 1000\n");

	system("pause");
    return 0;
}

