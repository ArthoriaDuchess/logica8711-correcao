#include <iostream>

int main(){

    int num1, num2, soma;

    std::cout<< "digite o num1: "<<std::endl;
    std::cin>>num1;

    std::cout<< "digite o num2: "<<"\n";
    std::cin>>num2;

    soma = num1 + num2;

    std::cout<< "\na soma dos numeros e: " << soma << "\n";

    // \n seria o equivalente a endl, ou seja, quebra de linha, porem o endl tem a vantagem de limpar o buffer, ou seja, ele garante que tudo que foi escrito no console seja exibido antes de continuar a execução do programa, enquanto o \n apenas quebra a linha sem garantir isso.
   // std::cout<< "\n \n \n";


    return 0;
}