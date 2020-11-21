/*
EXERCÍCIO 1:
	Faça um programa em C++ que contenha uma classe que representa um funcionário, registrando seu nome, salário e data de admissão. Crie por último 
	uma classe que representa uma empresa, registrando seu nome e CNPJ. Em todas as classes defina os atributos como privados e crie métodos públicos 
	para acessar e modificar os atributos.

	Finalmente, faça um programa que:
	•	Crie uma empresa;
	•	Adicione a empresa alguns funcionários (solicitar no início quantos);
	•	Dê aumento de 10% a todos os funcionários de um determinado departamento.
*/
#include"Funcionario.h"
#include"Empresa.h"


///Funções do programa



int main()
{
	setlocale(LC_ALL, "Portuguese");

	Empresa* emp = new Empresa();

	emp->setColaborador();
	emp->setColaborador();
	emp->setColaborador();

}

