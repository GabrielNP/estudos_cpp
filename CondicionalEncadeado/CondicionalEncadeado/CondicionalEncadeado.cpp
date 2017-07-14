// CondicionalEncadeado.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int numero;

	printf("Digite um numero: ");
	scanf_s("%d", &numero);

	if (numero > 0)
		printf("POSITIVO\n\n");
	else if (numero == 0)
		printf("Eh igual a ZERO\n\n");
	else
		printf("NEGATIVO\n\n");

	system("pause");
    return 0;
}

