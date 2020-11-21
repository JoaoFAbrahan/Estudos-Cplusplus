/*
	DESAFIO 1:
		Faça um programa que aloque até 10 nomes, e tenha a opção de pesquisar se determinado nome está cadastrado, dar a opção
		de alterar ou excluir aquele nome. Caso o nome seja excluído, elabore uma função para realizar a eliminação de lacunas entre
		os nomes, ou seja, remover os espaços em branco entre os elementos ajustando todos para o início.
*/
#include<iostream>
#include<locale>
#include<string>

//Delcarando length do vetor
int const LENGTH = 10;


//Funções do programa
void menu_Principal(std::string lista[LENGTH]);

void cadastrar_Nomes(std::string lista[LENGTH], int* cont);
void pesquisa_Nomes(std::string lista[LENGTH], int* cont);
void alterar_Nome(std::string lista[LENGTH], int pos);
void deletar_Nome(std::string lista[LENGTH], int pos, int** cont);

void apresentar_Nomes(std::string const lista[LENGTH]);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::string lista[LENGTH];

	menu_Principal(lista);
}

/// <summary>
/// Menu Principal do programa, contem todas as funções dentro dele
/// </summary>
/// <param name="lista"></param>
void menu_Principal(std::string lista[LENGTH])
{
	char opcao;
	int contador = 0;

	bool loop = true;
	do
	{
		system("cls");

		std::cout << "- - - - MENU PRINCIPAL: - - - -" << std::endl;
		std::cout << "1 - Cadastrar." << std::endl << "2 - Pesquisar." << std::endl << "3 - Apresentar Lista." << std::endl << "4 - Sair." << std::endl;
		std::cin >> opcao;

		switch (opcao)
		{
		case '1':
			cadastrar_Nomes(lista, &contador);

			break;
		case '2':
			pesquisa_Nomes(lista, &contador);

			break;
		case '3':
			apresentar_Nomes(lista);

			break;
		case '4':
			std::cout << std::endl << "Até a próxima!" << std::endl;
			loop = false;
			break;
		default:
			std::cout << "Opção inválida!" << std::endl;
			system("pause");
			break;
		}
	} while (loop == true);
}

/// <summary>
/// Função de Cadastramento, adiciona nome na lista.
/// </summary>
/// <param name="lista"></param>
/// <param name="cont"></param>
void cadastrar_Nomes(std::string lista[LENGTH], int* cont)
{
	system("cls");

	//Verifica se existe espaço na lista para adicionar nome
	if (*cont < LENGTH)
	{
		std::cout << "- - - CADASTRAMENTO: - - -" << std::endl;
		std::cout << "Digite o nome para cadastrar:" << std::endl;
		std::cin.ignore();
		std::getline(std::cin, lista[*cont]);
		std::cout << std::endl;

		//Incremente posição do vetor
		*cont = *cont + 1;

		std::cout << "Cadastrado com sucesso!" << std::endl;
		system("pause");
	}
	else
	{
		std::cout << "- - - CADASTRAMENTO: - - -" << std::endl;
		std::cout << "Lista cheia!" << std::endl;
		system("pause");
	}
}

/// <summary>
/// Função de Pesquisa, contem as funções "alterar_Nome" e "deletar_Nome"
/// </summary>
/// <param name="lista"></param>
/// <param name="cont"></param>
void pesquisa_Nomes(std::string lista[LENGTH], int* cont)
{
	std::string pesquisa;
	int posicao;
	bool nomeLocalizado = false;

	system("cls");

	std::cout << "- - - - PESQUISA: - - - -" << std::endl;
	std::cout << "Digite o nome para pesquisar:" << std::endl;
	std::cin.ignore();
	std::getline(std::cin, pesquisa);

	//Busca o primeiro nome similar ao digitado na variável pesquisa
	for (int i = 0; i < LENGTH; i++)
	{
		if (lista[i] == pesquisa)
		{
			posicao = i;
			nomeLocalizado = true;
			break;
		}
	}

	//Verifica se nome foi localizado, caso o nome seja localizado da a opção de altera-lo ou deleta-lo
	if (nomeLocalizado)
	{
		char opcao;
		bool loop = true;

		do
		{
			std::cout << "Nome: " << pesquisa << " - Localizado!" << std::endl << std::endl;
			std::cout << "- - - - OPÇÕES: - - - -" << std::endl << "1 - Alterar." << std::endl << "2 - Deletar." << std::endl << "3 - Voltar ao Menu Principal." << std::endl;
			std::cin >> opcao;

			switch (opcao)
			{
			case '1':
				alterar_Nome(lista, posicao);

				loop = false;
				break;
			case '2':
				deletar_Nome(lista, posicao, &cont);

				loop = false;
				break;
			case '3':
				loop = false;
				break;
			default:
				std::cout << std::endl << "Opção Inválida!" << std::endl;
				system("pause");
				break;
			}

			system("cls");
		} while (loop == true);
	}
	else
	{
		std::cout << std::endl << "Nome não foi encontrado!" << std::endl;
		system("pause");
	}
}
void alterar_Nome(std::string lista[LENGTH], int pos)
{
	//Altera nome localizado na lista
	std::cout << std::endl << "Digite o novo nome:" << std::endl;
	std::cin.ignore();
	std::getline(std::cin, lista[pos]);
	std::cout << std::endl;

	std::cout << "Nome alterado com sucesso!" << std::endl;
	system("pause");
}
void deletar_Nome(std::string lista[LENGTH], int pos, int** cont)
{
	//Deleta nome localizado na lista
	lista[pos].clear();

	//Decrementa uma posição na lista, dando assim um novo espaço para cadastramento na lista
	**cont = **cont - 1;

	//Remove lacunas na lista
	std::string aux;

	for (int i = 0; i < LENGTH - 1; i++)
	{
		if (lista[i] == "")
		{
			aux = lista[i];
			lista[i] = lista[i + 1];
			lista[i + 1] = aux;
		}
	}
}

/// <summary>
/// Função de Apresentação, apresenta os nomes cadastrados na lista
/// </summary>
/// <param name="lista"></param>
void apresentar_Nomes(std::string const lista[LENGTH])
{
	system("cls");

	std::cout << "- - - - - LISTA: - - - - -" << std::endl;
	for (int i = 0; i < LENGTH; i++)
	{
		std::cout << lista[i] << std::endl;
	}
	std::cout << "- - - - - - - - - - - - -" << std::endl;
	std::cout << std::endl;

	system("pause");
}