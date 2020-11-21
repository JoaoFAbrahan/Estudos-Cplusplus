/*
	EXERCÍCIO 11:
		Faça um programa que leia um número N e:
		•	Crie dinamicamente e leia um vetor de inteiro de N posições;
		•	Leia um número inteiro X e conte e mostre os múltiplos desse número que existem no vetor.
*/
#include<iostream>
#include<locale>
#include<string>

//Funções do programa
int* alocacaoDinamica(int* n);
void desalocacao(int vetor[]);

void entradaDados(int vetor[], int length);
void multiplosDeX(int vetor[], int length);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int length;
	int* vetor;

	//Alocação Dinâmica
	vetor = alocacaoDinamica(&length);

	entradaDados(vetor, length);
	multiplosDeX(vetor, length);

	desalocacao(vetor);
}

int* alocacaoDinamica(int* n)
{
	std::cout << "Digite o tamanho do vetor:" << std::endl;
	std::cin >> *n;
	std::cout << std::endl;

	return (int*)malloc(*n * sizeof(int));
}

void desalocacao(int vetor[])
{
	free(vetor);
}

void entradaDados(int vetor[], int length)
{
	std::cout << "- - - ENTRADA DE DADOS: - - -" << std::endl;
	for (int i = 0; i < length; i++)
	{
		std::cout << "Digite o " << i + 1 << "º número:" << std::endl;
		std::cin >> vetor[i];
	}
	std::cout << std::endl;
}

void multiplosDeX(int vetor[], int length)
{
	int x, cont = 0;

	std::cout << "Digite um número X:" << std::endl;
	std::cin >> x;
	std::cout << std::endl;

	std::cout << "- - - MULTIPLOS DE X: - - -" << std::endl;
	for (int i = 0; i < length; i++)
	{
		if (vetor[i] % x == 0)
		{
			std::cout << vetor[i] << " ";
			cont++;
		}
	}
	std::cout << std::endl;
	std::cout << "Total de multiplos: " << cont << std::endl;
}