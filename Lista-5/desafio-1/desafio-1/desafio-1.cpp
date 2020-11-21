/*
	DESAFIO 1:
		Dado um número N na base decimal, escreva uma função recursiva que converte este número para binário.
*/
#include<iostream>
#include<locale>

void conversaoBinario(int num);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero;

	std::cout << "Digite um número:" << std::endl;
	std::cin >> numero;
	std::cout << std::endl;

	conversaoBinario(numero);
}

/*
	REGRAS DE CONVERSÃO DE DECIMAL PARA BINÁRIO:
		Para se converter um número decimal para binário nós dividimos ele por 2 até que o ele seja menor que 2, assim o resto dessas divisões 
		formam sua resultante em binário.
		Exemplo:
		25 / 2 ==> 1
		12 / 2 ==> 0
		 6 / 2 ==> 0
		 3 / 2 ==> 1

		 ou seja 21 em binário é = 1001
*/
void conversaoBinario(int num)
{
	//Controla nossa recursividade
	if (num > 2)
	{
		std::cout << num % 2;
		conversaoBinario(num / 2);
	}
	//Pula uma linha ao final
	else
	{
		std::cout << std::endl;
	}
}