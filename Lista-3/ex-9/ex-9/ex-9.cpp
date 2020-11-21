/*
	EXERCÍCIO 9:
		Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a letra for A, a função deverá
		calcular a média aritmética das notas do aluno; se for P, deverá calcular a média ponderada, com pesos 5, 3 e 2.
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

		std::cout << "ESCOLHA A OPÇÃO:" << std::endl << "A - Média Aritmética" << std::endl << "P - Média Ponderada" << std::endl;
		std::cin >> opcao;

		switch (opcao)
		{
		case 'a':
		case 'A':
			std::cout << "A média geral do aluno foi: " << media_Aritmetica(nota1, nota2, nota3) << std::endl;

			loop = false;
			break;
		case 'p':
		case 'P':
			std::cout << "A média geral do aluno foi: " << media_Ponderada(nota1, nota2, nota3) << std::endl;

			loop = false;
			break;
		default:
			std::cout << "Opção Inválida!" << std::endl;

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