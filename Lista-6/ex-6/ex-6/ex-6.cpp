/*
	EXERCÍCIO 6:
		Faça um programa que, dada uma string, diga se ela é um palíndromo ou não. Lembrando que um palíndromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita.
		Exemplo:
			ovo
			arara
			anotaram a data da maratona
*/
#include<iostream>
#include<locale>
#include<string>

bool verificaPalindromo(std::string txt);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::string texto;

	std::cout << "Digite um texto:" << std::endl;
	std::getline(std::cin, texto);
	std::cout << std::endl;

	if (verificaPalindromo(texto))
	{
		std::cout << "É palíndromo!" << std::endl;
	}
	else
	{
		std::cout << "Não é palíndromo!" << std::endl;
	}
}

bool verificaPalindromo(std::string txt)
{
	bool palindromo = true;
	int start = 0;	//Variável controle de posição de início do texto
	int end = txt.length() - 1;	//Variável controle de posição do final do texto

	do
	{
		//Verifica se a letra na posição "start" é diferente a letra na posição "end"
		if (txt[start] != txt[end])
		{
			palindromo = false;
			break;
		}

		end--;
		start++;
	} while (start < txt.length() / 2); // mantem o loop até atingir a metade da frase

	return palindromo;
}