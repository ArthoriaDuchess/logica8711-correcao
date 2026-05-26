#include <iostream>
#include <string>
#include <windows.h>

int main(){

    int numero;
    int contador = 0;

    while(true){
        std::cout<<"Digite um numero(0 para parar): ";
        std::cin>>numero;

        if(numero == 0){
            break;
        }
        contador++;
    }

    std::cout<<"Voce digitou "<<contador<<" numero!!"<<std::endl;

    return 0;
}

