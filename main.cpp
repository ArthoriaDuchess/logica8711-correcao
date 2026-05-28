#include <iostream>
#include <tuple>
#include <string>

int main(){

    std::string name;
    int idade;
    double altura;

    std::cout<<"Digite o seu nome: "<<std::endl;
    std::getline(std::cin, name);

    std::cout<<"Digite a sua idade: "<<std::endl;
    std::cin>>idade;

    std::cout<<"Digite a sua altura: "<<std::endl;
    std::cin>>altura;

    std::tuple<std::string, int, double> pessoa = std::make_tuple(name, idade, altura);

    std::cout<<"\n ------ Dados salvos na tupla ------"<<std::endl;

    std::cout<<"Nome: "<<std::get<0>(pessoa)<<std::endl;
    std::cout<<"Idade: "<<std::get<1>(pessoa)<<" anos. "<<std::endl;
    std::cout<<"Altura: "<<std::get<2>(pessoa)<<"m"<<std::endl;

        return 0;
}