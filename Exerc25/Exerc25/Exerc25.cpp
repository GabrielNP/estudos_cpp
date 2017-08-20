// Exerc25.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva um programa que mostre na tela os número de 10 até 0.

#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int cont;

	for (cont = 10; cont >= 0; cont--)
	{
		printf("%d \n",cont);
	}

	system("pause");
    return 0;

}

