/*
	EXERC�CIO 9:
		Fa�a uma fun��o para retornar o n�mero de elementos da fila que possuem valor par.
*/
#include<iostream>
#include<locale>
#include<queue>


//Fun��es do programa
void entadaDados(std::queue<int>* fila);
int quantidadePar(std::queue<int>* fila);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::queue<int> fila;

	entadaDados(&fila);

	std::cout << "Quantidade de n�meros pares:" << std::endl;
	std::cout << quantidadePar(&fila) << std::endl;
}

void entadaDados(std::queue<int>* fila)
{
	int qtdNum, num;

	std::cout << "Quantidade de n�meros de entrada:" << std::endl;
	std::cin >> qtdNum;
	std::cout << std::endl;

	std::cout << "- - - - ENTRADA DE DADOS: - - - -" << std::endl;
	for (int i = 0; i < qtdNum; i++)
	{
		std::cout << i + 1 << "� n�mero:" << std::endl;
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