#pragma once
#include "Funcionario.h"


class Empresa
{
public:
	void setColaborador();
	void getColaborador();
	void removeColaborador();

private:
	std::list<Funcionario> colaboradores;
	
};