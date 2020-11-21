/*
	EXERCÍCIO 7:
		Implemente uma função que imprima os elementos de uma fila.
*/
#include<iostream>
#include<locale>
#include<queue>


//Funções do programa
void entradaDados(std::queue<int>* fila);
void apresentar(std::queue<int>* fila);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::queue<int> fila;

	entradaDados(&fila);
	apresentar(&fila);
}

void entradaDados(std::queue<int>* fila)
{
	int qtdNum, num;

	std::cout << "Digite a quantidade de números:" << std::endl;
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

void apresentar(std::queue<int>* fila)
{
	std::cout << "" << std::endl;
	while (!fila->empty())
	{
		std::cout << fila->front() << " ";
		fila->pop();
	}
	std::cout << std::endl;
}