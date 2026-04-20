#include <iostream>
#include <string>

int main(){

    std::string carros[5] = {"Volvo", "BMW", "Ford", "Chevrolet", "Fiat"};

    int tamanho = sizeof(carros) / sizeof(carros[0]);

    std::cout<<tamanho<<std::endl;

    return 0;
}