// CondicionalSimples.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva um programa que leia um número inteiro qualquer. Informar se o número lido é positivo.

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int numero;

	printf("Digite um numero: ");
	scanf_s("%d",&numero);

	if (numero > 0)
		printf("Numero eh POSITIVO.\n");
	
	system("pause");

    return 0;
}

