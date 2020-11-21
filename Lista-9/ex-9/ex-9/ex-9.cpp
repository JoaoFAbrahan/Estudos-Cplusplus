/*
	EXERCÍCIO 9:
		Faça uma função para retornar o número de elementos da fila que possuem valor par.
*/
#include<iostream>
#include<locale>
#include<queue>


//Funções do programa
void entadaDados(std::queue<int>* fila);
int quantidadePar(std::queue<int>* fila);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::queue<int> fila;

	entadaDados(&fila);

	std::cout << "Quantidade de números pares:" << std::endl;
	std::cout << quantidadePar(&fila) << std::endl;
}

void entadaDados(std::queue<int>* fila)
{
	int qtdNum, num;

	std::cout << "Quantidade de números de entrada:" << std::endl;
	std::cin >> qtdNum;
	std::cout << std::endl;

	std::cout << "- - - - ENTRADA DE DADOS: - - - -" << std::endl;
	for (int i = 0; i < qtdNum; i++)
	{
		std::cout << i + 1 << "º número:" << std::endl;
		std::cin >> num;

		fila->push(num);
	}
	std::cout << std::endl;
}

int quantidadePar(std::queue<int>* fila)
{
	int qtdPar = 0;

	while (!fila->empty())
	{
		if (fila->front() % 2 == 0)
		{
			qtdPar++;
		}

		fila->pop();
	}

	return qtdPar;
}