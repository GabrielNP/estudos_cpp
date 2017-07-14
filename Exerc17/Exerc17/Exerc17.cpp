// Exerc17.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva um programa que leia a receita e a despesa de uma empresa. Apresentar a mensagem e o valor de LUCRO ou PREJUÍZO, conforme a situação da empresa.

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	float receita, despesa, valor;

	printf("Informe o valor da receita: ");
	scanf_s("%f", &receita);
	printf("Informe o valor da despesa: ");
	scanf_s("%f", &despesa);

	if (receita > despesa)
	{
		valor = receita - despesa;
		printf("LUCRO de RS%.2f \n\n", valor);
	}
	else
	{
		valor = despesa - receita;
		printf("PREJUIZO de RS%.2f \n\n", valor);
	}
	system("pause");
    return 0;
}

