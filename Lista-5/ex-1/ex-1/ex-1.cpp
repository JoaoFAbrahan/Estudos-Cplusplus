/*
	EXERCÍCIO 1:
		Escreva uma função que dado um número real passado como parâmetro, retorne a parte inteira e a parte fracionária deste número. Escreva um programa que 
		chama esta função.
		Protótipo:
		void frac(float num, int* inteiro, float* frac);
*/
#include<iostream>
#include<locale>

void frac(float num, int* inteiro, float* frac);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float numero;
	int parteInt;
	float parteFloat;

	std::cout << "Digite um número:" << std::endl;
	std::cin >> numero;

	frac(numero, &parteInt, &parteFloat);

	std::cout << "Parte Inteira: " << parteInt << std::endl << "Parte Fracionária: " << parteFloat << std::endl;
}

void frac(float num, int* inteiro, float* frac)
{
	*inteiro = num;
	*frac = num - *inteiro;
}