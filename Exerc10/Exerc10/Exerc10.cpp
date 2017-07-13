// Exerc10.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva um programa que leia e armazene a receita e a despesa anual de uma empresa. Calcular e apresentar o lucro obtido.
/*	Receita = todo o dinheiro que entra no caixa
	Despesa = todo o gasto que saiu do caixa
	Lucro = diferença entre o que entrou e saiu */

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	// Variáveis
		float receita, despesa, lucro;

	// Entrada de dados
		printf("Qual foi a receita da empresa este ano? ");
		scanf("%f",&receita);
		printf("E a despesa? ");
		scanf("%f",&despesa);

	// Processamento de dados: calculando o lucro
		lucro = receita - despesa;

	// Saída de dados
		printf("\nReceita \tDespesa \tLucro");
		printf("\n%.2f \t\t %.2f \t\t%.2f",receita,despesa, lucro);
		printf("\n\nEntao, o lucro da sua empresa foi de RS%.2f\n\n\n", lucro);

		system("pause");
    return 0;
}

