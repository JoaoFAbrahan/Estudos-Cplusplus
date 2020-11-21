/*
	EXERCÍCIO 14:
		Faça um programa que pergunte ao usuário quantos valores ele deseja armazenar em um vetor de double, depois use a função
		MALLOC para reservar (alocar) o espaço de memória de acordo com o especificado pelo usuário. Esse vetor deve ter um tamanho
		maior ou igual a 10 elementos. Use este vetor dinâmico como um vetor comum, atribuindo aos 10 primeiros elementos do vetor
		valores aleatórios (usando a função rand) entre 0 e 100. Exiba na tela os valores armazenados nos 10 primeiros elementos do vetor.
*/
#include<iostream>
#include<locale>
#include<string>
#include<ctime>

//Funções do programa
double* alocacaoDinamica(int* length);
void randomizarValores(double vetor[], int length);

void apresentarDezPrimeiros(double vetor[]);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	double* vetor;
	int length;

	vetor = alocacaoDinamica(&length);

	randomizarValores(vetor, length);
	apresentarDezPrimeiros(vetor);

	free(vetor);
}

double* alocacaoDinamica(int* length)
{
	bool loop = true;
	do
	{
		system("cls");

		std::cout << "Digite o tamanho do vetor:" << std::endl;
		std::cin >> *length;

		if (*length >= 10)
		{
			loop = false;
		}
		else
		{
			std::cout << "Valor deve ser maior ou igual a 10" << std::endl;
			system("pause");
		}
	} while (loop == true);
	system("cls");

	return (double*)malloc(*length * sizeof(double));
}

void randomizarValores(double vetor[], int length)
{
	srand(time(NULL));
	
	for (int i = 0; i < length; i++)
	{
		//Randomizando valores entre 0 à 100
		vetor[i] = rand() % 101;
	}
}

void apresentarDezPrimeiros(double vetor[])
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << vetor[i] << " ";
	}
	std::cout << std::endl;
}