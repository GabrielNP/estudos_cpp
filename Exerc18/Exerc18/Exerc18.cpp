// Exerc18.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva um programa que leia o salário de um funcionário. Deverá ser concedido ao funcinário um reajuste de salário  baseado nas informações a seguir:
/* SALARIO			TAXA DE REAJUSTE
   até R$1000,00	15%
   1000 - 2000,00	10%
   acima 2000,00	5%
*/

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	float /*salario,*/ taxaReajuste, salarioVelho, salarioNovo;

	printf("informe o salario do funcinario: R$");
	scanf_s("%f", &salarioVelho);

	/*if (salario <= 1000)
		salario = salario * 1.15;
	else if (salario <= 2000) // não precisa fazer if(salario >1000 && salario <=2000) porque se ele passa do primeiro 'if', obviamente é acima de 1000, não é necessário verificar de novo.
		salario = salario * 1.10;
	else
		salario = salario * 1.05;

	printf("\nO salario do funcionario apos o reajuste eh de RS%.2f \n\n", salario); */
	
	// Outra maneira de fazer
	if (salarioVelho <= 1000)
		taxaReajuste = 15;
	else if (salarioVelho <= 2000)
		taxaReajuste = 10;
	else
		taxaReajuste = 5;

	salarioNovo = salarioVelho + (salarioVelho * (taxaReajuste / 100));
	printf("Salario Velho \t\t R$%.2f \n",salarioVelho);
	printf("Taxa de reajuste \t %.2f%% \n", taxaReajuste);
	printf("Salario Novo \t\t R$%.2f \n", salarioNovo);

	system("pause");

    return 0;
}

