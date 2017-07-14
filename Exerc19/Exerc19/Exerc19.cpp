// Exerc19.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva um programa que leia o salário bruto de um funcinário. Calcule o desconto de INSS baseado nas informações a seguir:
/* 
SALARIO			TAXA DE INSS
até 1317,07		8% de desconto
1317,07-2195,12	9% de desconto
acima 2195,12	11% de desconto

No final, apresentar:
a) O salario bruto
b) a taxa de INSS
c) o valor do desconto de INSS
d) o valor do salário líquido
*/

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	// Variáveis
		float salarioBruto, taxaINSS, valorDesconto, salarioLiquido;

	// Entrada de dados
		printf("Informe o salario bruto do funcionario: R$ ");
		scanf_s("%f", &salarioBruto);

	// Procesamento de dados
		// Verificando qual a taxa de desconto de INSS será aplicada de acordo com o salário bruto desse funcionário.
			if (salarioBruto <= 1317.07)
				taxaINSS = 8;
			else if (salarioBruto <= 2195.12)
				taxaINSS = 9;
			else 
				taxaINSS = 11;

		// Calculando o valor que será descontado do salário
			valorDesconto = (salarioBruto * taxaINSS / 100);

		// Aplicando a taxa de desconto de INSS
			salarioLiquido = salarioBruto - valorDesconto;

	// Saída de dados
		printf("\nSalario bruto.....: R$%.2f \n",salarioBruto);
		printf("Taxa de INSS......: %.0f%% \n", taxaINSS);
		printf("Desconto do INSS..: R$%.2f \n", valorDesconto);
		printf("Salario liquido...: R$%.2f \n\n", salarioLiquido);

		system("pause");

    return 0;
}

