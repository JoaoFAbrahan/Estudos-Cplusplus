/*
EXERCÍCIO 7:
	Implemente um carro. O tanque de combustível do carro armazena no máximo 50 litros de gasolina. O carro consome 15 km/litro. Deve ser possível:
	•	Abastecer o carro com uma certa quantidade de gasolina;
	•	Mover o carro em uma determinada distância (medida em km);
	•	Retornar a quantidade de combustível e a distância total percorrida.
	No programa principal, crie 2 carros. Abasteça 20 litros no primeiro e 30 litros no segundo. Desloque o primeiro em 200 km e o segundo 
	em 400 km. Exiba na tela a distância percorrida e o total de combustível restante para cada um.
*/
#include"classe.h"


///Funções do programa
void menu(Carro& ca1, Carro& car2);
void abastecer(Carro& car1, Carro& car2);
void percorrer(Carro& car1, Carro& car2);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	Carro* carro1 = new Carro();
	Carro* carro2 = new Carro();


	//Menu do programa
	menu(*carro1, *carro2);
}

void menu(Carro& car1, Carro& car2)
{
	char opcao;
	bool loop = true;
	do
	{
		system("cls");

		car1.getKm_e_QtdGasolina();
		car2.getKm_e_QtdGasolina();

		std::cout << "- - - MENU: - - -" << std::endl;
		std::cout << "1 - Abastecer." <<std::endl << "2 - Percorrer Distância." << std::endl << "3 - Sair" << std::endl;
		std::cin >> opcao;

		switch (opcao)
		{
		case '1':
			abastecer(car1, car2);
			break;
		case '2':
			percorrer(car1, car2);
			break;
		case '3':
			loop = false;
			break;
		default:
			std::cout << "Opção Inválida!" << std::endl;
			system("pause");
			break;
		}

	} while (loop == true);
}
void abastecer(Carro& car1, Carro& car2)
{
	char opcao;
	float gasolina;
	bool loop;
	do
	{
		loop = false;
		system("cls");

		std::cout << "- - - ABASTECER: - - -" << std::endl;
		std::cout << "1 - Carro-1" << std::endl << "2 - Carro-2" << std::endl;
		std::cin >> opcao;
		std::cout << std::endl;

		switch (opcao)
		{
		case '1':
			std::cout << "Digite a quantidade de gasolina:" << std::endl;
			std::cin >> gasolina;

			car1.setGasolina(gasolina);
			break;
		case '2':
			std::cout << "Digite a quantidade de gasolina:" << std::endl;
			std::cin >> gasolina;

			car2.setGasolina(gasolina);
			break;
		default:
			std::cout << "Opção Inválida!" << std::endl;
			loop = true;
			break;
		}
	} while (loop == true);
}
void percorrer(Carro& car1, Carro& car2)
{
	char opcao;
	float distancia;
	bool loop;
	do
	{
		loop = false;
		system("cls");

		std::cout << "- - - PERCORRER: - - -" << std::endl;
		std::cout << "1 - Carro-1" << std::endl << "2 - Carro-2" << std::endl;
		std::cin >> opcao;
		std::cout << std::endl;

		switch (opcao)
		{
		case '1':
			std::cout << "Digite a quantidade de km percorrido:" << std::endl;
			std::cin >> distancia;

			car1.setDistancia(distancia);
			break;
		case '2':
			std::cout << "Digite a quantidade de km percorrido:" << std::endl;
			std::cin >> distancia;

			car2.setDistancia(distancia);
			break;
		default:
			std::cout << "Opção Inválida!" << std::endl;
			loop = true;
			break;
		}
	} while (loop == true);
}