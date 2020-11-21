/*
	EXERCÍCIO 12:
		Faça um programa que simule a memória de um computador: o usuário irá especificar o tamanho da memória, ou seja, 
		quantos bytes serão alocados do tipo inteiro. Para tanto, a memória solicitada deve ser um valor múltiplo do 
		tamanho do tipo inteiro. Em seguida, o usuário terá 2 opções: inserir um valor em uma determinada posição ou 
		consultar o valor contido em uma determinada posição. A memória deve iniciar com todos os dados zerados.
*/
#include<iostream>
#include<locale>
#include<string>

//Funções do pograma
int* especificaBytes(int* length);
void zerarValores(int vetor[], int length);

void menuPrincipal(int vetor[], int length);
void inserirValor(int vetor[], int length);
void consultaValor(int vetor[], int length);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	int* vetor;
	int length;

	vetor = especificaBytes(&length);
	zerarValores(vetor, length);

	menuPrincipal(vetor, length);
	free(vetor);
}

int* especificaBytes(int* length)
{
	int tamanho;
	bool loop;
	do
	{
		system("cls");
		loop = false;

		std::cout << "Digite quantos bytes deseja alocar: (Deve ser multiplo de 4)" << std::endl;
		std::cin >> tamanho;

		if (tamanho % 4 == 0)
		{
			*length = tamanho / 4;
			std::cout << "Valor alocado com sucesso!" << std::endl << std::endl;
			system("pause");

			return (int*)malloc(tamanho);
		}
		else
		{
			loop = true;
			std::cout << "Valor inválido!" << std::endl;
			system("pause");
		}
	} while (loop == true);
}
void zerarValores(int vetor[], int length)
{
	for (int i = 0; i < length; i++)
	{
		vetor[i] = 0;
	}
}

void menuPrincipal(int vetor[], int length)
{
	char opcao;
	bool loop = true;
	do
	{
		system("cls");

		std::cout << "- - - - MENU PRINCIPAL - - - -" << std::endl;
		std::cout << "1 - Inserir Valor" << std::endl << "2 - Consultar Valor" << std::endl << "3 - Sair" << std::endl;
		std::cin >> opcao;

		switch (opcao)
		{
		case '1':
			inserirValor(vetor, length);
			break;
		case '2':
			consultaValor(vetor, length);
			break;
		case '3':
			loop = false;
			break;
		default:
			std::cout << "Opção Inválida!" << std::endl;
			system("pause");
			break;
		}
	} while (loop == true);
}
void inserirValor(int vetor[], int length)
{
	int posicao, valor;
	bool loop = true;
	do
	{
		system("cls");
		std::cout << "- - - - INSEIR VALOR - - - -" << std::endl;
		std::cout << "Tamanho do Vetor: " << length << std::endl;
		std::cout << "Escolha a posição: ";
		std::cin >> posicao;
		std::cout << std::endl;

		if (posicao < length)
		{
			loop = false;
			std::cout << "Digite o novo valor:" << std::endl;
			std::cin >> valor;

			vetor[posicao] = valor;
		}
		else
		{
			std::cout << "Posição inválida!" << std::endl;
			system("pause");
		}
	} while (loop == true);
}
void consultaValor(int vetor[], int length)
{
	int posicao;
	bool loop = true;
	do
	{
		system("cls");
		std::cout << "- - - - CONSULTAR VALOR - - - -" << std::endl;
		std::cout << "Tamanho do Vetor: " << length << std::endl;
		std::cout << "Escolha a posição: ";
		std::cin >> posicao;
		std::cout << std::endl;

		if (posicao < length)
		{
			loop = false;
			std::cout << "Valor: " << vetor[posicao] << std::endl;
			system("pause");
		}
		else
		{
			std::cout << "Posição inválida!" << std::endl;
			system("pause");
		}
	} while (loop == true);
}