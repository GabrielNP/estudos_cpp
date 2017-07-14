// CondicionalComposto.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int numero;

	printf("Digite um numero: ");
	scanf_s("%d",&numero);

	if (numero > 0)
		printf("POSITIVO\n");
	else
		printf("NEGATIVO\n");

	// se digitar 0 ele dirá que 0 é negativo porque não é maior que zero. Existe uma maneira melhor de fazer esse programa, mas veremos mais pra frente.

	system("pause");
    return 0;
}

