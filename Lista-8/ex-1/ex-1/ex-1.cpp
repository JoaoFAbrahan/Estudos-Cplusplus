/*
	EXERCÍCIO 1:
		Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.
*/
#include<iostream>
#include<locale>
#include<string>
#include<fstream>


int main()
{
	setlocale(LC_ALL, "Portuguese");

	int matriz[4][4];
	int maiorDez = 0;

	std::cout << "Digite os valores:" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cin >> matriz[i][j];

			if (matriz[i][j] > 10)
			{
				maiorDez++;
			}
		}
	}
	system("cls");

	std::cout << "Existem " << maiorDez << " números maiores que dez." << std::endl;
}