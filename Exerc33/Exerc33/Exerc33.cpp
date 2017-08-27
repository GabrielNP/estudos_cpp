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
	float idade, soma1 = 0, soma2 = 0, soma3 = 0, media1=0, media2=0, media3=0;
	int codigo =1;
	char resposta = 's';

	// Laço de repetição: vai executar o programa até que seja digitado 'N' para "não" 
	while (resposta == 's' || resposta == 'S')
	{ // abre while
		
	  // Entrada de dados
		printf("Digite a idade da pessoa: ");
		scanf_s("%f", &idade);
			// Inserindo o código e verificando sua consistência
			while (codigo != 1 && codigo != 2 && codigo != 3)
			{
				printf("Com base na relacao abaixo,");
				printf("\n1 - Solteiro(a)\n2 - Casasdo(a)\n3 - Divorciado(a)");
				printf("\nindique qual o estado civil dessa pessoa: ");
				scanf_s("%d", &codigo);
				if (codigo != 1 && codigo != 2 && codigo != 3)
					printf("\n**CODIGO INVALIDO. Por favor, digite novamente.");
			}

		// Processamento de dados: somando as idades
		switch (codigo)
		{
			case 1:
				soma1 += idade;
				break;

			case 2:
				soma2 += idade;
				break;

			case 3:
				soma3 += idade;
				break;

			default:
				break;
		}

		// Processamento de dados: calculando a média
		media1 = soma1 / 3;
		media2 = soma2 / 3;
		media3 = soma3 / 3;
		
		printf("Deseja digitar dados de outra pessoa? Responda (S/N): ");
		resposta = _gettche();
		system("cls");
	} // fecha while

	// Saída de dados
	printf("A media da idade dos solteiros eh:.....%.2f\n", soma1);
	printf("A media da idade dos casados eh:.......%.2f\n", soma2);
	printf("A media da idade dos divorciados eh:...%.2f\n\n", soma3);

	system("pause");
    return 0;
}

