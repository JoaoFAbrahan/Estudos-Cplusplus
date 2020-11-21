/*
	EXERC�CIO 10:
		Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimens�es definidas pelo usu�rio e a leia. Em seguida, 
		implemente uma fun��o que receba um valor, retorne 1 caso o valor esteja na matriz ou retorne 0 caso n�o esteja na matriz.
*/
#include<iostream>
#include<locale>
#include<string>

//Fun��es do programa
void entradaDados(int** matriz, int linhas, int colunas);
int localizaNumero(int** matriz, int linhas, int colunas);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	int** matriz;
	int linhas, colunas;

	std::cout << "Digite o tamanho da matriz:" << std::endl;
	std::cout << "Linha: ";
	std::cin >> linhas;
	std::cout << "Colunas: ";
	std::cin >> colunas;
	std::cout << std::endl;


	//ALOCA��O DIN�MICA - MODELO (VETOR DE  PONTEIROS DE LINHAS M�LTIPLAS)
	//alocando linhas
	matriz = (int**)malloc(linhas * sizeof(int));

	//alocando colunas
	for (int i = 0; i < linhas; i++)
	{
		matriz[i] = (int*)malloc(colunas * sizeof(int));
	}


	entradaDados(matriz, linhas, colunas);
	std::cout << "Numero Localizado: (1 - Sim / 0 - N�o)" << std::endl << localizaNumero(matriz, linhas, colunas) << std::endl;
}

void entradaDados(int** matriz, int linhas, int colunas)
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

int localizaNumero(int** matriz, int linhas, int colunas)
{
	bool numeroLocalizado = false;
	int num;

	std::cout << "Digite um n�mero para ser localizado" << std::endl;
	std::cin >> num;
	std::cout << std::endl;

	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			if (matriz[i][j] == num)
			{
				numeroLocalizado = true;
				break;
			}
		}
	}

	if (numeroLocalizado == true)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}