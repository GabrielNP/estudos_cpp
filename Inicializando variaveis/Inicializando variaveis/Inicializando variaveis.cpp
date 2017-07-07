// Inicializando variaveis.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	// Declaração de variáveis
	int numero = 46;
	float valor = 8.37;
	char letra = 'x';
	int valor1, valor2, valor3;

	valor1 = valor2 = valor3 = 0;

	printf("Variavel numero: %d \n", numero);
	printf("Variavel valor: %f \n", valor);
	printf("Variavel valor com 2 casas decimais: %10.2f \n", valor); // deixa 10 espaços antes da vírgula
	printf("Variavel valor com 2 casas decimais: %.2f \n", valor); // deixa 0 espaços antes da vírgula
	printf("Variavel letra: %c \n", letra);
	printf("\n\n %d %d %d\n", valor1, valor2, valor3);

	system("pause");

    return 0;
}

