/*
	EXERCÍCIO 5:
		Crie um programa que tenha um enumerador para formalizar os níveis de dificuldade de um jogo (Fácil, Normal e Difícil).
*/
#include<iostream>
#include<locale>
#include<string>
#include<fstream>

//Declarando enumerador
enum Dificuldade
{
	Facil, Normal, Dificil
};

//Funções do programa
Dificuldade opcaoJogo();
void apresentar(Dificuldade dificuldadeJogo);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	Dificuldade dificuldadesJogo;

	dificuldadesJogo = opcaoJogo();
	apresentar(dificuldadesJogo);
}

Dificuldade opcaoJogo()
{
	char opcao;
	bool loop;
	do
	{
		system("cls");
		loop = false;

		std::cout << "- - - ESCOLHA A DIFICULDADE - - -" << std::endl;
		std::cout << "1 - Fácil" << std::endl << "2 - Normal" << std::endl << "3 - Difícil" << std::endl;
		std::cin >> opcao;

		switch (opcao)
		{
		case '1':
			return Facil;
			break;
		case '2':
			return Normal;
			break;
		case '3':
			return Dificil;
			break;
		default:
			loop = true;
			std::cout << "Opção Inválida!" << std::endl;
			system("pause");
			break;
		}
	} while (loop == true);
}

void apresentar(Dificuldade dificuldadeJogo)
{
	switch (dificuldadeJogo)
	{
	case Facil:
		std::cout << "Dificuldade escolhida: FÁCIL" << std::endl;
		break;
	case Normal:
		std::cout << "Dificuldade escolhida: NORMAL" << std::endl;
		break;
	case Dificil:
		std::cout << "Dificuldade escolhida: DIFÍCIL" << std::endl;
		break;
	}
}