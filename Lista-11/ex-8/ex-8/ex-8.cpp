/*
EXERC�CIO 1:
	Fa�a um programa em C++ que contenha uma classe que representa um funcion�rio, registrando seu nome, sal�rio e data de admiss�o. Crie por �ltimo 
	uma classe que representa uma empresa, registrando seu nome e CNPJ. Em todas as classes defina os atributos como privados e crie m�todos p�blicos 
	para acessar e modificar os atributos.

	Finalmente, fa�a um programa que:
	�	Crie uma empresa;
	�	Adicione a empresa alguns funcion�rios (solicitar no in�cio quantos);
	�	D� aumento de 10% a todos os funcion�rios de um determinado departamento.
*/
#include"Funcionario.h"
#include"Empresa.h"


///Fun��es do programa



int main()
{
	setlocale(LC_ALL, "Portuguese");

	Empresa* emp = new Empresa();

	emp->setColaborador();
	emp->setColaborador();
	emp->setColaborador();

}

