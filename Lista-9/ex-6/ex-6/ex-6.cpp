/*
	EXERC�CIO 6:
		Fa�a uma fun��o que receba uma pilha como argumento e retorne o valor armazenado em seu topo. A fun��o deve remover tamb�m esse elemento.
*/
#include<iostream>
#include<locale>
#include<stack>


//Fun��es do programa
void entradaDados(std::stack<int>* pilha);
int retornaTopo(std::stack<int>* pilha);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::stack<int> pilha;

	entradaDados(&pilha);

	std::cout << "- - - - APRESENTA��O: - - - -" << std::endl;
	while (!pilha.empty())
	{
		std::cout << retornaTopo(&pilha) << std::endl;
	}
	std::cout << std::endl;
}

void entradaDados(std::stack<int>* pilha)
{
	int qtdNum, num;

	std::cout << "Digite a quantidade de n�meros de entrada:" << std::endl;
	std::cin >> qtdNum;
	std::cout << std::endl;

	for (int i = 0; i < qtdNum; i++)
	{
		std::cout << i + 1 << "� n�mero:" << std::endl;
		std::cin >> num;

		pilha->push(num);
	}
}

int retornaTopo(std::stack<int>* pilha)
{
	int num = pilha->top();
	pilha->pop();

	return num;
}