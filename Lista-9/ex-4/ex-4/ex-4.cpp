/*
	EXERCÍCIO 4:
		Faça uma função para retornar o número de elementos da pilha que possuem valor ímpar.
*/
#include<iostream>
#include<locale>
#include<stack>


//Funções do programa
void entradaDados(std::stack<int>* pilha);
void apresentaQtd_Impares(std::stack<int>* pilha);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::stack<int> pilha;

	entradaDados(&pilha);
	apresentaQtd_Impares(&pilha);
}

void entradaDados(std::stack<int>* pilha)
{
	int qtdNum, num;

	std::cout << "Digite a quantidade de numeros:" << std::endl;
	std::cin >> qtdNum;
	std::cout << std::endl;

	std::cout << "- - - - ENTRADA DE DADOS: - - - -" << std::endl;
	for (int i = 0; i < qtdNum; i++)
	{
		std::cout << i + 1 << "º número:" << std::endl;
		std::cin >> num;

		pilha->push(num);
	}
	std::cout << std::endl;
}

void apresentaQtd_Impares(std::stack<int>* pilha)
{
	int qtdImpares = 0;

	//Conta os números ímpares da pilha
	while (!pilha->empty())
	{
		if (pilha->top() % 2 != 0)
		{
			qtdImpares++;
		}

		pilha->pop();
	}

	std::cout << "Total de números ímpares: " << qtdImpares << std::endl;
}