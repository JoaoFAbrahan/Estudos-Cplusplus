/*
	EXERC�CIO 1:
		Escreva uma fun��o que dado um n�mero real passado como par�metro, retorne a parte inteira e a parte fracion�ria deste n�mero. Escreva um programa que 
		chama esta fun��o.
		Prot�tipo:
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

	std::cout << "Digite um n�mero:" << std::endl;
	std::cin >> numero;

	frac(numero, &parteInt, &parteFloat);

	std::cout << "Parte Inteira: " << parteInt << std::endl << "Parte Fracion�ria: " << parteFloat << std::endl;
}

void frac(float num, int* inteiro, float* frac)
{
	*inteiro = num;
	*frac = num - *inteiro;
}