/*
	EXERCÍCIO 10:
		Crie um programa que receba três valores (obrigatoriamente maiores que zero), representando as medidas dos três lados de um triângulo. Elabore funções para:
		a.	Determinar se eles lados formam um triângulo, sabendo que: 
			•	O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados.
		
		b.	Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo.
			•	Chama-se equilátero o triângulo que tem três lados iguais.
			•	Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais.
			•	Recebe o nome de escaleno o triângulo que tem os três lados diferentes.
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
	std::cout << "Digite os 3 lados de um triângulo:" << std::endl << "Lado-1: ";
	std::cin >> lado1;
	std::cout << "Lado-2: ";
	std::cin >> lado2;
	std::cout << "Lado-3: ";
	std::cin >> lado3;

	//VERIFICA SE É TRIÂNGULO (Necessário C++17 ou superior)
	if (bool triangulo = verifica_Triangulo(lado1, lado2, lado3); triangulo == true)
	{
		verifica_TipoTriangulo(lado1, lado2, lado3);
	}
	else
	{
		std::cout << "Não é triângulo!" << std::endl;
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
		std::cout << "Triângulo Equilátero." << std::endl;
	}
	else if (lado1 != lado2 && lado2 != lado3 && lado3 != lado1)
	{
		std::cout << "Triângulo Escaleno." << std::endl;
	}
	else
	{
		std::cout << "Triângulo Isósceles." << std::endl;
	}
}