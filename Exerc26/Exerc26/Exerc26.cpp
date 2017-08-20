// Exerc26.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva um programa que leia do teclado 10 valores inteiros e escreva no final a soma dos valores que foram lidos.

#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int cont, soma=0, numero;
	
	printf("Digite 10 numeros inteiros e ao final voce vera a soma deles. \n");

	for (cont = 2; cont < 22; cont=cont+2)
	{
		cont = cont - 1;
		printf("Digite o %do numero: ", cont);
		scanf_s("%d", &numero);
		soma = soma + numero;
	}
	system("pause");
    return 0;
}

