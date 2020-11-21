/*
	EXERCÍCIO 9:
		Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço e telefone de 5 pessoas e os imprima em ordem alfabética.
*/
#include<iostream>
#include<locale>
#include<string>

//Declarando estrutura
typedef struct Contato
{
	std::string nome;
	std::string telefone;
	std::string endereco;
}t_Contato;


//Declarando length do vetor
int const LENGTH = 5;


//Funções do programa
void entradaDados(t_Contato lista[LENGTH]);
void organizaDados(t_Contato lista[LENGTH]);
void apresentarDados(t_Contato lista[LENGTH]);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	t_Contato lista[LENGTH];

	entradaDados(lista);

	apresentarDados(lista);
}

void entradaDados(t_Contato lista[LENGTH])
{
	std::cout << "- - - ADICIONANDO CONTATOS: - - -" << std::endl;
	for (int i = 0; i < LENGTH; i++)
	{
		std::cout << "CONTATO " << i + 1 << ":" << std::endl;
		std::cout << "Nome: ";
		std::getline(std::cin, lista[i].nome);
		std::cout << "Telefone: ";
		std::getline(std::cin, lista[i].telefone);
		std::cout << "Endereço: ";
		std::getline(std::cin, lista[i].endereco);
		std::cout << std::endl;
	}
	std::cout << std::endl;

	//Organizando em ordem alfabética
	organizaDados(lista);
}

void organizaDados(t_Contato lista[LENGTH])
{
	std::string aux;

	bool loop;
	do
	{
		loop = false;

		for (int i = 0; i < LENGTH - 1; i++)
		{
			if (lista[i].nome > lista[i + 1].nome)
			{
				aux = lista[i].nome;
				lista[i].nome = lista[i + 1].nome;
				lista[i + 1].nome = aux;

				loop = true;
			}
		}
	} while (loop == true);
}

void apresentarDados(t_Contato lista[LENGTH])
{
	std::cout << "- - - LISTA DE CONTATOS: - - -" << std::endl;
	for (int i = 0; i < LENGTH; i++)
	{
		std::cout << "CONTATO " << i + 1 << ":" << std::endl;
		std::cout << "Nome: " << lista[i].nome << std::endl;
		std::cout << "Telefone: " << lista[i].telefone << std::endl;
		std::cout << "Endereço: " << lista[i].endereco << std::endl;
		std::cout << std::endl;
	}
}