/*
	EXERC�CIO 5:
		Crie uma fun��o recursiva que receba um n�mero inteiro positivo N e calcule o somat�rio dos n�meros de 1 a N.
*/
#include<iostream>
#include<locale>

int somatoria_N(int n);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int n;

	std::cout << "Digite um n�mero:" << std::endl;
	std::cin >> n;

	std::cout << "Somat�ria de 1 at� " << n << " = " << somatoria_N(n) << std::endl;
}

int somatoria_N(int n)
{
	//Controla o limite da recurs�o
	if (n > 0)
	{
		//Chama a fun��o recursiva decrementando 1 ao par�metro
		return n + somatoria_N(n - 1);
	}
	else
	{
		//Retorna o resultado final
		return n;
	}
}