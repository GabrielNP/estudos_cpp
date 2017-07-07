// Exerc06.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva um programa que armazene as 3 notas escolares de um aluno. Calcule a média do aluno e armazene numa variável. Apresente a média. 

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	float media, nota1 = 8.2, nota2 = 7.5, nota3 = 9.6;
	
	media = (nota1 + nota2 + nota3) / 3;

	printf("Aluno 001 \n\n");
	printf(" NOTA 1 \t NOTA 2 \t NOTA 3\n");
	printf("  %.2f \t\t   %.2f \t  %.2f \n", nota1, nota2, nota3);

	system("pause");

	
    return 0;
}

