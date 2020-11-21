/*
	EXERCÍCIO 3:
		Desenvolva uma função para inverter a posição dos elementos de uma pilha P.
*/
#include<iostream>
#include<locale>
#include<stack>


//Funções do programa
void entradaDados(std::stack<int>* pilha);
void trocaOrdem(std::stack<int>* pilha_P);
void apresentar(std::stack<int>* pilha_P);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::stack<int> pilha_P;

	entradaDados(&pilha_P);
	trocaOrdem(&pilha_P);

	apresentar(&pilha_P);
}

void entradaDados(std::stack<int>* pilha)
{
	int qtdNum, num;

	std::cout << "Digite a quantidade de valores a serem inseridos:" << std::endl;
	std::cin >> qtdNum;

	std::cout << "- - - - ENTRADA DE DADOS: - - - -" << std::endl;
	for (int i = 0; i < qtdNum; i++)
	{
		std::cout << i + 1 << "º número:" << std::endl;
		std::cin >> num;

		pilha->push(num);
	}
}

void trocaOrdem(std::stack<int>* pilha_P)
{	
	std::stack<int> pilha_Aux;

	while (!pilha_P->empty())
	{
		pilha_Aux.push(pilha_P->top());

		pilha_P->pop();
	}

	while (!pilha_Aux.empty())
	{
		pilha_P->push(pilha_Aux.top());

		pilha_Aux.pop();
	}
}

void apresentar(std::stack<int>* pilha_P)
{
	std::cout << "- - - - APRESENTAR: - - - -" << std::endl;
	while (!pilha_P->empty())
	{
		std::cout << pilha_P->top() << " ";
		pilha_P->pop();
	}
	std::cout << std::endl;
}