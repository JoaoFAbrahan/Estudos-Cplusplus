/*
	EXERC�CIO 9:
		Elabore uma fun��o que receba tr�s notas de um aluno como par�metros e uma letra. Se a letra for A, a fun��o dever�
		calcular a m�dia aritm�tica das notas do aluno; se for P, dever� calcular a m�dia ponderada, com pesos 5, 3 e 2.
*/
#include<iostream>
#include<locale>

float media_Aritmetica(float nota1, float nota2, float nota3);
float media_Ponderada(float nota1, float nota2, float nota3);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float nota1, nota2, nota3;
	char opcao;

	std::cout << "Digite as notas do aluno:" << std::endl << "NOTA 1: ";
	std::cin >> nota1;
	std::cout << "NOTA 2: ";
	std::cin >> nota2;
	std::cout << "NOTA 3: ";
	std::cin >> nota3;
	std::cout << std::endl << std::endl;


	bool loop = true;
	do
	{
		system("cls");

		std::cout << "ESCOLHA A OP��O:" << std::endl << "A - M�dia Aritm�tica" << std::endl << "P - M�dia Ponderada" << std::endl;
		std::cin >> opcao;

		switch (opcao)
		{
		case 'a':
		case 'A':
			std::cout << "A m�dia geral do aluno foi: " << media_Aritmetica(nota1, nota2, nota3) << std::endl;

			loop = false;
			break;
		case 'p':
		case 'P':
			std::cout << "A m�dia geral do aluno foi: " << media_Ponderada(nota1, nota2, nota3) << std::endl;

			loop = false;
			break;
		default:
			std::cout << "Op��o Inv�lida!" << std::endl;

			system("pause");
			break;
		}
	} while (loop == true);
}

float media_Aritmetica(float nota1, float nota2, float nota3)
{
	return (nota1 + nota2 + nota3) / 3;
}
float media_Ponderada(float nota1, float nota2, float nota3)
{
	nota1 *= 5;
	nota2 *= 3;
	nota3 *= 2;

	return (nota1 + nota2 + nota3) / 10;
}