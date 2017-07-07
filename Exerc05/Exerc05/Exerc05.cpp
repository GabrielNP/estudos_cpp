// Exerc05.cpp : Define o ponto de entrada para a aplicação de console.
/* Escreva um programa que declare variaveis. Essas variáveis irão armazenar:
a) a quilometragem inicial de um a carro = 20000
b) a quilometragem final do carro = 207349

O programa deverá atribuir estes valores às variáveis e depois calcular e apresentar a distância do carro (St = Sf - Si)
*/

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	// declaração e inicialização de variáveis
	int kmIn = 200000, kmFi = 207349, kmTotal;

	// cálculo de dados
	kmTotal = kmFi - kmIn;

	// saída de dados
	printf("A distancia percorrida pelo carro eh de %dkm \n", kmTotal);

	system("pause");

    return 0;
}

