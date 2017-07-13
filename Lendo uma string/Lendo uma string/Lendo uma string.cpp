// Lendo uma string.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	// Variáveis
		char nome[40];

	// Entrada de dados
		printf("Digite um nome: ");
		gets_s(nome);

	//Saída de dados
		printf("\n\nO nome lido foi: %s \n",nome);

		system("pause");
    return 0;
}

