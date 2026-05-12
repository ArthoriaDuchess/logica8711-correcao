#include <iostream>
#include <string>
#include <windows.h>


    float somar ( float a, float b){
        return a + b;
    }
    float subtrair (float a, float b){
        return a - b;
    }
    float multiplicar (float a, float b){
        return a * b;
    }
    float dividir (float a, float b){
        return a / b;
    }

void coletarNumeros (float &a, float &b){
    std::cout<<"Digite um valor para a: "<<std::endl;
    std::cin>>a;

    std::cout<<"Digite um valor para b: "<<std::endl;
    std::cin>>b;
}

void exibirResultado(float &a, float &b){
    coletarNumeros(a, b);

    int op;
    std::cout<<"Digite uma opção: "<<std::endl;
    std::cout<<"1 - somar"<<std::endl;
    std::cout<<"2 - subtrair"<<std::endl;
    std::cout<<"3 - multiplicar"<<std::endl;
    std::cout<<"4 - dividir"<<std::endl;
    std::cin>>op;

    switch(op){
        case 1:
        std::cout<<"O resultado e: "<<somar(a, b)<<std::endl;
        break;

        case 2:
        std::cout<<"O resultado e: "<<subtrair(a, b)<<std::endl;
        break;

        case 3:
        std::cout<<"O resultado e: "<<multiplicar(a, b)<<std::endl;
        break;

        case 4:
        std::cout<<"O resultado e: "<<dividir(a, b)<<std::endl;
        break;

        default:
        std::cout<<"Voce digitou um valor invalido!"<<std::endl;
    }
}
int main(){

    SetConsoleOutputCP(CP_UTF8); // Poder colocar acentos
    SetConsoleCP(CP_UTF8); // Poder colocar acentos

    float num1 = 0, num2 =0;
    exibirResultado(num1, num2);

    return 0;
}

