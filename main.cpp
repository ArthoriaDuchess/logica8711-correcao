#include <iostream>
#include <string>

int main(){

    int quantidade;

    do{

    std::cout<<"Digite a quantidade em estoque (Deve ser maior que 0): "<<std::endl;
    std::cin>>quantidade;
    }
    while(quantidade <= 0);
    std::cout<<"Estoque atualizado: "<<quantidade<< " Unidades."<<std::endl;

    return 0;
}