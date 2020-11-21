/*
	EXERCÍCIO 2:
		Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá ser impresso o maior e o menor elemento 
		do vetor.
*/
#include<iostream>
#include<locale>

//Declarando length do vetor
int const LENGTH = 10;

//Funções do programa
void entrada_Dados(int vetor[LENGTH]);
int encontra_Menor(int vetor[LENGTH]);
int encontra_Maior(int vetor[LENGTH]);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int vetor[LENGTH];

	entrada_Dados(vetor);

	std::cout << "O maior número é: " << encontra_Maior(vetor) << " e o menor número é: " << encontra_Menor(vetor) << std::endl;
}

void entrada_Dados(int vetor[LENGTH])
{
	for (int i = 0; i < LENGTH; i++)
	{
		std::cout << "Digite o " << i + 1 << "º valor:" << std::endl;
		std::cin >> vetor[i];
	}
	std::cout << std::endl;
}

int encontra_Menor(int vetor[LENGTH])
{
	int menor;

	for (int i = 0; i < LENGTH; i++)
	{
		if (i == 0)
		{
			menor = vetor[i];
		}
		else if (menor > vetor[i])
		{
			menor = vetor[i];
		}
	}

	return menor;
}

int encontra_Maior(int vetor[LENGTH])
{
	int maior;

	for (int i = 0; i < LENGTH; i++)
	{
		if (i == 0)
		{
			maior = vetor[0];
		}
		else if (maior < vetor[i])
		{
			maior = vetor[i];
		}
	}

	return maior;
}