/*
	EXERCÍCIO 3:
		Escreva um programa que declare um Array de inteiros e um ponteiro para inteiros. Associe o ponteiro ao Array. Agora, some mais um (+1) a 
		cada posição do Array usando o ponteiro (use *).
*/
#include<iostream>
#include<locale>

int const length = 5;

void entradaDados_Vetor(int vetor[length]);
void somaUm_Vetor(int vetor[length]);
void apresentar_Vetor(int vetor[length]);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int vetor[length];

	entradaDados_Vetor(vetor);
	somaUm_Vetor(vetor);
	apresentar_Vetor(vetor);
}

void entradaDados_Vetor(int vetor[length])
{
	for (int i = 0; i < length; i++)
	{
		std::cout << "Digite o " << i + 1 << "º valor:" << std::endl;
		std::cin >> vetor[i];
	}
}

void somaUm_Vetor(int vetor[length])
{
	int* ponteiro;

	for (int i = 0; i < length; i++)
	{
		ponteiro = &vetor[i];
		*ponteiro += 1;
	}
}

void apresentar_Vetor(int vetor[length])
{
	std::cout << "VETOR:" << std::endl;
	for (int i = 0; i < length; i++)
	{
		std::cout << vetor[i] << " ";
	}
	std::cout << std::endl;
}