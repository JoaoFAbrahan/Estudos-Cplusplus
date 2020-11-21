/*
	EXERC�CIO 12:
		Fa�a um programa que simule a mem�ria de um computador: o usu�rio ir� especificar o tamanho da mem�ria, ou seja, 
		quantos bytes ser�o alocados do tipo inteiro. Para tanto, a mem�ria solicitada deve ser um valor m�ltiplo do 
		tamanho do tipo inteiro. Em seguida, o usu�rio ter� 2 op��es: inserir um valor em uma determinada posi��o ou 
		consultar o valor contido em uma determinada posi��o. A mem�ria deve iniciar com todos os dados zerados.
*/
#include<iostream>
#include<locale>
#include<string>

//Fun��es do pograma
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
			std::cout << "Valor inv�lido!" << std::endl;
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
			std::cout << "Op��o Inv�lida!" << std::endl;
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
		std::cout << "Escolha a posi��o: ";
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
			std::cout << "Posi��o inv�lida!" << std::endl;
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
		std::cout << "Escolha a posi��o: ";
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
			std::cout << "Posi��o inv�lida!" << std::endl;
			system("pause");
		}
	} while (loop == true);
}