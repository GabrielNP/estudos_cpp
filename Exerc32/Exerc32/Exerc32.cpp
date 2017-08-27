// Exerc32.cpp : Define o ponto de entrada para a aplicação de console.
// Em uma escola uma professora necessita de um programa que leia as 3 notas escolares de um aluno, calcule a média e apresente-a, 
// depois deverá informar se o aluno foi APROVADO, baseando-se na média da escola que é 6.
// OBS: o programa deve perguntar: "Deseja digitar as notas de outro aluno? (S/N)"

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	float i, media = 0, nota1, nota2, nota3;
	char resposta = 's';

	while (resposta == 's' || resposta == 'S')
	{

		printf("Digite a primeira nota do aluno: ");
		scanf_s("%f", &nota1);

		printf("Digite a segunda nota do aluno: ");
		scanf_s("%f", &nota2);

		printf("Digite a terceira nota do aluno: ");
		scanf_s("%f", &nota3);

				
		media = (nota1 + nota2 + nota3) / 3;

		if (media >= 6)
			printf("\nEste aluno obteve a media %.2f e esta APROVADO!\n\n", media);
		else
			printf("\nEste aluno obteve a media %.2f e esta REPROVADO!\n\n", media);

		printf("Deseja digitar as notas de outro aluno? (S/N): ");
		resposta = _gettche();
		printf("\n\n");;

		system("cls");
	}
	
	printf("\t\t*FIM DO PROGRAMA*\n\n\t\tObrigado por utilizar\n\n");
	system("pause");
    return 0;
}

