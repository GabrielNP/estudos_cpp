// Lacoderepeticao_FOR.cpp : Define o ponto de entrada para a aplicação de console.
// Laço de repetição: FOR

#include "stdafx.h"
#include "stdlib.h" 


int main()
{
	// Declaração de variáveis
	int numero, resultado, contar;

	for (contar=0;contar<5;contar++)
	{
		// Entrada de dados
		printf("Digite um nummero: ");
		scanf_s("%d", &numero);

		// Processamento de dados
		resultado = numero * 3;

		//Saída de dados
		printf("O resultado foi de %d \n\n", resultado);
	}

	system("pause");
    return 0;
}

