/*
	EXERCÍCIO 7:
		Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na diagonal secundária.
*/
#include<iostream>
#include<locale>
#include<string>

//Declarando tamanho da matriz
int const linhas = 3, colunas = 3;


//Funções do programa
void entradaDados(int matriz[linhas][colunas]);
void apresentar(int matriz[linhas][colunas]);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	int matriz[linhas][colunas];

	entradaDados(matriz);
	apresentar(matriz);
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

void apresentar(int matriz[linhas][colunas])
{
	int somaDiagonalSecundaria = 0;
	
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			if (j == ((colunas - 1) - i))
			{
				somaDiagonalSecundaria += matriz[i][j];
			}
		}
	}

	std::cout << "A soma dos números da diagonal secundária é: " << somaDiagonalSecundaria << std::endl;
}