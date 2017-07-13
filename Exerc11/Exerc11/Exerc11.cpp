// Exerc11.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva um programa que leia as 3 notas escolares de um aluno. Calcule e apresente a média.

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	// Variáveis
		float nota1, nota2, nota3,media;

	// Entrada de dados
		printf("Digite a primeira nota: ");
		scanf("%f", &nota1);
		printf("Digite a segunda nota: ");
		scanf("%f", &nota2);
		printf("Digite a ultima nota: ");
		scanf("%f", &nota3);

	// Processamento de dados: calculando a média
		media = (nota1 + nota2 + nota3) / 3;

	// Saída de dados
		printf("\nMedia \t%.2f \n\n",media);

		system("pause");
    return 0;
}

