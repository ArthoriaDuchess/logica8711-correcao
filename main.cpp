#include <iostream>
#include <string>

struct Aluno{
    std::string nome;
    float nota;
};

int main (){

     Aluno alunos [3]={
        {"Henrique",8.5},
        {"Paula", 9.0},
        {"Juliana", 7.0}
};

    for(int i = 0; i < 3; i++){
        std::cout<<alunos[i].nome<<": "<<alunos[i].nota<<std::endl;
    }

    return 0;
}        