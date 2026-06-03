#include <iostream>
#include <string>

struct Aluno{
    std::string nome;
    float nota1;
    float nota2;
};

float calcularMedia(Aluno a){
    return (a.nota1 + a.nota2) / 2;
}

int main (){

     Aluno aluno;

    float media = calcularMedia(aluno);

    std::cout<<"Informe o seu nome: ";
    std::getline(std::cin, aluno.nome);
    
    std::cout<<"Informe a sua primeira nota: ";
    std::cin>>aluno.nota1;

    std::cout<<"Informe a sua segunda nota: ";
    std::cin>>aluno.nota2;

    std::cout<<aluno.nome<<" Sua média é: "<<calcularMedia<<std::endl;

    return 0;
}        