// Exerc20.cpp : Define o ponto de entrada para a aplicação de console.
/* Escreva  um programa que leia o salário hora de um professor, a quantidade de horas trabalhadas e a quantidade de filhos menores de 14 anos.
Calcular o valor do salário bruto deste professor. (Considere salarioBruto = salarioHora * qtdeHoras)

Para calcular o salário família, leve em consideração as informações a seguir:
SALÁRIO BRUTO		SALÁRIO FAMÍLIA
até 700,00			R$8,50 para cada filho
700 até 1000		R$6,50 para cada filho
acima 1000,00		R$2,50 para cada filho

No final, apresentar:
a) O valor do salário bruto
b) O valor do salário família
c) O valor do salário líquido
*/

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	// Variáveis
	float salarioBruto, salarioFamilia, salarioHora, salarioLiquido;
	int qtdeFilhos, qtdeHoras;

	// Entrada de dados
		printf("Informe quantos filhos o professor tem: ");
		scanf_s("%d", &qtdeFilhos);
		printf("\nInforme o salario hora do professor: R$");
		scanf_s("%f", &salarioHora);
		printf("\nInforme quantas horas o professor trabalha: ");
		scanf_s("%d", &qtdeHoras);

	// Processamento de dados
		// Definindo o salário bruto
			salarioBruto = salarioHora * qtdeHoras;

		// Verificando qual a taxa de salário família será aplicada por filho
			if (salarioBruto <= 700)
				salarioFamilia = 8.50;
			else if (salarioBruto <= 1000)
				salarioFamilia = 6.50;
			else
				salarioFamilia = 2.50;
		
		// Definindo a taxa de salário família sobre o salário bruto
			salarioFamilia = salarioFamilia * qtdeFilhos;
			
		// Definindo o salário líquido
			salarioLiquido = salarioBruto + salarioFamilia;

	// Saída de dados
		printf("\n\nSalario bruto....: R$%.2f \n", salarioBruto);
		printf("Salario familia..: R$%.2f \n", salarioFamilia);
		printf("Salario liquido..: R$%.2f \n\n", salarioLiquido);

	system("pause");
    return 0;
}

