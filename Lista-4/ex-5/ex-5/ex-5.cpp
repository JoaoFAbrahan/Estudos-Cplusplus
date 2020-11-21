/*
	EXERC�CIO 5:
		Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as vari�veis aos 
		ponteiros (use &). Modifique os valores de cada vari�vel usando os ponteiros. Imprima os valores das vari�veis antes e ap�s a modifica��o.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//Declarando vari�veis
	int numeroInteiro = 5;
	float numeroReal = 5.55;
	char letra = 'C';

	//Declarando ponteiros
	int* ponteiroInt;
	float* ponteiroFloat;
	char* ponteiroChar;

	//Associando vari�veis aos ponteiros
	ponteiroInt = &numeroInteiro;
	ponteiroFloat = &numeroReal;
	ponteiroChar = &letra;


	//Apresentando vari�veis originais
	std::cout << "- - - ORIGINAL: - - -" << std::endl;
	std::cout << numeroInteiro << std::endl;
	std::cout << numeroReal << std::endl;
	std::cout << letra << std::endl;
	std::cout << std::endl;

	//Modificando valor atrav�s de ponteiros
	*ponteiroInt += 2;
	*ponteiroFloat += 5.25;
	*ponteiroChar = 'D';

	//Apresentando vari�veis modificadas
	std::cout << "- - - MODIFICADA: - - -" << std::endl;
	std::cout << numeroInteiro << std::endl;
	std::cout << numeroReal << std::endl;
	std::cout << letra << std::endl;
	std::cout << std::endl;
}