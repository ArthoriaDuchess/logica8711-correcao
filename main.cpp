#include <iostream>
#include <string>

int main() {

    int opcao;
    std::string name;
    int idade;

    std::cout<<"---- Escolha a opção adequada: "<<std::endl;
    std::cout<<"Digite 1 para cadastrar ou 2 para sair: "<<std::endl;
    std::cin>>opcao;

    if(opcao == 1){
        std::cout<<"Digite o nome: "<<std::endl;
        std::cin>>name;
        std::cout<<"Digite a idade: "<<std::endl;
        std::cin>>idade;

        std::cout<<"Seu nome é: "<<name<<std::endl;
        std::cout<<"Sua idade é: "<<idade<<std::endl;

    }else{
        std::cout<<"Até a proxima!"<<std::endl;
    }
    return 0;
}