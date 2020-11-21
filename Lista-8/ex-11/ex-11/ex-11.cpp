/*
	EXERCÍCIO 11:
		Construa um programa que leia o número de linhas e de colunas de uma matriz de números reais, aloque espaço dinamicamente
		para esta e a inicialize com valores fornecidos pelo usuário. Ao final, o programa deverá retornar a matriz na saída padrão 
		com layout apropriado.
*/
#include<iostream>
#include<locale>
#include<string>

//Funções do programa
float** alocacaoDinamica(int length[]);
void entradaDados(float** matriz, int length[]);
void apresentarMatriz(float** matriz, int length[]);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	float** matriz;
	int length[2];

	//ALOCAÇÕ DINÂMICA - MODELO (VETOR DE PONTEIROS DE MULTIPLAS LINHAS)
	matriz = alocacaoDinamica(length);

	entradaDados(matriz, length);
	apresentarMatriz(matriz, length);
}

float** alocacaoDinamica(int length[])
{
	float** matriz;

	//Entrada do length da matriz
	std::cout << "Digite o tamanho da matriz:" << std::endl;
	std::cout << "Linhas: ";
	std::cin >> length[0];
	std::cout << "Colunas: ";
	std::cin >> length[1];
	std::cout << std::endl;

	//Alocando linhas
	matriz = (float**)malloc(length[0] * sizeof(float));

	//Alocando colunas
	for (int i = 0; i < length[0]; i++)
	{
		matriz[i] = (float*)malloc(length[1] * sizeof(float));
	}

	return matriz;
}

void entradaDados(float** matriz, int length[])
{
	std::cout << "- - - - ENTRADA DE DADOS - - - -" << std::endl;
	for (int i = 0; i < length[0]; i++)
	{
		for (int j = 0; j < length[1]; j++)
		{
			std::cin >> matriz[i][j];
		}
	}
	std::cout << std::endl;
}

void apresentarMatriz(float** matriz, int length[])
{
	std::cout << "- - - - APRESENTAR MATRIZ - - - -" << std::endl;
	for (int i = 0; i < length[0]; i++)
	{
		for (int j = 0; j < length[1]; j++)
		{
			std::cout << matriz[i][j] << " ";
		}
		std::cout << std::endl;
	}
}