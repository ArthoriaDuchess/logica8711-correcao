#include <iostream>
#include <string>

int main(){
    
    //Nome, Altura, Idade.
    //<10 = infantil
    //<18 = adolecente
    //<60 = adulto

    std::string nome;
    int idade;
    float altura;

    std::cout<<"Informe o seu nome: "<<std::endl;
    std::cin>> nome;

    std::cout<<"Qual a sua idade: "<<std::endl;
    std::cin>> idade;

    std::cout<<"Qual e a sua altura: "<<std::endl;
    std::cin>> altura;

    if (idade <= 10){
        std::cout<<"Ola "<<nome<<" voce tem "<<idade<<" e a sua altura e "<<altura<<" mas voce ainda esta muito novo para isso! "<<std::endl;

    }else if ( idade <= 18){
            std::cout<<"Ola "<<nome<<" voce tem "<<idade<<" e a sua altura e "<<altura<<",Voce esta apto para fazer isso! "<<std::endl;

    }else if (idade <= 40){
        std::cout<<"Ola "<<nome<<" voce tem "<<idade<<" e a sua altura e "<<altura<<" ,acho que isso nao e para voce nesse momento! "<<std::endl;

    }else{
        std::cout<<"Ola "<<nome<<" voce tem "<<idade<<" e a sua altura e "<<altura<<" ,talvez voce ja tenha passado desse momento!"<<std::endl;

    }

    return 0;
}