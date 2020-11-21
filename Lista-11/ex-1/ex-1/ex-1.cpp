/*
EXERCÍCIO 1:
	Crie uma classe para representar uma pessoa, com os atributos privados de nome, idade e altura. Crie os métodos públicos
	necessários para sets e gets e também um método para imprimir os dados de uma pessoa.
*/
#include<iostream>
#include<iomanip>
#include<locale>
#include<string>


///Classes do programa
class Pessoa
{
public:
	std::string getName();
	int getIdade();
	float getAltura();
	void set();
	void apresentar();

private:
	std::string nome;
	int idade;
	float altura;
};
std::string Pessoa::getName()
{
	return nome;
}
int Pessoa::getIdade()
{
	return idade;
}
float Pessoa::getAltura()
{
	return altura;
}
void Pessoa::set()
{
	std::cout << "Digite o nome da pessoa:" << std::endl;
	std::getline(std::cin, nome);
	std::cout << "Digite a idade:" << std::endl;
	std::cin >> idade;
	std::cout << "Digite a altura:" << std::endl;
	std::cin >> altura;
	std::cout << std::endl;
}
void Pessoa::apresentar()
{
	std::cout << "Nome: " << getName() << std::endl;
	std::cout << "Idade: " << getIdade() << "anos." << std::endl;
	std::cout << std::setprecision(2) << std::fixed;
	std::cout << "Altura: " << getAltura() << "metros." << std::endl;
	std::cout << std::endl;
}


int main()
{
	setlocale(LC_ALL, "Portuguese");

	Pessoa* pessoa = new Pessoa();


	//Entrada de dados
	pessoa->set();


	//Apresentar dados
	pessoa->apresentar();
}