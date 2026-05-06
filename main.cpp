#include <iostream>
#include <string>
#include <windows.h>
#include <iomanip>


    int cpfAluno;
    int rgAluno;
    std::string nomeAluno;
    std::string emailAluno;
    std::string contatoAluno;
    std::string dataNacimento;
    std::string endereçoAluno;
    std::string bairroAluno

    int cpfResponsavel;
    std::string nomeResponsavel;


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
    
    std::cout<<"Informe o cpf do Aluno: "<<std::endl;
    std::cin>>cpfAluno;
    
}



int main() {

    SetConsoleOutputCP(CP_UTF8); // Poder colocar acentos
    SetConsoleCP(CP_UTF8); // Poder colocar acentos

    // int modalidade = -1;
    // std::string nome, sobrenome, cep, cpf

    // exibirModalidade();
    // modalidade;

    
    return 0;
}