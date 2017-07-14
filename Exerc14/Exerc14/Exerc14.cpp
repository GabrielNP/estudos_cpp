// Exerc14.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva um programa que leia dois números inteiros quaisquer. Apresente o maior deles.

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int num1, num2;

	printf("Digite um numero: ");
	scanf_s("%d", &num1);
	printf("Digite outro: ");
	scanf_s("%d", &num2);

	if (num1 > num2)
		printf("O maior numero eh %d \n", num1);
	else
		printf("O maior numero eh %d \n", num2);

	// O enunciado não se preocupa ainda se ambos os número forem iguais. 

	system("pause");
    return 0;
}

