/*
	EXERCÍCIO 6:
		Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão acima da diagonal principal.
*/
#include<iostream>
#include<locale>
#include<string>

//Declarando constantes
#define linhas 3
#define colunas 3


//Funções do programa
void entradaDados(int matriz[linhas][colunas]);
void apresentar(int matriz[linhas][colunas]);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	int matriz[3][3];

	entradaDados(matriz);
	apresentar(matriz);
}

void entradaDados(int matriz[linhas][colunas])
{
	std::cout << "Digite os valores da matriz:" << std::endl;
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			std::cin >> matriz[i][j];
		}
	}
	std::cout << std::endl;
}

void apresentar(int matriz[linhas][colunas])
{
	int soma = 0;

	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			if (i < j)
			{
				soma += matriz[i][j];
			}
		}
	}
	std::cout << "A soma dos números acima da diagonal principal é: " << soma << std::endl;
}