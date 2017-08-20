// Exerc27.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva um programa que leia do teclado 20 valores inteiros e escreva no final
/* a) a soma dos valores positivos;
b) a soma dos valores negativos;
c) a quantidade de zeros digitados; */

#include "stdafx.h"
#include "stdlib.h" 

int main()
{
	int numero=0, cont, somaPositivo=0, somaNegativo=0, zeros=0;

	for (cont = 2;cont < 22;cont = cont + 2)
	{
		cont = cont - 1;
		printf("Digite o %do numero: ", cont);
		scanf_s("%d", &numero);

		if (numero > 0)
		{
			somaPositivo = somaPositivo + numero;
		} 
			else if (numero < 0)
			{
				somaNegativo = somaNegativo + numero;
			}
				else
					zeros = zeros + 1;
		
	}

	printf("A soma de numeros positivos eh:....... %d \n", somaPositivo);
	printf("A soma dos numeros negativos eh:...... %d \n", somaNegativo);
	printf("A quantidade de zeros digitados eh:... %d \n", zeros);

	system("pause");
    return 0;
}

