// Exerc07.cpp : Define o ponto de entrada para a aplicação de console.
// Escreva um programa que calcule e apresente o valor do volume de uma lata de azeite de forma cilíndrica. O programa deve utilizar a fórmula: V = 3,14 * raio² * altura

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	float volume, pi = 3.14, raio, altura;

	raio = 1.4;
	altura = 30;
	
	volume = pi * (raio * raio) * altura;

	printf("O volume da lata de azeite eh %.2f\n", volume);

	system("pause");
    return 0;
}

