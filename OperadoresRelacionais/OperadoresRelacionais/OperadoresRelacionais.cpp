// OperadoresRelacionais.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int valorA, valorB;
	
	printf("Digite um valor: ");
	scanf_s("%d",&valorA);
	printf("Digite outro valor: ");
	scanf_s("%d",&valorB);

	// Caso a afirmação seja verdadeira, a linguagem C resultará em 1 (verdadeiro). Caso seja falsa, em 0 (falso).
	printf("valorA > valorB resulta em %d \n", valorA > valorB); 
	printf("valorA >= valorB resulta em %d \n", valorA >= valorB);
	printf("valorA < valorB resulta em %d \n", valorA < valorB);
	printf("valorA <= valorB resulta em %d \n", valorA <= valorB);
	printf("valorA == valorB resulta em %d \n", valorA == valorB);
	printf("valorA != valorB resulta em %d \n", valorA != valorB);

	system("pause");


    return 0;
}

