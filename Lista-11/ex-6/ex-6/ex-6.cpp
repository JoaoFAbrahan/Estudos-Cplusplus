/*
EXERCÍCIO 6:
	Implemente um condicionador de ar. O condicionador possui 10 potências diferentes. Cada unidade da potência do condicionador 
	diminui a temperatura do ambiente em 1.8oC. A variação que o condicionador consegue causar está no intervalo [0oC - 18oC], ou 
	seja, zero graus de variação quando desligado e dezoito graus de variação quando ligado na potência máxima.

	Através de um sensor, o condicionador é informado da temperatura externa. Dada essa temperatura e a potência selecionada, o 
	condicionador calcula e retorna a temperatura do ambiente.

	No programa principal, crie dois condicionadores. Informe duas temperaturas externas diferentes para cada um (ex: 25oC e 31o), 
	ajuste o segundo em potência máxima (10) e o primeiro em potência média (5). Finalmente, exiba a temperatura resultante de 
	cada ambiente.
*/
#include"classe.h"


///Funções do programa
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
		std::cout << "1 - set potência." << std::endl << "2 - set ambiente temp." << std::endl << "3 - sair." << std::endl;
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
			std::cout << "Opção inválida!" << std::endl;
			system("pause");
			break;
		}
	} while (loop == true);
}
void potencia(Arcondicionado& arcond1, Arcondicionado& arcond2)
{
	char opcao;

	std::cout << "- - - POTÊNCIA: - - -" << std::endl;
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