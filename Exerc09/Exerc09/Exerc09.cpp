// Exerc09.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva um programa que calcule e apresente o valor do volume de uma lata de azeite de forma cilíndrica.
// Utilize a fórmula: volume = 3,14 * raio² * altura

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	// Variáveis
		float volume, raio, altura, pi = 3.14;

	// Entrada de dados
		printf("Insira o valor do raio: ");
		scanf("%f",&raio);
		printf("\nInsira o valor da altura: ");
		scanf("%f",&altura);

	// Processamento de dados: calculando o volume
		volume = (raio * raio) * altura * pi;

	// Saída de dados
		printf("\n%.2f = %.2f * %.2f * %.2f * %.2f\n", volume, pi, raio, raio, altura);
		printf("\nO volume dessa lata de azeite eh: %.2f \n\n",volume);

		system("pause");
    return 0;
}

