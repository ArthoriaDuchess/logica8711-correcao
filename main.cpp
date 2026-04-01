#include <iostream>
#include <string>

int main(){


     std::string nome;
     std::string sobrenome1;
     std::string sobrenome2;
     int age;
     int yearOfBirth = 2026;


        std::cout<< "digite seu nome: "<<std::endl;
        std::cin>> nome;
        std::cout<< "digite seu sobrenome: "<<std::endl;
        std::cin>> sobrenome1;
        std::cout<< "digite seu segundo sobrenome: "<<std::endl;
        std::cin>> sobrenome2;
        std::cout<< "digite sua idade: "<<std::endl;
        std::cin>> age;
        std::cout<< "digite o ano atual: "<<std::endl;
        std::cin>> yearOfBirth;
        std::cout<< (nome) <<" "<<(sobrenome1)<< " " <<(sobrenome2)<<" voce nasceu no ano: "<<(yearOfBirth - age) <<" Parabens! Voce esta ficando mais velho. "<<std::endl;


    //solicite ao usuario para ele digitar o seu nome
    //calcular idade do usuario
    //fazer um calculo para que diga que ano nasceu
    //no final mostre o nome da pessoa.. voce nasceu no ano..



    return 0;
}