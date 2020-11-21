/*
	EXERC�CIO 7:
		Utilizando fun��es, fa�a uma calculadora que contenha as opera��es: adi��o, subtra��o, multiplica��o e divis�o. 
		A escolha da opera��o deve ser fornecida pelo usu�rio, assim como os 2 valores a serem calculados na opera��o.
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
		std::cout << "1 - Adi��o" << std::endl << "2 - Subtra��o" << std::endl << "3 - Multiplica��o" << std::endl << "4 - Divis�o" << std::endl << "5 - SAIR" << std::endl;
		std::cin >> opcao;

		//SWITCH DAS OP��ES
		switch (opcao)
		{
		case '1':
			std::cout << "Digite os dois n�meros para a opera��o:" << std::endl;
			std::cin >> numero1 >> numero2;

			//CHAMA A FUN��O ADI��O
			std::cout << "Resultado da adi��o: " << adicao(numero1, numero2) << std::endl;

			system("pause");
			break;
		case '2':
			std::cout << "Digite os dois n�meros para a opera��o:" << std::endl;
			std::cin >> numero1 >> numero2;

			//CHAMA A FUN��O SUBTRA��O
			std::cout << "Resultado da subtra��o: " << subtracao(numero1, numero2) << std::endl;

			system("pause");
			break;
		case '3':
			std::cout << "Digite os dois n�meros para a opera��o:" << std::endl;
			std::cin >> numero1 >> numero2;

			//CHAMA A FUN��O MULTIPLICA��O
			std::cout << "Resultado da multiplica��o: " << multiplicacao(numero1, numero2) << std::endl;

			system("pause");
			break;
		case '4':
			std::cout << "Digite os dois n�meros para a opera��o:" << std::endl;
			std::cin >> numero1 >> numero2;

			//VERIFICA SE O DIVISOR � ZERO
			if (numero2 != 0)
			{
				//CHAMA A FUN��O DIVIS�O
				std::cout << "Resultado da divis�o: " << divisao(numero1, numero2) << std::endl;
			}
			else
			{
				std::cout << "Imposs�vel dividir por 0!" << std::endl;
			}

			system("pause");
			break;
		case '5':
			//FINALIZA O LOOP DO MENU
			loop = false;

			break;
		default:
			std::cout << "Op��o inv�lida!" << std::endl;
			
			system("pause");
			break;
		}
	} while (loop == true);
}


//FUN��ES DAS OPERA��ES
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