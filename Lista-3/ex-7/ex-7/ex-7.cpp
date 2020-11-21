/*
	EXERCÍCIO 7:
		Utilizando funções, faça uma calculadora que contenha as operações: adição, subtração, multiplicação e divisão. 
		A escolha da operação deve ser fornecida pelo usuário, assim como os 2 valores a serem calculados na operação.
*/
#include<iostream>
#include<locale>

void menu_Principal();

float adicao(float numero1, float numero2);
float subtracao(float numero1, float numero2);
float multiplicacao(float numero1, float numero2);
float divisao(float numero1, float numero2);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	menu_Principal();
}

void menu_Principal()
{
	char opcao;
	float numero1, numero2;

	//CONTROLE DE LOOP
	bool loop = true;
	do
	{
		system("cls");

		std::cout << "- - - - CALCULADORA: - - - -" << std::endl;
		std::cout << "1 - Adição" << std::endl << "2 - Subtração" << std::endl << "3 - Multiplicação" << std::endl << "4 - Divisão" << std::endl << "5 - SAIR" << std::endl;
		std::cin >> opcao;

		//SWITCH DAS OPÇÕES
		switch (opcao)
		{
		case '1':
			std::cout << "Digite os dois números para a operação:" << std::endl;
			std::cin >> numero1 >> numero2;

			//CHAMA A FUNÇÃO ADIÇÃO
			std::cout << "Resultado da adição: " << adicao(numero1, numero2) << std::endl;

			system("pause");
			break;
		case '2':
			std::cout << "Digite os dois números para a operação:" << std::endl;
			std::cin >> numero1 >> numero2;

			//CHAMA A FUNÇÃO SUBTRAÇÃO
			std::cout << "Resultado da subtração: " << subtracao(numero1, numero2) << std::endl;

			system("pause");
			break;
		case '3':
			std::cout << "Digite os dois números para a operação:" << std::endl;
			std::cin >> numero1 >> numero2;

			//CHAMA A FUNÇÃO MULTIPLICAÇÃO
			std::cout << "Resultado da multiplicação: " << multiplicacao(numero1, numero2) << std::endl;

			system("pause");
			break;
		case '4':
			std::cout << "Digite os dois números para a operação:" << std::endl;
			std::cin >> numero1 >> numero2;

			//VERIFICA SE O DIVISOR É ZERO
			if (numero2 != 0)
			{
				//CHAMA A FUNÇÃO DIVISÃO
				std::cout << "Resultado da divisão: " << divisao(numero1, numero2) << std::endl;
			}
			else
			{
				std::cout << "Impossível dividir por 0!" << std::endl;
			}

			system("pause");
			break;
		case '5':
			//FINALIZA O LOOP DO MENU
			loop = false;

			break;
		default:
			std::cout << "Opção inválida!" << std::endl;
			
			system("pause");
			break;
		}
	} while (loop == true);
}


//FUNÇÕES DAS OPERAÇÕES
float adicao(float numero1, float numero2)
{
	return numero1 + numero2;
}
float subtracao(float numero1, float numero2)
{
	return numero1 - numero2;
}
float multiplicacao(float numero1, float numero2)
{
	return numero1 * numero2;
}
float divisao(float numero1, float numero2)
{
	return numero1 / numero2;
}