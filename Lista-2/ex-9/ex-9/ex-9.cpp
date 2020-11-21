/*
	EXERCÍCIO 9:
		Faça um programa que leia três temperaturas: máxima, mínima e atual. Se atual for maior 
		e igual a mínima, e atual menor que máxima, imprimir a mensagem “Temperatura OK!”, caso 
		contrário imprima “Temperatura fora da faixa permitida!”.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float tempMaxima, tempMinima, tempAtual;

	std::cout << "Digite uma temperatura máxima e uma temperatura mínima:" << std::endl << "MÁXIMA: ";
	std::cin >> tempMaxima;
	std::cout << "MÍNIMA: ";
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