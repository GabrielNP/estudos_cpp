// Lacoderepeticao_WHILE.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "stdlib.h" 


int main()
{
	// Declaração de variáveis
	int numero, resultado, contar=0;

	while (contar < 5)
	{
		// Entrada de dados
		printf("Digite um nummero: ");
		scanf_s("%d", &numero);

		// Processamento de dados
		resultado = numero * 3;

		//Saída de dados
		printf("O resultado foi de %d \n\n", resultado);

		contar++;
	}


	system("pause");
	return 0;
}