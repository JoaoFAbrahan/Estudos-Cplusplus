/*
	EXERCÍCIO 5:
		Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa palavra. Entre com um caractere (vogal ou consoante)
		e substitua todas as vogais da palavra dada por esse caractere.
*/
#include<iostream>
#include<locale>
#include<string>

int contaVogais(std::string txt);
std::string substituiVogais(std::string txt, char letra);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::string palavra;
	char letra;

	std::cout << "Digite uma palavra:" << std::endl;
	std::getline(std::cin, palavra);
	std::cout << "Digite uma vogal ou consoante para substituir:" << std::endl;
	std::cin >> letra;
	std::cout << std::endl;

	std::cout << "Total de vogais localizadas: " << contaVogais(palavra) << std::endl;
	std::cout << "Frase com vogais substituídas: " << substituiVogais(palavra, letra) << std::endl;
}

int contaVogais(std::string txt)
{
	int cont = 0;

	for (int i = 0; i < txt.length(); i++)
	{
		//Converte tuda a cadeia para minúsculo
		txt[i] = tolower(txt[i]);

		//Conta as vogais
		if (txt[i] == 'a' || txt[i] == 'e' || txt[i] == 'i' || txt[i] == 'o' || txt[i] == 'u')
		{
			cont++;
		}
	}

	return cont;
}

std::string substituiVogais(std::string txt, char letra)
{
	for (int i = 0; i < txt.length(); i++)
	{
		//Converte tuda a cadeia para minúsculo
		txt[i] = tolower(txt[i]);

		//Substitui vogais pela letra
		if (txt[i] == 'a' || txt[i] == 'e' || txt[i] == 'i' || txt[i] == 'o' || txt[i] == 'u')
		{
			txt[i] = letra;
		}
	}

	return txt;
}