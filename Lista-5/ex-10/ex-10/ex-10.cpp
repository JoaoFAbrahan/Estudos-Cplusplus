/*
	EXERC�CIO 10:
		Dado um n�mero inteiro N, escreva uma fun��o recursiva que calcule a Fibonacci deste n�mero.
*/
#include<iostream>
#include<locale>

int fibonacci(int num);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero, fibonacciNumero;

	std::cout << "Digite um n�mero:" << std::endl;
	std::cin >> numero;
	std::cout << std::endl;

	fibonacciNumero = fibonacci(numero);

	std::cout << "O Fibonacci de " << numero << " = " << fibonacciNumero << std::endl;
}

/*
	OQUE � FIBONACCI:
		Um Fibonacci � uma sequencia num�rica onde o Fibonacci do numero N � a soma dos seus dois antecessores F(n) = F(n-1) + F(n -2)
		EXEMPLO:
		N ==> 0 1 2 3 4 5 6 7  8  9 10
		F ==> 0 0 1 1 2 3 5 8 13 21 34
*/
int fibonacci(int num)
{
	//Controla a nossa recursividade utilizando uma das peculiaridades da sequ�ncia fibonacci onde sempre o 2 e terceiro termo de um fibonacci � 1
	if (num == 2 || num == 3)
	{
		return 1;
	}
	else
	//Aplica a formula para calcular a seque�ncia utilizando uma fun��o recursiva
	{
		return fibonacci(num - 1) + fibonacci(num - 2);
	}
}