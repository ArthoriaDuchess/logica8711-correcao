#include <iostream>
#include <tuple>
#include <string>
#include <cctype>

struct Pessoa{
    std::string nome;
    int idade;
    float altura;
};

int main(){

    Pessoa p1;
    
    p1.nome = "Diego dos Santos";
    p1.idade = 22;
    p1.altura = 1.79;

    std::cout<<"Nome: "<<p1.nome<<std::endl;
    std::cout<<"Idade: "<<p1.idade<<std::endl;
    std::cout<<"Altura: "<<p1.altura<<std::endl;

    return 0;
}           