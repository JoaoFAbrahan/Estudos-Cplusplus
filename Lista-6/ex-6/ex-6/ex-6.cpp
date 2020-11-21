/*
	EXERC�CIO 6:
		Fa�a um programa que, dada uma string, diga se ela � um pal�ndromo ou n�o. Lembrando que um pal�ndromo � uma palavra que tenha a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita.
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
		std::cout << "� pal�ndromo!" << std::endl;
	}
	else
	{
		std::cout << "N�o � pal�ndromo!" << std::endl;
	}
}

bool verificaPalindromo(std::string txt)
{
	bool palindromo = true;
	int start = 0;	//Vari�vel controle de posi��o de in�cio do texto
	int end = txt.length() - 1;	//Vari�vel controle de posi��o do final do texto

	do
	{
		//Verifica se a letra na posi��o "start" � diferente a letra na posi��o "end"
		if (txt[start] != txt[end])
		{
			palindromo = false;
			break;
		}

		end--;
		start++;
	} while (start < txt.length() / 2); // mantem o loop at� atingir a metade da frase

	return palindromo;
}