/*
	DESAFIO 1:
		Elabore um programa para realizar criação de bandeiras obedecendo os seguintes critérios:(bandeira sem cor)
		•	O usuário seleciona o tamanho da bandeira quanto seu tamanho vertical e horizontal;
		•	O usuário pode enfeitar sua bandeira com as seguintes formatações:
			Faixa vertical, indicando a quantidade de colunas(largura) e o caractere que irá enfeitar a faixa (o usuário deve indicar em qual coluna inicia a faixa);
			Faixa horizontal, indicando a quantidade de linhas(largura) e o caractere que irá enfeitar a faixa (o usuário deve indicar em qual linha inicia a faixa);
			Faixa diagonal, indicando qual sentido e onde inicia-se;
			Quadrados: Indicar onde iniciar e o tamanho do quadrado, além do caractere a ser utilizado;

		Obs.: É necessário mostrar a bandeira a cada ação.
*/
#include<iostream>
#include<locale>
#include<string>

//Declarando variável global
int length[2];


//Funções do programa
char** alocacaoDinamica();
void desalocacao(char** matriz);

void adicionaCaracteres(char** matriz);

void menuCriacao(char** matriz);
void apresentar(char** matriz);
void faixaVertical(char** matriz);
void faixaHorizontal(char** matriz);
void faixaDiagonal(char** matriz);
void quadrado(char** matriz);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	char** matriz;

	//Entrada do tamanho da matriz
	std::cout << "Digite o tamanho da matriz:" << std::endl;
	std::cout << "Linhas: ";
	std::cin >> length[0];
	std::cout << "Colunas: ";
	std::cin >> length[1];
	system("cls");

	//Alocação Dinâmica
	matriz = alocacaoDinamica();
	adicionaCaracteres(matriz);

	//Menu de criação
	menuCriacao(matriz);
	//desalocacao(matriz);
}

char** alocacaoDinamica()
{
	//Alocando Linhas
	char** matriz = (char**)malloc(length[0] * sizeof(char));

	//Alocando Colunas
	for (int i = 0; i < length[0]; i++)
	{
		matriz[i] = (char*)malloc(length[1] * sizeof(char));
	}

	return matriz;
}
void desalocacao(char** matriz)
{
	//Desalocando as colunas
	for (int i = 0; i < length[0]; i++)
	{
		free(matriz[i]);
	}

	//Desalocando as linhas
	free(matriz);
}

void adicionaCaracteres(char** matriz)
{
	for (int i = 0; i < length[0]; i++)
	{
		for (int j = 0; j < length[1]; j++)
		{
			matriz[i][j] = '-';
		}
	}
}

void menuCriacao(char** matriz)
{
	char opcao;
	bool loop = true;

	do
	{
		system("cls");

		//Apresentar a bandeira
		apresentar(matriz);

		//Menu de Opções
		std::cout << "- - - - - - OPÇÕES DE CRIAÇÃO - - - - - -" << std::endl;
		std::cout << "1 - Faixa Vertical" << std::endl << "2 - Faixa Horizontal" << std::endl << "3 - Faixa Diagonal" << std::endl << "4 - Quadrado" << std::endl << "5 - Sair" << std::endl;
		std::cin >> opcao;
		std::cout << std::endl;

		switch (opcao)
		{
		case '1':
			faixaVertical(matriz);
			break;
		case '2':
			faixaHorizontal(matriz);
			break;
		case '3':
			faixaDiagonal(matriz);
			break;
		case '4':
			quadrado(matriz);
			break;
		case '5':
			loop = false;
			break;
		default:
			std::cout << "Opção Inválida!" << std::endl;
			system("pause");
			break;
		}
	} while (loop == true);
}
void apresentar(char** matriz)
{
	std::cout << "- - - - - - - - - - - BANDEIRA - - - - - - - - - - -" << std::endl;
	for (int i = 0; i < length[0]; i++)
	{
		for (int j = 0; j < length[1]; j++)
		{
			std::cout << matriz[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
void faixaVertical(char** matriz)
{
	int col, larg;
	char caractere;

	system("cls");

	std::cout << "Digite a posição da faixa vertical:" << std::endl;
	std::cout << "Coluna: ";
	std::cin >> col;
	std::cout << std::endl;

	std::cout << "Digite a largura da faixa vertical:" << std::endl;
	std::cin >> larg;
	std::cout << std::endl;

	std::cout << "Digite o caractere para a faixa vertical:" << std::endl;
	std::cin >> caractere;
	std::cout << std::endl;

	for (int i = 0; i < length[0]; i++)
	{
		for (int j = col; j < (col + larg) && j < length[1]; j++)
		{
			matriz[i][j] = caractere;
		}
	}
}
void faixaHorizontal(char** matriz)
{
	int lin, larg;
	char caractere;

	system("cls");

	std::cout << "Digite a posição da faixa horizontal:" << std::endl;
	std::cout << "Linha: ";
	std::cin >> lin;
	std::cout << std::endl;

	std::cout << "Digite a largura da faixa horizontal:" << std::endl;
	std::cin >> larg;
	std::cout << std::endl;

	std::cout << "Digite o caractere para a faixa horizontal:" << std::endl;
	std::cin >> caractere;
	std::cout << std::endl;

	for (int i = lin; i < (lin + larg) && i < length[0]; i++)
	{
		for (int j = 0; j < length[1]; j++)
		{
			matriz[i][j] = caractere;
		}
	}
}
void faixaDiagonal(char** matriz)
{
	int cont = 0, col, larg;
	char caractere;

	system("cls");

	std::cout << "Digite a posição da faixa diagonal:" << std::endl;
	std::cout << "Coluna: ";
	std::cin >> col;
	std::cout << std::endl;

	std::cout << "Digite a largura da faixa diagonal:" << std::endl;
	std::cin >> larg;

	std::cout << "Digite o caractere para a faixa diagonal:" << std::endl;
	std::cin >> caractere;
	std::cout << std::endl;

	for (int i = 0; i < length[0]; i++)
	{
		for (int j = col; j < (col + larg) && j < length[1]; j++)
		{
			matriz[i][j + cont] = caractere;
		}
		cont++;
	}
}
void quadrado(char** matriz)
{
	int lin, col, larg;
	char caractere;

	system("cls");

	std::cout << "Digite a posição do quadrado:" << std::endl;
	std::cout << "Linha: ";
	std::cin >> lin;
	std::cout << "Coluna: ";
	std::cin >> col;
	std::cout << std::endl;

	std::cout << "Digite a largura do quadrado:" << std::endl;
	std::cin >> larg;

	std::cout << "Digite o caractere para o quadrado:" << std::endl;
	std::cin >> caractere;
	std::cout << std::endl;

	for (int i = lin; i < (lin + larg) && i < length[0]; i++)
	{
		for (int j = col; j < (col + larg) && j < length[1]; j++)
		{
			matriz[i][j] = caractere;
		}
	}
}