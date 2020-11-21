/*
EXERC�CIO 5:
	Implemente uma televis�o. A televis�o tem um controle de volume do som e um controle de sele��o de canal.
	�	O controle de volume permite aumentar ou diminuir a pot�ncia do volume de som em uma unidade de cada vez.
	�	O controle de canal tamb�m permite aumentar e diminuir o n�mero do canal em uma unidade, por�m, tamb�m possibilita trocar para um canal indicado.
	�	Tamb�m devem existir m�todos para consultar o valor do volume de som e o canal selecionado.
	No programa principal, crie uma televis�o e troque de canal algumas vezes. Aumente um pouco o volume, e exiba o valor de ambos os atributos.
*/
#include"classe.h"


///Fun��es do programa
void menu(Televisao& tv);
void volume(Televisao& tv);
void canal(Televisao& tv);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	Televisao* tv = new Televisao();


	//Menu
	menu(*tv);
}

void menu(Televisao& tv)
{
	char opcao;
	bool loop = true;
	do
	{
		system("cls");

		tv.getCanal_e_Volume();
		std::cout << std::endl;

		std::cout << "- - - MENU: - - -" << std::endl;
		std::cout << "1 - Volume" << std::endl << "2 - Canal" << std::endl << "3 - Sair" << std::endl;
		std::cin >> opcao;

		switch (opcao)
		{
		case '1':
			volume(tv);
			break;
		case '2':
			canal(tv);
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
void volume(Televisao& tv)
{
	char op;

	system("cls");

	tv.getCanal_e_Volume();
	std::cout << "- - - VOLUME: - - -" << std::endl;
	std::cout << "1 - Aumentar" << std::endl << "2 - Diminuir" << std::endl;
	std::cin >> op;

	if (op == '1')
	{
		tv.controleVolume(1);
	}
	else
	{
		tv.controleVolume(0);
	}
}
void canal(Televisao& tv)
{
	char op;

	system("cls");

	tv.getCanal_e_Volume();
	std::cout << "- - - CANAL: - - -" << std::endl;
	std::cout << "1 - Pr�ximo" << std::endl << "2 - Anterior" << std::endl;
	std::cin >> op;

	if (op == '1')
	{
		tv.controleCanal(1);
	}
	else
	{
		tv.controleCanal(0);
	}
}