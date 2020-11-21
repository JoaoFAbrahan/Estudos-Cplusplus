/*
	EXERCÍCIO 10:
		Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
				CATEGORIAS:		IDADE:
				Infantil A		5 a 7
				Infantil B		8 a 10
				Juvenil A		11 a 13
				Juvenil B		14 a 17
				Sênior			Maiores de 18 anos.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int idadeNadador;

	std::cout << "Digite a idade do nadador:" << std::endl;
	std::cin >> idadeNadador;
	std::cout << std::endl;

	if (idadeNadador >= 5 && idadeNadador <= 7)
	{
		std::cout << "CATEGORIA: Infantil A." << std::endl;
	}
	else if (idadeNadador >= 8 && idadeNadador <= 10)
	{
		std::cout << "CATEGORIA: Infantil B." << std::endl;
	}
	else if (idadeNadador >= 11 && idadeNadador <= 13)
	{
		std::cout << "CATEGORIA: Juvenil A." << std::endl;
	}
	else if (idadeNadador >= 14 && idadeNadador <= 17)
	{
		std::cout << "CATEGORIA: Juvenil B." << std::endl;
	}
	else if (idadeNadador > 17)
	{
		std::cout << "CATEGORIA: Sênior." << std::endl;
	}
	else
	{
		std::cout << "Idade inválida!" << std::endl;
	}
}