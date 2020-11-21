/*
	EXERC�CIO 10:
		Crie um programa que receba tr�s valores (obrigatoriamente maiores que zero), representando as medidas dos tr�s lados de um tri�ngulo. Elabore fun��es para:
		a.	Determinar se eles lados formam um tri�ngulo, sabendo que: 
			�	O comprimento de cada lado de um tri�ngulo � menor do que a soma dos outros dois lados.
		
		b.	Determinar e mostrar o tipo de tri�ngulo, caso as medidas formem um tri�ngulo.
			�	Chama-se equil�tero o tri�ngulo que tem tr�s lados iguais.
			�	Denominam-se is�sceles o tri�ngulo que tem o comprimento de dois lados iguais.
			�	Recebe o nome de escaleno o tri�ngulo que tem os tr�s lados diferentes.
*/
#include<iostream>
#include<locale>

bool verifica_Triangulo(float lado1, float lado2, float lado3);
void verifica_TipoTriangulo(float lado1, float lado2, float lado3);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float lado1, lado2, lado3;

	//ENTRADA DE DADOS
	std::cout << "Digite os 3 lados de um tri�ngulo:" << std::endl << "Lado-1: ";
	std::cin >> lado1;
	std::cout << "Lado-2: ";
	std::cin >> lado2;
	std::cout << "Lado-3: ";
	std::cin >> lado3;

	//VERIFICA SE � TRI�NGULO (Necess�rio C++17 ou superior)
	if (bool triangulo = verifica_Triangulo(lado1, lado2, lado3); triangulo == true)
	{
		verifica_TipoTriangulo(lado1, lado2, lado3);
	}
	else
	{
		std::cout << "N�o � tri�ngulo!" << std::endl;
	}
}

bool verifica_Triangulo(float lado1, float lado2, float lado3)
{
	if (lado1 < (lado2 + lado3) && lado2 < (lado1 + lado3) && lado3 < (lado1 + lado2))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void verifica_TipoTriangulo(float lado1, float lado2, float lado3)
{
	if (lado1 == lado2 && lado2 == lado3)
	{
		std::cout << "Tri�ngulo Equil�tero." << std::endl;
	}
	else if (lado1 != lado2 && lado2 != lado3 && lado3 != lado1)
	{
		std::cout << "Tri�ngulo Escaleno." << std::endl;
	}
	else
	{
		std::cout << "Tri�ngulo Is�sceles." << std::endl;
	}
}