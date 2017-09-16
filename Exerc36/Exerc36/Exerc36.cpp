// Exerc36.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva um programa que controle o acesso de pessoas em um restaurante. O restaurante tem a capacidade de 40 lugares, que não poderá ser ultrapassada.
/*O controle será feito através de códigos, conforme a table a abaixo:
0 - Encerrar o programa
1 - Entrar uma pessoao no restaurante
2 - Sair uma pessoa do restaurante
3 - Mostrar quantos lugares estão disponíveis
4 - Mostrar o total de pessoas que entraram
5 - Mostrar o total de pessoas que saíram
*/


#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int codigo, entrada, saida, total;
	
	entrada = saida = 0;
	int disponivel = 4;

	do
	{
		system("cls");
		printf("** BEM-VINDO AO RESTAURANTE **\n\n");
		printf("Selecione uma das opcoes abaixo:\n");
		printf("0 - Encerrar o programa\n");
		printf("1 - Entrar uma pessoa no restaurante\n");
		printf("2 - Sair uma pessoa do restaurante\n");
		printf("3 - Mostrar quantos lugares estão disponiveis\n");
		printf("4 - Mostrar o total de pessoas que entraram\n");
		printf("5 - Mostrar o total de pessoas que sairam\n\n");
		scanf_s("%d", &codigo);

		switch (codigo)
		{
		case 0:
			printf("Encerrando o programa...Obrigado!\n");
			break;

		case 1:
			if (disponivel > 0)
			{
				printf("1 pessoa entrou no restaurante\n");
				entrada++;
				disponivel--;
			}
			else
				printf("O resutarante esta LOTADO!\nAguarde liberar uma mesa para entrar.\n");
			
			break;

		case 2:
			if (disponivel == 4)
				printf("O restaurante esta vazio, nao ha nenhum cliente para sair\n");
			else
			{
				printf("1 pessoa saiu do restaurante\n");
				saida++;
				disponivel++;
			}
			break;

		case 3:
			total = entrada - saida;
			printf("A quantidade de clientes agora eh: %d \n", total);
			printf("Com %d lugares disponiveis \n", disponivel);
			break;

		case 4:
			printf("Ao todo, %d clientes entraram no restaurante \n", entrada);
			break;

		case 5:
			printf("Ao todo, ja sairam %d clientes do restaurante \n", saida);
			break;

		default:
			printf("Opcao invalida! \n");
			break;
		}

		system("pause");

	} while (codigo != 0);
	

    return 0;
}

