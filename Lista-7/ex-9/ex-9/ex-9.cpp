/*
	EXERCÍCIO 9:
		Crie um programa que:
			a.	Aloque dinamicamente um array de 5 números inteiros,
			b.	Peça para o usuário digitar os 5 números no espaço alocado,
			c.	Mostre na tela os 5 números,
			d.	Libere a memória alocada.
*/
#include<iostream>
#include<locale>
#include<string>

//Funções do programa
void entradaDados(int vetor[]);
void apresentar(int vetor[]);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int* vetor;

	//Alocação dinâmica
	vetor = (int*)malloc(5 * sizeof(int));

	entradaDados(vetor);
	apresentar(vetor);

	//Liberando memoria
	free(vetor);
}

void entradaDados(int vetor[])
{
	std::cout << "- - - ENTRADA DE DADOS - - -" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Digite o " << i + 1 << "º número:" << std::endl;
		std::cin >> vetor[i];
	}
	std::cout << std::endl;
}

void apresentar(int vetor[])
{
	std::cout << "- - - - - APRESENTAR - - - - -" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << vetor[i] << " ";
	}
	std::cout << std::endl;
}