/*
	EXERCÍCIO 9:
		Crie um programa que contenha um vetor de float contendo 10 elementos. Imprima o endereço de cada posição desse vetor.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float vetor[10];
	float* ponteiro;

	//Apresentando os endereços
	std::cout << "IMPRIMINDO OS ENDEREÇOS:" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		ponteiro = &vetor[i];
		std::cout << i + 1 << "º posição: " << ponteiro << std::endl;
	}
	std::cout << std::endl;
}