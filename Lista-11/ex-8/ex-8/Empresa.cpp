#include "Empresa.h"


void Empresa::setColaborador()
{
	Funcionario* funcionario = new Funcionario();
	colaboradores.push_front(*funcionario);
}
void Empresa::getColaborador()
{
	Funcionario funcionarioPesquisado;

	std::cout << "- - - BUSCAR FUNCIONÁRIO: - - -" << std::endl;
	std::cout << "Digite o nome do funcionário:" << std::endl;
	std::getline(std::cin, funcionarioPesquisado.nomeBuscador);
	std::cout << std::endl;

	std::list<Funcionario>::iterator iterator = std::find_if(colaboradores.begin(), colaboradores.end(), funcionarioPesquisado.nomeBuscador);
}
void Empresa::removeColaborador()
{

}