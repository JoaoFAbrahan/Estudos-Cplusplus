/*
	EXERCÍCIO 5:
		Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N.
*/
#include<iostream>
#include<locale>

int somatoria_N(int n);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int n;

	std::cout << "Digite um número:" << std::endl;
	std::cin >> n;

	std::cout << "Somatória de 1 até " << n << " = " << somatoria_N(n) << std::endl;
}

int somatoria_N(int n)
{
	//Controla o limite da recursão
	if (n > 0)
	{
		//Chama a função recursiva decrementando 1 ao parâmetro
		return n + somatoria_N(n - 1);
	}
	else
	{
		//Retorna o resultado final
		return n;
	}
}