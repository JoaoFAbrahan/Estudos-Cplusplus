/*
	EXERC�CIO 9:
		Fa�a um programa que leia tr�s temperaturas: m�xima, m�nima e atual. Se atual for maior 
		e igual a m�nima, e atual menor que m�xima, imprimir a mensagem �Temperatura OK!�, caso 
		contr�rio imprima �Temperatura fora da faixa permitida!�.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float tempMaxima, tempMinima, tempAtual;

	std::cout << "Digite uma temperatura m�xima e uma temperatura m�nima:" << std::endl << "M�XIMA: ";
	std::cin >> tempMaxima;
	std::cout << "M�NIMA: ";
	std::cin >> tempMinima;
	std::cout << std::endl;
	std::cout << "Digite a temperatura atual:" << std::endl;
	std::cin >> tempAtual;
	std::cout << std::endl;

	if (tempAtual >= tempMinima && tempAtual < tempMaxima)
	{
		std::cout << "Temperatura OK!" << std::endl;
	}
	else
	{
		std::cout << "Temperatura fora da faixa permitida!" << std::endl;
	}
}