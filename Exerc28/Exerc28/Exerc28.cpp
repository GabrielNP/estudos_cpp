// Exerc28.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva um programa que apresente no final a soma dos números de 1 até 100.

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int i, soma=0;
	for (i = 0; i <= 100; i++)
	{
		printf("\t\t %d \n",i);
		soma = soma + i;
	}
	printf("\nA soma dos numeros de 1 ate 100 = %d\n\n",soma);

	system("pause");

    return 0;
}

