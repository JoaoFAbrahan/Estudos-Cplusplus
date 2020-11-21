/*
	EXERCÍCIO 6:
		Crie um programa que disponha de enumeradores para os modos de atendimento de um sistema (Comum e Preferencial).
*/
#include<iostream>
#include<locale>
#include<string>
#include<fstream>

//Declarando enumerador
enum Atendimento
{
	Comum, Preferencial
};

//Funções do programa
void selecionarAtendimento(Atendimento* preferenciaAtendimento);
void apresentar(Atendimento preferencia);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	Atendimento preferenciaAtendimento;

	selecionarAtendimento(&preferenciaAtendimento);
	apresentar(preferenciaAtendimento);
}

void selecionarAtendimento(Atendimento* preferenciaAtendimento)
{
	char opcao;
	bool loop;
	do
	{
		system("cls");
		loop = false;

		std::cout << "- - - - ATENDIMENTO - - - -" << std::endl;
		std::cout << "1 - Comum" << std::endl << "2 - Preferêncial" << std::endl;
		std::cin >> opcao;
		std::cout << std::endl;

		switch (opcao)
		{
		case '1':
			*preferenciaAtendimento = Comum;
			break;
		case '2':
			*preferenciaAtendimento = Preferencial;
			break;
		default:
			loop = true;
			std::cout << "Opção Inválida!" << std::endl;
			system("pause");
		}
	} while (loop == true);
}

void apresentar(Atendimento preferencia)
{
	std::cout << "Atendimento escolhido: ";

	switch (preferencia)
	{
	case Comum:
		std::cout << "COMUM" << std::endl;
		break;
	case Preferencial:
		std::cout << "PREFERÊNCIAL" << std::endl;
		break;
	}
}