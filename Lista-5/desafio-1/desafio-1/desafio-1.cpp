/*
	DESAFIO 1:
		Dado um n�mero N na base decimal, escreva uma fun��o recursiva que converte este n�mero para bin�rio.
*/
#include<iostream>
#include<locale>

void conversaoBinario(int num);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero;

	std::cout << "Digite um n�mero:" << std::endl;
	std::cin >> numero;
	std::cout << std::endl;

	conversaoBinario(numero);
}

/*
	REGRAS DE CONVERS�O DE DECIMAL PARA BIN�RIO:
		Para se converter um n�mero decimal para bin�rio n�s dividimos ele por 2 at� que o ele seja menor que 2, assim o resto dessas divis�es 
		formam sua resultante em bin�rio.
		Exemplo:
		25 / 2 ==> 1
		12 / 2 ==> 0
		 6 / 2 ==> 0
		 3 / 2 ==> 1

		 ou seja 21 em bin�rio � = 1001
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