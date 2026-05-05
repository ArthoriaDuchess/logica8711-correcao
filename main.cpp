#include <iostream>
#include <string>

int main() {

    std::string nomeCompleto;

    std::cout<<"Digite o nome completo do aluno: "<<std::endl;
    std::getline(std::cin, nomeCompleto);

    std::cout<<nomeCompleto<<std::endl;

    
    
    return 0;
}