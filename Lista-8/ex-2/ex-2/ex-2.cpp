/*
	EXERCÍCIO 2:
		Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.
*/
#include<iostream>
#include<locale>
#include<string>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int matriz[5][5];

	//Preenchendo a matriz
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == j)
			{
				matriz[i][j] = 1;
			}
			else
			{
				matriz[i][j] = 0;
			}
		}
	}

	//Apresentando a matriz
	std::cout << "- - - - APRESENTANDO MATRIZ - - - -" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << matriz[i][j] << " ";
		}
		std::cout << std::endl;
	}
}