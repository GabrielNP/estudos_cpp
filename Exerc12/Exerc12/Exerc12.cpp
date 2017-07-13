// Exerc12.cpp : Define o ponto de entrada para a aplicação de console.
/* Escreva um programa que leia o ano de nascimento de uma pessoa. Calcular e apresentar a quantidade de dias, 
horas, minutos e segundos que esta pessoa vive desde o seu nascimento.*/


#include "stdafx.h"
#include "stdlib.h"


int main()
{
	// Variáveis
		int idade, anoNascimento, qtdeDias, qtdeHoras, qtdeMinutos, qtdeSegundos;
	// Entrada de dados
		printf("Em que ano voce nasceu? ");
		scanf("%d", &anoNascimento);
		
	// Processamento de dados
		idade = 2017 - anoNascimento; // descobrindo quanto anos tem
		qtdeDias = idade * 365; //descobrindo quantos dias viveu
		qtdeHoras = qtdeDias * 24; //descobrindo quantas horas viveu
		qtdeMinutos = qtdeHoras * 60; // descobrindo quantos minutos viveu
		qtdeSegundos = qtdeMinutos * 60; // descobrindo quantos segundos viveu
		
	// Saída de dados
		printf("\nVoce tem %d anos, %d dias, %d horas, %d minutos e %d segundos\n",idade,qtdeDias,qtdeHoras,qtdeMinutos,qtdeSegundos);
		
	system("pause");
    return 0;
}

