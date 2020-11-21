/*
	EXERCÍCIO 3:
		Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da coluna de cada elemento. Em seguida, imprima na tela a matriz.
*/
#include<iostream>
#include<locale>
#include<string>

//Funções do programa
void produtoLinhaColuna(int matriz[4][4]);
void apresentar(int matriz[4][4]);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int matriz[4][4];

	produtoLinhaColuna(matriz);
	apresentar(matriz);
}

void produtoLinhaColuna(int matriz[4][4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			matriz[i][j] = i * j;
		}
	}
}

void apresentar(int matriz[4][4])
{
	std::cout << "- - - - APRESENTAR MATRIZ - - - -" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << matriz[i][j] << " ";
		}
		std::cout << std::endl;
	}
}