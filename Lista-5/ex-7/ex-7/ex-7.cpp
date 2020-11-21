/*
	EXERC�CIO 7:
		Escreva uma fun��o recursiva que exibe todos os elementos em um array de inteiros, separados por espa�o.
*/
#include<iostream>
#include<locale>

int const length = 5;

void imprimeVetor(int vetor[length], int posicao = 0);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int vetor[length];

	//ENTRADA DE DADOS
	std::cout << "ENTRADA DE DADOS VETOR:" << std::endl;
	for (int i = 0; i < length; i++)
	{
		std::cout << "Digite o " << i + 1 << "� n�mero:" << std::endl;
		std::cin >> vetor[i];
	}
	std::cout << std::endl;

	imprimeVetor(vetor);
}

void imprimeVetor(int vetor[length], int posicao)
{
	if (posicao < length)
	{
		//Apresenta o valor da posic�o
		std::cout << vetor[posicao] << " ";

		//Passa para a proxima posi��o do vetor
		posicao++;

		//Chama a fun��o de modo recursivo
		imprimeVetor(vetor, posicao);
	}
}