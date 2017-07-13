// Exerc08.cpp : Define o ponto de entrada para a aplicação de console.
/* Escreva um programa que leia a quilometragem inicial de um carro, antes de uma viagem, e a quilometragem final do carro, após a viagem.
Feito isso, calcular e apresentar a distância percorrida do carro. */

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	// Variáveis
		float KMi, KMf, distancia;

	// Entrada de dados
		printf("Insira a quilometragem INICIAL do veiculo: ");
		scanf("%f",&KMi);
		printf("\nInsira a quilometragem FINAL do veiculo: ");
		scanf("%f", &KMf);

	// Procesamento de dados: calculando distância percorrida
		distancia = KMf - KMi;

	// Saída de dados
		printf("\nA distancia percorrida pelo carro foi de %.2fkm\n\n\n", distancia);

		system("pause");
    return 0;
}

