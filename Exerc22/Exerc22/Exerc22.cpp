// Exerc22.cpp : Define o ponto de entrada para a aplicação de console.
/* Escreva um programa que leia um número inteiro entre 0 e 10 (inclusive). Escrever na tela o número digitado por extenso. 
Caso o número digitado estiver fora da faixa solicitada, informar ao usuário.*/

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	// Variáveis
		int numero;

	// Entrada de dados
		printf("Digite um numero de 0 a 10: ");
		scanf_s("%d", &numero);

	// Processamento de dados
		//Verificando número digitado
			switch (numero)
			{
			case 0: // Saída de dados
				printf("ZERO");
				break;
			case 1: // Saída de dados
				printf("UM");
				break;
			case 2: // Saída de dados
				printf("DOIS");
				break;
			case 3: // Saída de dados
				printf("TRES");
				break;
			case 4: // Saída de dados
				printf("QUATRO");
				break;
			case 5: // Saída de dados
				printf("CINCO");
				break;
			case 6: // Saída de dados
				printf("SEIS");
				break;
			case 7: // Saída de dados
				printf("SETE");
				break;
			case 8: // Saída de dados
				printf("OITO");
				break;
			case 9: // Saída de dados
				printf("NOVE");
				break;
			case 10: // Saída de dados
				printf("DEZ");
				break;
			default: // Saída de dados
				printf("NUMERO DIGITADO ESTA FORA DA FAIXA SOLICITADA!");
				break;
			}
		
		printf("\n\n");
		system("pause");

    return 0;
}

