/*
	EXERCÍCIO 1:
		Escreva um programa que acumula n valores da sequência de Fibonacci em uma pilha.
*/
#include<iostream>
#include<locale>
#include<stack>


//Funções do programa
void calculo_Fibonacci(int numero, std::stack<int>* sequencia);
void apresentar(std::stack<int>* sequencia);


int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::stack<int> sequencia;
	int numero;

	std::cout << "Digite um número:" << std::endl;
	std::cin >> numero;
	std::cout << std::endl;

	calculo_Fibonacci(numero, &sequencia);
	apresentar(&sequencia);
}

void calculo_Fibonacci(int numero, std::stack<int>* sequencia)
{
	int numF1 = -1, numF2 = 1, fibonacci;	//Variáveis para controle o -1 e 1 é para que no primeiro caso dé o valor 0 pois (-1) + (1) = 0
	for (int i = 0; i < numero; i++)
	{
		fibonacci = numF1 + numF2;			//Executa a operação para o Fibonacci
		numF1 = numF2;						//Controle para o proximo valor
		numF2 = fibonacci;					//Controle para o proximo valor

		sequencia->push(fibonacci);			//Adiciona valor na pilha
	}
}

void apresentar(std::stack<int>* sequencia)
{
	std::cout << "APRESENTANDO FIBONACCI:" << std::endl;
	while (!sequencia->empty())
	{
		std::cout << sequencia->top() << std::endl;
		sequencia->pop();
	}
}