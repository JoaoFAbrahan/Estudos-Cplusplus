/*
	EXERC�CIO 9:
		Crie um programa que contenha um vetor de float contendo 10 elementos. Imprima o endere�o de cada posi��o desse vetor.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float vetor[10];
	float* ponteiro;

	//Apresentando os endere�os
	std::cout << "IMPRIMINDO OS ENDERE�OS:" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		ponteiro = &vetor[i];
		std::cout << i + 1 << "� posi��o: " << ponteiro << std::endl;
	}
	std::cout << std::endl;
}