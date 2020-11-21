/*
	EXERCÍCIO 5:
		Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos são da forma:
			a.	A[i][j] = 2i + 7j - 2 se i < j;
			b.	A[i][j] = 3i² - 1 se i = j;
			c.	A[i][j] = 4i³ - 5j² + 1 se i > j:
*/
#include<iostream>
#include<locale>
#include<string>
#include<cmath>

//Declaração de  length da matriz
int const linhas = 10, colunas = 10;


//Funções do programa
void preencheMatriz(int matriz[linhas][colunas]);
void apresentar(int matriz[linhas][colunas]);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	int matriz[linhas][colunas];

	preencheMatriz(matriz);
	apresentar(matriz);
}

void preencheMatriz(int matriz[linhas][colunas])
{
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			if (i < j)
			{
				matriz[i][j] = (2 * i) + (7 * j);
			}
			else if (i == j)
			{
				matriz[i][j] = pow((3 * i), 2) - 1;
			}
			else
			{
				matriz[i][j] = pow((4 * i), 2) - pow((5 * j), 2) + 1;
			}
		}
	}
}

void apresentar(int matriz[linhas][colunas])
{
	std::cout << "- - - - APRESENTAR MATRIZ - - - -" << std::endl;
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			std::cout << matriz[i][j] << " ";
		}
		std::cout << std::endl;
	}
}