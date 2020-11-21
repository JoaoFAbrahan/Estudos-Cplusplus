/*
	EXERCÍCIO 1:
		Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, armazenando o
		resultado em outro vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos
*/
#include<iostream>
#include<locale.h>
#include<cmath>

//Declarando o length do vetor
int const LENGTH = 10;

//Funções do programa
void entrada_Dados(int vetor[LENGTH]);
void quadrado_Numero(int primeiroVetor[LENGTH], int segundoVetor[LENGTH]);
void apresentar(int vetor[LENGTH]);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int primeiroVetor[LENGTH], segundoVetor[LENGTH];

	entrada_Dados(primeiroVetor);
	quadrado_Numero(primeiroVetor, segundoVetor);

	apresentar(segundoVetor);
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

void quadrado_Numero(int primeiroVetor[LENGTH], int segundoVetor[LENGTH])
{
	for (int i = 0; i < LENGTH; i++)
	{
		segundoVetor[i] = pow(primeiroVetor[i], 2);
	}
}

void apresentar(int vetor[LENGTH])
{
	std::cout << "O quadrado dos valores do primeiro vetor são:" << std::endl;
	for (int i = 0; i < LENGTH; i++)
	{
		std::cout << vetor[i] << " ";
	}
	std::cout << std::endl;
}