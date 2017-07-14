// Exerc21.cpp : Define o ponto de entrada para a aplicação de console.
/* Escreva um programa que leia o código numérico de um produto e que escreva o nome do produto a que se refere o código.
Os códigos podem ser:
1- panela
2- chaleira
3- prato
Qualquer outro número digitado deverá informar: "Código inválido."
*/

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	// Variáveis
	int codigo;

	// Entrada de dados
	printf("Selecione de 1 a 3 para o codigo do produto: ");
	scanf_s("%d", &codigo);

	// Processamento de dados
		// Verificando o código digitado
			switch (codigo)
			{
				case 1: // Saída de dados
					printf("Voce escolheu o produto Panela.\n");
					break;
				case 2: // Saída de dados
					printf("Voce escolheu o produto Chaleira. \n");
					break;
				case 3: // Saída de dados
					printf("Voce escolheu o produto Prato. \n");
					break;
				default: // Saída de dados
					printf("Codigo invalido! \n");
					break;
			}
	
	system("pause");

    return 0;
}

