// Exerc13.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva um programa que leia um número qualquer. Informar se o número lido é maior que 1000.

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int numero;

	printf("Digite um numero: ");
	scanf_s("%d",&numero);

	// Desvio condicional simples
	if (numero > 1000)
		printf("Este numero eh maior que 1000. \n");

	system("pause");

    return 0;
}

