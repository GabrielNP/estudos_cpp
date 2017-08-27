// Exerc30.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva um programa que leia números inteiros até que seja digitado o número zero. Ao final apresentar
// A) o somatório dos números positivos
// B) o somatório dos números negativos

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int numero=1, somaPos = 0, somaNeg = 0;

	while (numero != 0)
	{
		printf("Digite um numero: ");
		scanf_s("%d", &numero);

			if (numero > 0)
				somaPos = somaPos + numero;
			else 
				somaNeg = somaNeg + numero;
	}

	printf("\nSomatorio de numeros POSITIVOS: %d \nSomatorio de numeros NEGATIVOS: %d\n\n", somaPos,somaNeg);

	system("pause");
	

    return 0;
}

