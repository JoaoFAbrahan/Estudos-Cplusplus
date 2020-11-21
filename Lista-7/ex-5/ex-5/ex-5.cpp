/*
	EXERC�CIO 5:
		Crie um programa que tenha um enumerador para formalizar os n�veis de dificuldade de um jogo (F�cil, Normal e Dif�cil).
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

//Fun��es do programa
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
		std::cout << "1 - F�cil" << std::endl << "2 - Normal" << std::endl << "3 - Dif�cil" << std::endl;
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
			std::cout << "Op��o Inv�lida!" << std::endl;
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
		std::cout << "Dificuldade escolhida: F�CIL" << std::endl;
		break;
	case Normal:
		std::cout << "Dificuldade escolhida: NORMAL" << std::endl;
		break;
	case Dificil:
		std::cout << "Dificuldade escolhida: DIF�CIL" << std::endl;
		break;
	}
}