/*
	EXERCÍCIO 8:
		Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.
*/
#include<iostream>
#include<locale>
#include<string>

//Declarando length da matriz
int const linhas = 3, colunas = 3;


//Funções do programa
void entradaDados(int matriz[linhas][colunas]);
void transposta(int matriz[linhas][colunas], int matrizTransposta[colunas][linhas]);

void apresentarTrnsposta(int matrizTransposta[colunas][linhas]);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	int matriz[linhas][colunas], matrizTransposta[colunas][linhas];

	entradaDados(matriz);
	transposta(matriz, matrizTransposta);

	apresentarTrnsposta(matrizTransposta);
}

void entradaDados(int matriz[linhas][colunas])
{
	std::cout << "- - - - ENTRADA DE DADOS - - - -" << std::endl;
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			std::cin >> matriz[i][j];
		}
	}
	std::cout << std::endl;
}

void transposta(int matriz[linhas][colunas], int matrizTransposta[colunas][linhas])
{
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			matrizTransposta[j][i] = matriz[i][j];
		}
	}
}

void apresentarTrnsposta(int matrizTransposta[colunas][linhas])
{
	std::cout << "- - - - MATRIZ TRANSPOSTA - - - -" << std::endl;
	for (int i = 0; i < colunas; i++)
	{
		for (int j = 0; j < linhas; j++)
		{
			std::cout << matrizTransposta[i][j] << " ";
		}
		std::cout << std::endl;
	}
}