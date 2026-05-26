#include <iostream>
#include <format>
#include <string>

int main(){

    std::string nome = "Eduardo";
    
    std::string mensagem = std::format("Ola, {}! Você tem {} anos. \n", nome);
    std::cout<<mensagem;

    return 0;
}

