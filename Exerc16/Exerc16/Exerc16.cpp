// Exerc16.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva que leia dois números quaisquer reais. Apresentar o resultado do cálculo do maior dividido pelo menor.

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	float  num1, num2, result;

	printf("Digite um numero: ");
	scanf_s("%f", &num1);
	printf("Digite outro: ");
	scanf_s("%f", &num2);

	if (num1 > num2)
		result = num1 / num2;
	else
		result = num2 / num1;

	printf("O resultado da divisao do maior pelo menor eh %.2f \n", result);

	system("pause");
    return 0;
}

