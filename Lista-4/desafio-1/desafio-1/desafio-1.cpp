/*
	DESAFIO 1:
		Crie um programa que contenha um vetor de inteiros contendo 10 elementos, crie uma função que preencha o vetor com os seguintes valores
		em cada posição: (10 - i), sendo i a posição do elemento no vetor. Em seguida crie uma função que receba esse vetor e o ordene em ordem
		crescente. Apresente ao final o vetor ordenado. 
*/
#include<iostream>
#include<locale>

//Definindo length do vetor
int const LENGTH = 10;

//Funções do programa
void preenche_Vetor(int vetor[LENGTH]);
void ordenacao_Vetor(int vetor[LENGTH]);
void apresentar_Vetor(int vetor[LENGTH]);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int vetor[LENGTH];

	preenche_Vetor(vetor);
	ordenacao_Vetor(vetor);
	apresentar_Vetor(vetor);
}

void preenche_Vetor(int vetor[LENGTH])
{
	for (int i = 0; i < LENGTH; i++)
	{
		vetor[i] = 10 - i;
	}
}

//ORDENAÇÃO BUBBLE SORT
void ordenacao_Vetor(int vetor[LENGTH])
{
	int aux;

	bool loop;
	do
	{
		loop = false;

		for (int i = 0; i < LENGTH - 1; i++)
		{
			if (vetor[i] > vetor[i + 1])
			{
				aux = vetor[i];
				vetor[i] = vetor[i + 1];
				vetor[i + 1] = aux;
				loop = true;
			}
		}
	} while (loop == true);
}

void apresentar_Vetor(int vetor[LENGTH])
{
	std::cout << "VETOR ORDENADO:" << std::endl;
	for (int i = 0; i < LENGTH; i++)
	{
		std::cout << vetor[i] << " ";
	}
	std::cout << std::endl;
}