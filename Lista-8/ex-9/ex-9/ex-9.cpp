/*
	EXERCÍCIO 9:
		Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de bingo. Sabendo que cada cartela 
		deverá conter 5 linhas de 5 números, gere estes dados de modo a não ter números repetidos dentro das cartelas. 
		O programa deve exibir na tela a cartela gerada.
*/
#include<iostream>
#include<locale>
#include<string>
#include<ctime>

//Declarando length matriz
int const linhas = 5, colunas = 5;


//Funções do programa
void gerarNumeros(int matriz[linhas][colunas]);
void apresentar(int matriz[linhas][colunas]);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	int matriz[linhas][colunas];

	gerarNumeros(matriz);
	apresentar(matriz);
}

void gerarNumeros(int matriz[linhas][colunas])
{
	srand(time(NULL));

	int vetNum[linhas * colunas];
	int cont = 0, randNum;
	bool numExistente;

	while (cont < linhas * colunas)
	{
		numExistente = false;

		randNum = rand() % 100;

		for (int i = 0; i < linhas * colunas; i++)
		{
			if (vetNum[i] == randNum)
			{
				numExistente = true;
				break;
			}
		}

		if (numExistente == false)
		{
			vetNum[cont] = randNum;
			cont++;
		}
	}

	cont = 0;
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			matriz[i][j] = vetNum[cont];
			cont++;
		}
	}
}

void apresentar(int matriz[linhas][colunas])
{
	std::cout << "- - - - APRESENTAR CARTELA - - - -" << std::endl;
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			std::cout << matriz[i][j] << " ";
		}
		std::cout << std::endl;
	}
}