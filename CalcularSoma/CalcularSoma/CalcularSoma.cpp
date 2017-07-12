// CalcularSoma.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva um programa que leia dois número inteiros quaisquer. Calcule a soma desses valores e aprensente o resultado encontrando.

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	// Declaração de variáveis
		int num1, num2, soma;

	// Entrada de dados
		printf("Digite um numero: ");
		scanf("%d",&num1);
		printf("\nDigite outro numero: ");
		scanf("%d",&num2);

	// Processamento de dados
		soma = num1 + num2;

	// Saída de dados
		printf("\nO resultado da soma eh \n\n %d + %d = %d \n\n", num1, num2, soma);

		system("pause");
    return 0;
}

