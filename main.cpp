#include <iostream>

int main(){

    int opcao;

    std::cout<<"Digite um valor para a opcao"<<std::endl;
    std::cin>>opcao;

    switch(opcao){
        //code
        //break;

        case 1:
        
        std::cout<<"Doming!"<<std::endl;
        break;

        case 2:

        std::cout<<"Segunda-feira!"<<std::endl;
        break;

        case 3:

        std::cout<<"Terca-feira!"<<std::endl;
        break;

        case 4:

        std::cout<<"Quarta-feira!"<<std::endl;
        break;

        case 5:

        std::cout<<"Quinta-feira!"<<std::endl;
        break;

        case 6:

        std::cout<<"Sexta-feira!"<<std::endl;
        break;

        case 7:

        std::cout<<"Sabado!"<<std::endl;
        break;

        default:

        std::cout<<"Numero invalido!"<<std::endl;
    }

    return 0;
}