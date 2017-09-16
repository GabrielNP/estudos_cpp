// Exerc35.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva um programa que leia códigos e faça as tarefas, conforme a tabela de códigos abaixo:
/*
0 - Encerrar o programa
1 - Incluir uma unidade no estoque
2 - Excluir uma unidade no estoque
3 - Mostrar o total disponível no estoque
4 - Mostrar o total de entradas no estoque
5 - Mostrar o total de saídas no estoque 
*/

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int codigo, contInc, contExc, total;

	contExc = contInc = total = 0;

	do
	{
		// menu de opções
		system("cls");
		printf("BEM-VINDO AO ESTOQUE.\nSelecione uma das opcoes abaixo\n");
		printf("0 - Encerrar o programa\n");
		printf("1 - Incluir uma unidade no estoque\n");
		printf("2 - Excluir uma unidade no estoque\n");
		printf("3 - Mostrar o total disponível no estoque\n");
		printf("4 - Mostrar o total de entradas no estoque\n");
		printf("5 - Mostrar o total de saídas no estoque\n");
		scanf_s("%d", &codigo);

		switch(codigo)
		{
			case 0:
				printf("\nEncerrando o programa...Obrigado!\n");
				break;

			case 1:
				printf("Adicionando 1 item ao estoque\n");
				contInc++;
				total++;
				break;

			case 2:
				if (total == 0)
					printf("O estoque esta vazio, nao eh possivel excluir\n");
				else
				{
					printf("Excluindo 1 item do estoque\n");
					contExc++;
					total--;
				}
				break;

			case 3:
				printf("Total disponivel no estoque: %d \n", total);
				break;

			case 4:
				printf("Total de entradas no estoque: %d  \n", contInc);
				break;

			case 5:
				printf("Total de saidas no estoque: %d \n", contExc);
				break;

			default:
				printf("Opcao invalida!\n");
				break;
		}
		system("pause");


		}while (codigo != 0);



    return 0;
}