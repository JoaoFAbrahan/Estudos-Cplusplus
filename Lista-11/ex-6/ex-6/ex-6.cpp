/*
EXERC�CIO 6:
	Implemente um condicionador de ar. O condicionador possui 10 pot�ncias diferentes. Cada unidade da pot�ncia do condicionador 
	diminui a temperatura do ambiente em 1.8oC. A varia��o que o condicionador consegue causar est� no intervalo [0oC - 18oC], ou 
	seja, zero graus de varia��o quando desligado e dezoito graus de varia��o quando ligado na pot�ncia m�xima.

	Atrav�s de um sensor, o condicionador � informado da temperatura externa. Dada essa temperatura e a pot�ncia selecionada, o 
	condicionador calcula e retorna a temperatura do ambiente.

	No programa principal, crie dois condicionadores. Informe duas temperaturas externas diferentes para cada um (ex: 25oC e 31o), 
	ajuste o segundo em pot�ncia m�xima (10) e o primeiro em pot�ncia m�dia (5). Finalmente, exiba a temperatura resultante de 
	cada ambiente.
*/
#include"classe.h"


///Fun��es do programa
void menu(Arcondicionado& arcond1, Arcondicionado& arcond2);
void potencia(Arcondicionado& arcond1, Arcondicionado& arcond2);
void tempAmbiente(Arcondicionado& arcond1, Arcondicionado& arcond2);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	Arcondicionado* arcondicionado1 = new Arcondicionado();
	Arcondicionado* arcondicionado2 = new Arcondicionado();


	//Menu
	menu(*arcondicionado1, *arcondicionado2);
}

void menu(Arcondicionado& arcond1, Arcondicionado& arcond2)
{
	char opcao;
	bool loop =  true;
	do
	{
		system("cls");

		std::cout << "Arcondicionado 1:" << std::endl;
		arcond1.getTemperatura();
		std::cout << std::endl;
		std::cout << "Arcondicionado 2:" << std::endl;
		arcond2.getTemperatura();
		std::cout << std::endl;

		std::cout << "- - - MENU: - - -" << std::endl;
		std::cout << "1 - set pot�ncia." << std::endl << "2 - set ambiente temp." << std::endl << "3 - sair." << std::endl;
		std::cin >> opcao;

		system("cls");

		switch (opcao)
		{
		case '1':
			potencia(arcond1, arcond2);
			break;
		case '2':
			tempAmbiente(arcond1, arcond2);
			break;
		case '3':
			loop = false;
			break;
		default:
			std::cout << "Op��o inv�lida!" << std::endl;
			system("pause");
			break;
		}
	} while (loop == true);
}
void potencia(Arcondicionado& arcond1, Arcondicionado& arcond2)
{
	char opcao;

	std::cout << "- - - POT�NCIA: - - -" << std::endl;
	std::cout << "1 - Arcondicionado 1:" << std::endl << "2 - Arcondicionado 2:" << std::endl;
	std::cin >> opcao;

	if (opcao == '1')
	{
		arcond1.setPotencia();
	}
	else
	{
		arcond2.setPotencia();
	}
}
void tempAmbiente(Arcondicionado& arcond1, Arcondicionado& arcond2)
{
	float setTemp;
	char opcao;

	std::cout << "- - - TEMP.  AMBIENTE: - - -" << std::endl;
	std::cout << "1 - Arcondicionado 1:" << std::endl << "2 - Arcondicionado 2:" << std::endl;
	std::cin >> opcao;

	system("cls");

	std::cout << "Temp. Ambiente: ";
	std::cin >> setTemp;

	if (opcao == '1')
	{
		arcond1.setTemperatura(setTemp);
	}
	else
	{
		arcond2.setTemperatura(setTemp);
	}
}