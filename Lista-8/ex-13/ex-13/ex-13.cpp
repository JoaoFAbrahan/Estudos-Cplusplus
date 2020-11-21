/*
	EXERCÍCIO 13:
		Faça um programa que leia dois números N e M:
		•	Crie e leia uma matriz N x M de inteiros;
		•	Crie e construa uma matriz transposta M x N de inteiros.
		•	Mostre as duas matrizes.
*/
#include<iostream>
#include<locale>
#include<string>

//Declarando variável global
int length[2];


//Funções do programa
int** alocacaoDinamica(int lin, int col);
void desalocacaoMatriz(int** matriz, int lin);

void adicionarValores(int** matriz);
int** gerarMatrizTransposta(int** matriz);

void apresentar(int** matriz, int lin, int col);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	int** matriz, ** matrizTransposta;

	//Entrada de dados
	std::cout << "Digite o tamanho da matriz:" << std::endl;
	std::cout << "Linhas: ";
	std::cin >> length[0];
	std::cout << "Colunas: ";
	std::cin >> length[1];
	std::cout << std::endl;

	//Alocação Dinâmica
	matriz = alocacaoDinamica(length[0], length[1]);
	adicionarValores(matriz);

	//Gerando a transposta
	matrizTransposta = gerarMatrizTransposta(matriz);

	//Apresentar
	std::cout << "- - - - MATRIZ PADRÃO - - - -" << std::endl;
	apresentar(matriz, length[0], length[1]);
	desalocacaoMatriz(matriz, length[0]);

	std::cout << "- - - MATRIZ TRANSPOSTA - - -" << std::endl;
	apresentar(matrizTransposta, length[1], length[0]);
	desalocacaoMatriz(matrizTransposta, length[1]);
}

int** alocacaoDinamica(int lin, int col)
{
	//Alocando vetor de ponteiros (Linhas)
	int** matriz = (int**)malloc(lin * sizeof(int));

	//Alocando vetor para cada linha (Colunas)
	for (int i = 0; i < lin; i++)
	{
		matriz[i] = (int*)malloc(col * sizeof(int));
	}

	return matriz;
}
void desalocacaoMatriz(int** matriz, int lin)
{
	//Desalocando colunas
	for (int i = 0; i < lin; i++)
	{
		free(matriz[i]);
	}

	//Desalocando vetor de ponteiros
	free(matriz);
}

void adicionarValores(int** matriz)
{
	int cont = 1;

	for (int i = 0; i < length[0]; i++)
	{
		for (int j = 0; j < length[1]; j++)
		{
			matriz[i][j] = cont++;
		}
	}
}

int** gerarMatrizTransposta(int** matriz)
{
	//Alocando a matrizTransposta
	int** matrizTransposta = alocacaoDinamica(length[1], length[0]);

	for (int i = 0; i < length[1]; i++)
	{
		for (int j = 0; j < length[0]; j++)
		{
			matrizTransposta[i][j] = matriz[j][i];
		}
	}

	return matrizTransposta;
}

void apresentar(int** matriz, int lin, int col)
{
	for (int i = 0; i < lin; i++)
	{
		for (int j = 0; j < col; j++)
		{
			std::cout << matriz[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}