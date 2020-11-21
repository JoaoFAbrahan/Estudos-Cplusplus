/*
	DESAFIO 2:
		Considere um cadastro de produtos de um estoque, com as seguintes informações para cada produto:
		•	Código de identificação do produto: representado por um valor inteiro
		•	Nome do produto
		•	Quantidade disponível no estoque: representado por um número inteiro
		•	Preço de venda: representado por um valor real

			a.	Defina uma estrutura, denominada produto, que tenha os campos apropriados para guardar as informações de um produto
			b.	Crie um conjunto de N produtos (N é um valor fornecido pelo usuário) e peça ao usuário para entrar com as informações de cada produto
			c.	Encontre o produto com o maior preço de venda
			d.	Encontre o produto com a maior quantidade disponível no estoque
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


//Funções do programa
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
		std::cout << "Código: ";
		std::cin >> estoque[i].codigo;

		std::cin.ignore();//erro
		
		std::cout << "Nome: ";
		std::getline(std::cin, estoque[i].nome);
		std::cout << "Quantidade: ";
		std::cin >> estoque[i].quantidade;
		std::cout << "Preço: R$";
		std::cin >> estoque[i].preco;
		std::cout << std::endl;
	}
	system("cls");
}

void verificaMaiorPreco_e_MaiorQtd(Produto estoque[], int length)
{
	int posMaiorPreco = 0, posMaiorQtd = 0;

	//Verificar maior preço
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
	std::cout << "PRODUTO MAIOR PREÇO:" << std::endl;
	std::cout << "Código: " << estoque[posMaiorPreco].codigo << std::endl;
	std::cout << "Nome: " << estoque[posMaiorPreco].nome << std::endl;
	std::cout << "Quantidade: " << estoque[posMaiorPreco].quantidade << std::endl;
	std::cout << "Preço: " << estoque[posMaiorPreco].preco << std::endl;

	std::cout << std::endl;

	std::cout << "PRODUTO MAIOR QUANTIDADE:" << std::endl;
	std::cout << "Código: " << estoque[posMaiorQtd].codigo << std::endl;
	std::cout << "Nome: " << estoque[posMaiorQtd].nome << std::endl;
	std::cout << "Quantidade: " << estoque[posMaiorQtd].quantidade << std::endl;
	std::cout << "Preço: " << estoque[posMaiorQtd].preco << std::endl;
}