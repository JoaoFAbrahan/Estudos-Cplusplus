/*
	EXERC�CIO 12:
		Fa�a um programa que leia dois n�meros N e M e:
		�	Crie e leia uma matriz de inteiros N x M;
		�	Localize os tr�s maiores n�meros de uma matriz e mostre a linha e a coluna onde est�o.
*/
#include<iostream>
#include<locale>
#include<string>

//Vari�veis globais
int n, m;


//Fun��es do programa
int** alocacaoDinamica();
void desalocacaoMatriz(int** matriz);

void adicionaValor(int** matriz);
void localizaMaiores(int** matriz);
void ordenacaoMatriz(int** matriz);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	int** matriz = alocacaoDinamica();

	adicionaValor(matriz);
	localizaMaiores(matriz);
}

int** alocacaoDinamica()
{

	std::cout << "Digite o tamanho da matriz:" << std::endl;
	std::cout << "Linhas: ";
	std::cin >> n;
	std::cout << "Colunas: ";
	std::cin >> m;
	std::cout << std::endl;

	//Alocando linhas
	int** matriz = (int**)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++)
	{
		//Alocando as colunas em cada linha
		matriz[i] = (int*)malloc(m * sizeof(int));
	}


	return matriz;
}
void desalocacaoMatriz(int** matriz)
{
	for (int i = 0; i < n; i++)
	{
		free(matriz[i]);
	}
	free(matriz);

}

void localizaMaiores(int** matriz)
{	
	//Ordenando matriz
	ordenacaoMatriz(matriz);

	//Apresenta os 3 maiores
	std::cout << "- - - - 3 MAIORES - - - -" << std::endl;
	for (int j = 0; j < 3; j++)
	{
		std::cout << matriz[0][j] << " ";
	}
	std::cout << std::endl;

	//Desalocando matriz
	desalocacaoMatriz(matriz);
}
void ordenacaoMatriz(int** matriz)
{

	int aux;
	bool loop;

	//Ordena em ordem decrescente os elementos entre as colunas (Algor�tmo Bubble Sort)
	do
	{
		loop = false;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m - 1; j++)
			{
				if (matriz[i][j] < matriz[i][j + 1])
				{
					aux = matriz[i][j];
					matriz[i][j] = matriz[i][j + 1];
					matriz[i][j + 1] = aux;
					loop = true;
				}
			}
		}
	} while (loop == true);

	//Ordena em ordem decrescente os elementos entre as linhas
	do
	{
		loop = false;
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (matriz[i][j] < matriz[i + 1][j])
				{
					aux = matriz[i][j];
					matriz[i][j] = matriz[i + 1][j];
					matriz[i + 1][j] = aux;
					loop = true;
				}
			}
		}
	} while (loop == true);
}


void adicionaValor(int** matriz)
{
	int cont = 1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matriz[i][j] = cont;
			cont++;
		}
	}
}