// Exerc31.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva um programa que leia números inteiros
/* No final apresentar: A MEDIA DOS NUMEROS LIDOS.
OBS: O programa deve fazer a pergunta: "Deseja digitar outro numero? Responda (s/n)."
Se o usuário responder S, fica dentro do laço de repetição. 
Se responder N ou qualquer outra letra diferente de S, sai do laço de repetição e então vai calcular a média e apresentar o resultado da média dos números lidos.
*/

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	// Declaração de variáveis
	float numero, media=0, soma=0, qtde=0;
	char resposta = 's';

	// Laço de repetição WHILE 
	while (resposta == 's' || resposta == 'S')
	{
		// Entrada de dados
		printf("Digite um numero: ");
		scanf_s("%f", &numero);

		//Processamento de dados: Incrementa +1 de valor à variável qtde a cada rodada, e incrementa à veriável soma todo valor digitado pelo usuário.
		qtde++;
		soma += numero;
		
		// Entrada de dados decisória. O que for digitado será decisivo para a permanência ou não no laço de repetição
		printf("Deseja digitar outro numero? Responda \'S\' para \"SIM\" ou qualquer outra tecla para \"NAO\": ");
		resposta = _gettche();
		printf("\n\n");
	}

	// Processamento de dados: definindo a média
	media = soma / qtde;

	// Saída de dados
	printf("\nA media dos valores digitados eh: %.2f \n\n", media);

	system("pause");

    return 0;
}

