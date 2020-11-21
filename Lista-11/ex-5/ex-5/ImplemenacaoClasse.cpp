#include"classe.h"

void Televisao::controleVolume(int operacao)
{
	if (operacao == 1) //Operação do contole (1 - almenta o volume / 0 - Reduz o volume)
	{
		if (volumeAtual < 100)
		{
			volumeAtual++;
		}
		else
		{
			std::cout << "MAX!" << std::endl;
			system("pause");
		}
	}
	else
	{
		if (volumeAtual > 0)
		{
			volumeAtual--;
		}
		else
		{
			std::cout << "MIN!" << std::endl;
			system("pause");
		}
	}
}
void Televisao::controleCanal(int operacao)
{
	if (operacao == 1) //Operação do contole (1 - avançar o canal / 0 - voltar o canal)
	{
		if (canalAtual < 50)
		{
			canalAtual++;
		}
		else
		{
			canalAtual = 0;
		}
	}
	else
	{
		if (canalAtual > 0)
		{
			canalAtual--;
		}
		else
		{
			canalAtual = 50;
		}
	}
}
void Televisao::getCanal_e_Volume()
{
	std::cout << "CANAL: " << canalAtual << std::endl;
	std::cout << "VOLUME: " << volumeAtual << std::endl;
}