/*
	EXERC�CIO 7:
		Fa�a um programa que leia 2 valores inteiros e chame uma fun��o que receba estas 2 vari�veis e troque o seu conte�do, ou seja, esta fun��o 
		� chamada passando duas vari�veis A e B por exemplo e, ap�s a execu��o da fun��o, A conter� o valor de B e B ter� o valor de A.
*/
#include<iostream>
#include<locale>

void troca_Valores(int* num1, int* num2);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero1, numero2;

	std::cout << "Digite o valor das vari�veis:" << std::endl;
	std::cin >> numero1 >> numero2;

	troca_Valores(&numero1, &numero2);

	std::cout << "Vari�vel 1: " << numero1 << std::endl;
	std::cout << "Vari�vel 2: " << numero2 << std::endl;
}

void troca_Valores(int* num1, int* num2)
{
	int aux = *num1;
	*num1 = *num2;
	*num2 = aux;
}