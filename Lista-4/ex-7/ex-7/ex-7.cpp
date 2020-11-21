/*
	EXERCÍCIO 7:
		Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o seu conteúdo, ou seja, esta função 
		é chamada passando duas variáveis A e B por exemplo e, após a execução da função, A conterá o valor de B e B terá o valor de A.
*/
#include<iostream>
#include<locale>

void troca_Valores(int* num1, int* num2);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero1, numero2;

	std::cout << "Digite o valor das variáveis:" << std::endl;
	std::cin >> numero1 >> numero2;

	troca_Valores(&numero1, &numero2);

	std::cout << "Variável 1: " << numero1 << std::endl;
	std::cout << "Variável 2: " << numero2 << std::endl;
}

void troca_Valores(int* num1, int* num2)
{
	int aux = *num1;
	*num1 = *num2;
	*num2 = aux;
}