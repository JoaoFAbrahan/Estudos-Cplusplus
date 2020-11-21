/*
	DESAFIO 2:
		Considere um cadastro de produtos de um estoque, com as seguintes informa��es para cada produto:
		�	C�digo de identifica��o do produto: representado por um valor inteiro
		�	Nome do produto
		�	Quantidade dispon�vel no estoque: representado por um n�mero inteiro
		�	Pre�o de venda: representado por um valor real

			a.	Defina uma estrutura, denominada produto, que tenha os campos apropriados para guardar as informa��es de um produto
			b.	Crie um conjunto de N produtos (N � um valor fornecido pelo usu�rio) e pe�a ao usu�rio para entrar com as informa��es de cada produto
			c.	Encontre o produto com o maior pre�o de venda
			d.	Encontre o produto com a maior quantidade dispon�vel no estoque
*/
#include<iostream>
#include<locale>
#include<string>
#pragma warning(disable:4996)


//Declarando struct
struct Produto
{
	int codigo;
	std::string nome;
	int quantidade;
	float preco;
};


//Fun��es do programa
Produto* alocacaoDinamica(int* length);

void cadastrandoProdutos(Produto estoque[], int length);
void verificaMaiorPreco_e_MaiorQtd(Produto estoque[], int length);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	Produto* estoque;
	int length;

	estoque = alocacaoDinamica(&length);

	cadastrandoProdutos(estoque, length);
	verificaMaiorPreco_e_MaiorQtd(estoque, length);

	free(estoque);
}

Produto* alocacaoDinamica(int* length)
{
	std::cout << "Digite a quantidade de produtos a serem cadastrados:" << std::endl;
	std::cin >> *length;
	system("cls");

	return (Produto*)calloc(*length, sizeof(Produto));
}

void cadastrandoProdutos(Produto estoque[], int length)
{
	std::cout << "- - - - CADASTRAMENTO: - - - -" << std::endl;
	for (int i = 0; i < length; i++)
	{
		std::cout << "PRODUTO " << i + 1 << ":" << std::endl;
		std::cout << "C�digo: ";
		std::cin >> estoque[i].codigo;

		std::cin.ignore();//erro
		
		std::cout << "Nome: ";
		std::getline(std::cin, estoque[i].nome);
		std::cout << "Quantidade: ";
		std::cin >> estoque[i].quantidade;
		std::cout << "Pre�o: R$";
		std::cin >> estoque[i].preco;
		std::cout << std::endl;
	}
	system("cls");
}

void verificaMaiorPreco_e_MaiorQtd(Produto estoque[], int length)
{
	int posMaiorPreco = 0, posMaiorQtd = 0;

	//Verificar maior pre�o
	for (int i = 1; i < length; i++)
	{
		if (estoque[posMaiorPreco].preco < estoque[i].preco)
		{
			posMaiorPreco = i;
		}
	}

	//Verifica maior quantidade
	for (int i = 1; i < length; i++)
	{
		if (estoque[posMaiorQtd].quantidade < estoque[i].quantidade)
		{
			posMaiorQtd = i;
		}
	}
	
	std::cout << "- - - - - - APRESENTAR: - - - - - -" << std::endl;
	std::cout << "PRODUTO MAIOR PRE�O:" << std::endl;
	std::cout << "C�digo: " << estoque[posMaiorPreco].codigo << std::endl;
	std::cout << "Nome: " << estoque[posMaiorPreco].nome << std::endl;
	std::cout << "Quantidade: " << estoque[posMaiorPreco].quantidade << std::endl;
	std::cout << "Pre�o: " << estoque[posMaiorPreco].preco << std::endl;

	std::cout << std::endl;

	std::cout << "PRODUTO MAIOR QUANTIDADE:" << std::endl;
	std::cout << "C�digo: " << estoque[posMaiorQtd].codigo << std::endl;
	std::cout << "Nome: " << estoque[posMaiorQtd].nome << std::endl;
	std::cout << "Quantidade: " << estoque[posMaiorQtd].quantidade << std::endl;
	std::cout << "Pre�o: " << estoque[posMaiorQtd].preco << std::endl;
}