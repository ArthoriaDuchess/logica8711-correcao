#include <iostream>
#include <string>
#include <windows.h>
#include <iomanip>


    std::string nomeAluno;
    std::string nomeResponsavel;
    int cpfAluno;
    int cpfResponsavel;

void exibirModalidade(){
    std::cout<<"\n=========== SENAC NH - MATRICULAS =========="<<std::endl;
    std::cout<<"1 - Cursos Presenciais"<<std::endl;
    std::cout<<"2 - Cursos EAD"<<std::endl;
    std::cout<<"3 - Idiomas (Libras)"<<std::endl;
    std::cout<<"0 - Sair do sistema"<<std::endl;
    std::cout<<"Selecione a modalidade do curso"<<std::endl;
}


void cadastroAluno(){
    std::cout<<"Digite o nome completo do Aluno: "<<std::endl;
    std::getline(std::cin, nomeAluno);
    std::cout<<"Digite o nome completo do Responsavel: "<<std::endl;
    std::getline(std::cin, nomeResponsavel);
    std::cout<<"Informe o cpf do Aluno: "<<std::endl;
    std::cin>>cpfAluno;
    std::cout<<"Informe o cpf do Responsavel: "<<std::endl;
    std::cin>>cpfResponsavel;
}



int main() {

    SetConsoleOutputCP(CP_UTF8); // Poder colocar acentos
    SetConsoleCP(CP_UTF8); // Poder colocar acentos

    int modalidade = -1;
    std::string nome, sobrenome, cep, cpf

    exibirModalidade();
    modalidade;

    
    return 0;
}