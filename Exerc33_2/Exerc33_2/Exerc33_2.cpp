// Exerc33.cpp : Define o ponto de entrada para a aplicação de console.
/* Escreva um programa que leia a idade e o código do estado civil de um  grupo de pessoas. A quantidade de pessoas não está definida, portanto o sistema deverá perguntar
para o usuário se vai ou não digitar dados de outra pessoa.
No final aprensetar a média das idades dos solteiros, a média das idades dos casados , a media das idades dos divorciados.

Os códigos do estavo civil estão apresentados abaixo:
1 - solteiro
2 - casasdo
3 - divorciado
*/

#include "stdafx.h"
#include "stdlib.h"

int main()
{
	// Declaração de variáveis
	float idade, soma1 = 0, soma2 = 0, soma3 = 0, media1 = 0, media2 = 0, media3 = 0, qtde1=0, qtde2=0, qtde3=0;
	int codigo = 0;
	char resposta = 's';

	// Laço de repetição: vai executar o programa até que seja digitado 'N' para "não" 
	while (resposta == 's' || resposta == 'S')
	{ // abre while

		// Entrada de dados
		printf("Digite a idade da pessoa: ");
		scanf_s("%f", &idade);
		// Inserindo o código 		
		printf("Com base na relacao abaixo,");
		printf("\n1 - Solteiro(a)\n2 - Casasdo(a)\n3 - Divorciado(a)");
		printf("\nindique qual o estado civil dessa pessoa: ");
		scanf_s("%d", &codigo);
			

		// Processamento de dados: somando as idades
		switch (codigo)
		{
		case 1:
			soma1 = soma1 + idade;
			qtde1++;
			break;

		case 2:
			soma2 = soma2 + idade;
			qtde2++;
			break;

		case 3:
			soma3 = soma3 + idade;
			qtde3;
			break;

		default:
			// Verifica a consistência do código digitado até ser válido para as 3 opções disponíveis
			do
			{
				printf("\n**CODIGO INVALIDO. Por favor, digite novamente.");
				printf("\n\nCom base na relacao abaixo,");
				printf("\n1 - Solteiro(a)\n2 - Casasdo(a)\n3 - Divorciado(a)");
				printf("\nindique qual o estado civil dessa pessoa: ");
				scanf_s("%d", &codigo);
			} while (codigo != 1 && codigo != 2 && codigo != 3);
			break;
		}

		printf("Deseja digitar dados de outra pessoa? Responda (S/N): ");
		resposta = _gettche();
		system("cls");
	} // fecha while

	// Processamento de dados: calculando a média
		media1 = soma1 / qtde1;
		media2 = soma2 / qtde2;
		media3 = soma3 / qtde3;

	// Saída de dados
		if (qtde1 != 0)
		{
			printf("A media da idade dos solteiros eh:.....%.2f\n", media1);
		}
			else 
			{
				printf("Nao ha solteiros inseridos!\n");
			}
		if (qtde2 != 0)
		{
			printf("A media da idade dos casados eh:.......%.2f\n", media2);
		}
			else
			{
				printf("Nao ha casados inseridos!\n");
			}
		if (qtde3 != 0)
		{
			printf("A media da idade dos divorciados eh:...%.2f\n\n", media3);
		}
			else
			{
				printf("Nao ha divorciados inseridos!\n");
			}

	system("pause");
	return 0;
}

