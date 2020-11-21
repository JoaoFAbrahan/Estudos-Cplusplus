/*
	EXERCÍCIO 5:
		Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as variáveis aos 
		ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//Declarando variáveis
	int numeroInteiro = 5;
	float numeroReal = 5.55;
	char letra = 'C';

	//Declarando ponteiros
	int* ponteiroInt;
	float* ponteiroFloat;
	char* ponteiroChar;

	//Associando variáveis aos ponteiros
	ponteiroInt = &numeroInteiro;
	ponteiroFloat = &numeroReal;
	ponteiroChar = &letra;


	//Apresentando variáveis originais
	std::cout << "- - - ORIGINAL: - - -" << std::endl;
	std::cout << numeroInteiro << std::endl;
	std::cout << numeroReal << std::endl;
	std::cout << letra << std::endl;
	std::cout << std::endl;

	//Modificando valor através de ponteiros
	*ponteiroInt += 2;
	*ponteiroFloat += 5.25;
	*ponteiroChar = 'D';

	//Apresentando variáveis modificadas
	std::cout << "- - - MODIFICADA: - - -" << std::endl;
	std::cout << numeroInteiro << std::endl;
	std::cout << numeroReal << std::endl;
	std::cout << letra << std::endl;
	std::cout << std::endl;
}