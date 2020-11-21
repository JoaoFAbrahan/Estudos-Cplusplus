#include<iostream>
#include<algorithm>
#include<list>
#include<string>


int main() {

   std::list<std::string> teste;

   teste.push_back("Aaaaa");
   teste.push_back("Bbbbb");
   teste.push_back("Ccccc");
   teste.push_back("Ddddd");
   teste.push_back("Eeeee");

   auto it = find(teste.begin(), teste.end(), "Ccccc");

   std::cout << *it << std::endl;
}