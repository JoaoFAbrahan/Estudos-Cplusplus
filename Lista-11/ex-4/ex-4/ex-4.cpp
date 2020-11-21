/*
EXERC�CIO 4:
	Definir uma classe que represente um c�rculo.
	�	Esta classe deve possuir m�todos Privados para:
		calcular a �rea do c�rculo;
		calcular a dist�ncia entre os centros de 2 c�rculos;
		calcular a circunfer�ncia do c�rculo.
	�	E m�todos P�blicos para:
		definir o raio do c�rculo, dado um n�mero real;
		aumentar o raio do c�rculo, dado um percentual de aumento;
		definir o centro do c�rculo, dada uma posi��o (X,Y);
		imprimir o valor do raio;
		imprimir o centro do c�rculo.
		imprimir a �rea do c�rculo.
	�	Criar um programa principal para testar a classe.
*/
#include<iostream>
#include<iomanip>
#include<locale>
#include<cmath>


///Constantes do programa
const float pi = 3.14;


///Classes do programa
class Circulo
{
public:
	void definirRaio();
	void escalonarRaio();
	void definirCentro();
	void getRaio();
	void getCentroCirculo();
	void getAreaCirculo();

private:
	float raio;
	int centroCirculos[2];
	float areaCirculo();
	int distanciaCentro(int circulo1[2], int circulo2[2]);
	float circunferencia();
};
float Circulo::areaCirculo()
{
	return pi * pow(raio, 2);
}
int Circulo::distanciaCentro(int circulo1[2], int circulo2[2])
{
	return sqrt(pow((circulo2[0] - circulo1[0]), 2) + pow((circulo2[1] - circulo1[1]), 2));
}
float Circulo::circunferencia()
{
	return 2 * pi * raio;
}
void Circulo::definirRaio()
{
	std::cout << "Digite o valor do raio:" << std::endl;
	std::cin >> raio;
	std::cout << std::endl;
}
void Circulo::escalonarRaio()
{
	int escala;

	std::cout << "Raio atual: " << raio << std::endl << "Digite o valor de escala:" << std::endl;
	std::cin >> escala;
	std::cout << std::endl;

	raio *= escala;
}
void Circulo::definirCentro()
{
	std::cout << "Definir o centro do circulo:" << std::endl;
	std::cout << "X: ";
	std::cin >> centroCirculos[0];
	std::cout << "Y: ";
	std::cin >> centroCirculos[1];
	std::cout << std::endl;
}
void Circulo::getRaio()
{
	std::cout << "Raio: " << raio << std::endl;
	std::cout << std::endl;
}
void Circulo::getCentroCirculo()
{
	std::cout << "Centro do Circulo: (" << centroCirculos[0] << ", " << centroCirculos[1] << ")" << std::endl;
	std::cout << std::endl;
}
void Circulo::getAreaCirculo()
{
	std::cout << "�rea do Circulo: " << areaCirculo() << std::endl;
	std::cout << std::endl;
}


///Fun��es do programa
void menu(Circulo& circulo);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	Circulo* circulo = new Circulo();


	//Menu
	menu(*circulo);
}

void menu(Circulo& circulo)
{
	char opcao;

	while (true)
	{
		system("cls");

		std::cout << "- - - - MENU: - - - -" << std::endl;
		std::cout << "1 - Definir raio." << std::endl << "2 - Escalonar." << std::endl << "3 - Definir Centro." << std::endl << "4 - Apresentar Raio" << std::endl
			<< "5 - Apresentar Centro." << std::endl << "6 - Calcular �rea." << std::endl;
		std::cin >> opcao;

		switch (opcao)
		{
		case '1':
			circulo.definirRaio();
			break;
		case '2':
			circulo.escalonarRaio();
			break;
		case '3':
			circulo.definirCentro();
			break;
		case '4':
			circulo.getRaio();
			break;
		case '5':
			circulo.getCentroCirculo();
			break;
		case '6':
			circulo.getAreaCirculo();
			break;
		default:
			std::cout << "Op��o inv�lida!" << std::endl;
			break;
		}

		system("pause");
	}
}