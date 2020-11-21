#pragma once
#include<iostream>
#include<iomanip>
#include<locale>
#include<string>
#include<list>


struct dataAdimicao
{
	int dia;
	int mes;
	int ano;
};


class Funcionario
{
public:
	Funcionario();
	~Funcionario();
	void getInformacoes();
	std::string busca();
	std::string nomeBuscador;

private:
	std::string nome;
	float salario;
	dataAdimicao admicao;
};

