/*
	EXERCÍCIO 4:
		Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição das matrizes lidas.
*/
#include<iostream>
#include<locale>
#include<string>

//Declarando tamanho da matriz por constantes
int const linhas = 4, colunas = 4;


//Funções do programa
void entradaDados(int matriz[linhas][colunas]);
void maioresValores(int mat1[linhas][colunas], int mat2[linhas][colunas], int finalMatriz[linhas][colunas]);
void apresentar(int matriz[linhas][colunas]);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	int primeiraMatriz[linhas][colunas], segundaMatriz[linhas][colunas], matrizFinal[linhas][colunas];;

	std::cout << "ENTRADA DADOS MATRIZ - 1:" << std::endl;
	entradaDados(primeiraMatriz);
	std::cout << std::endl;

	std::cout << "ENTRADA DADOS MATRIZ - 2:" << std::endl;
	entradaDados(segundaMatriz);
	std::cout << std::endl;

	maioresValores(primeiraMatriz, segundaMatriz, matrizFinal);

	apresentar(matrizFinal);
}

void entradaDados(int matriz[linhas][colunas])
{
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			std::cin >> matriz[i][j];
		}
	}
}

void maioresValores(int mat1[linhas][colunas], int mat2[linhas][colunas], int finalMatriz[linhas][colunas])
{
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			if (mat1[i][j] > mat2[i][j])
			{
				finalMatriz[i][j] = mat1[i][j];
			}
			else
			{
				finalMatriz[i][j] = mat2[i][j];
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