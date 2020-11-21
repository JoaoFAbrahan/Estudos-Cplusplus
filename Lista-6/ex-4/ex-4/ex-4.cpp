/*
	EXERCÍCIO 4:
		Ler nome, sexo e idade. Se o sexo for masculino e a idade for menor que 25, imprime o nome da pessoa e a palavra “ACEITO”, caso contrário imprimir “NÃO ACEITO”.
*/
#include<iostream>
#include<locale>
#include<string>

std::string converteMinusculo(std::string txt);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::string nome, sexo;
	int idade;

	std::cout << "Digite o nome, o sexo e a idade da pessoa:" << std::endl;
	std::getline(std::cin, nome);
	std::getline(std::cin, sexo);
	std::cin >> idade;

	//Função que percorre toda a cadeia de string e a converte para minúscula
	sexo = converteMinusculo(sexo);

	if (sexo == "masculino" && idade < 25)
	{
		std::cout << "ACEITO" << std::endl;
	}
	else
	{
		std::cout << "NÃO ACEITO" << std::endl;
	}
}

//Converte toda a string para minúsculo e retorna ela
std::string converteMinusculo(std::string txt)
{
	for (int i = 0; i < txt.length(); i++)
	{
		txt[i] = tolower(txt[i]);
	}

	return txt;
}