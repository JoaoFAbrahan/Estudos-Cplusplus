/*
	EXERC�CIO 10:
		Leia quatro notas, calcule a m�dia aritm�tica e imprima o resultado.
*/
#include<iostream>
#include<locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float nota1, nota2, nota3, nota4, media;

	std::cout << "Digite quatro notas de um aluno:" << std::endl;
	std::cin >> nota1 >> nota2 >> nota3 >> nota4;


	media = (nota1 + nota2 + nota3 + nota4) / 4;

	std::cout << "A m�dia final �: " << media << std::endl;
}