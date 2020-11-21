/*
	EXERC�CIO 5:
		Dado uma pilha que armazene n�meros, escreva uma fun��o para ordenar os valores da pilha em ordem crescente.
*/
#include<iostream>
#include<locale>
#include<stack>


//Fun��es do programa
void entradaDados(std::stack<int>* pilha);
void ordenacaoPilha(std::stack<int>* pilha);
void apresentar(std::stack<int>* pilha);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::stack<int> pilha;

	entradaDados(&pilha);
	ordenacaoPilha(&pilha);
	apresentar(&pilha);
}

void entradaDados(std::stack<int>* pilha)
{
	int qtdNum, num;

	std::cout << "Digite a quantidade de n�meros:" << std::endl;
	std::cin >> qtdNum;
	std::cout << std::endl;

	std::cout << "- - - - ENTRADA DE DADOS: - - - -" << std::endl;
	for (int i = 0; i < qtdNum; i++)
	{
		std::cout << i + 1 << "� n�mero:" << std::endl;
		std::cin >> num;

		pilha->push(num);
	}
}

void ordenacaoPilha(std::stack<int>* pilha)
{
	int* vetor;
	int length = pilha->size();

	//ALOCA��O DIN�MICA DE VETOR PARA ORGANIZA��O DOS VALORES
	vetor = (int*)calloc(length, sizeof(int));

	for (int i = 0; i < length; i++)
	{
		vetor[i] = pilha->top();
		pilha->pop();
	}

	//ORDENA��O MAIOR PARA MENOR
	int aux;
	bool loop;

	do
	{
		loop = false;

		for (int i = 0; i < length - 1; i++)
		{
			if (vetor[i] < vetor[i + 1])
			{
				aux = vetor[i];
				vetor[i] = vetor[i + 1];
				vetor[i + 1] = aux;
				loop = true;
			}
		}

	} while (loop == true);

	//ADICINA ELEMENTOS ORDENADO
	for (int i = 0; i < length; i++)
	{
		pilha->push(vetor[i]);
	}
}

void apresentar(std::stack<int>* pilha)
{
	std::cout << "- - - - APRESENTAR VALORES: - - - -" << std::endl;
	while (!pilha->empty())
	{
		std::cout << pilha->top() << " ";
		pilha->pop();
	}
	std::cout << std::endl;
}