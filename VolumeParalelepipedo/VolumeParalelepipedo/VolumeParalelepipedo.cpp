// VolumeParalelepipedo.cpp : Define o ponto de entrada para a aplicação de console.
// Calcular o o volume de um paralelepipedo, lendo as entradas de dados pelo teclado.			

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	// Declaração de variáveis
		float volume, comprimento, largura, altura;

	//Entrada de dados
		printf("Digite o valor do comprimento: ");
		scanf_s("%f", &comprimento);
		printf("Digite o valor da largura: ");
		scanf("%f", &largura);
		printf("Digite o valor da altura: ");
		scanf("%f", &altura);

	//Processamento de dados
		volume = comprimento * largura * altura;

	// Saída de dados
		printf("O volume do paralelepipedo eh %.2f. \n", volume);
	system("pause");
    return 0;
}

