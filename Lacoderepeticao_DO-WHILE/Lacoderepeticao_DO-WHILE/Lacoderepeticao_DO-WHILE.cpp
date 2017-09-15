// Lacoderepeticao_DO-WHILE.cpp : Define o ponto de entrada para a aplicação de console.
//Escreva um programa que leia o código numérico da opção de um menu e execute os comandos do menu
/*
o menu está escrito abaixo:
 0 - encerrar o programa
 1 - incluir uma panela no estoque 
 2 - incluir uma chaleira no estoque 
 3 - incluir uma vassoura no estoque
 4 - relatório de inclusões
*/

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int codigo, contPan, contCha, contVas;

	contPan = contVas = contCha = 0;

	do
	{
		system("cls");
		printf("Menu de opcoes\n");
		printf("0 - Encerrar o programa \n1 - Incluir panela no estoque\n2 - Incluir chaleira no estoque\n3 - Incluir vassoura no estoque\n4 - Relatorio de inclusoes\n");
		printf("Escolha uma opcao: ");
		scanf_s("%d",&codigo);

		// Tratamento do código
		switch (codigo)
		{
		case 0:
			printf("Encerrando programa...Obrigado\n");
			
			break;
		case 1:
			printf("Incluindo panela no estoque\n");
			contPan++;
			break;
		case 2:
			printf("Incluindo uma chaleira no estoque\n");
			contCha++;
			break;
		case 3:
			printf("Inlcuindo uma vassoura no estoque\n");
			contVas++;
			break;
		case 4:
			system("cls");
			printf("Relatorio de inclusoes\n");
			printf(" %d panelas no estoque \n", contPan);
			printf(" %d chaleiras no estoque \n", contCha);
			printf(" %d vassouras no estoque \n", contVas);
			break;
		default: 
			printf("Opcao invalida!\n");
			break;
		}
		system("pause");
	} while (codigo != 0);

    return 0;
}

