#include <iostream>
#include <string>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8); // Poder colocar acentos
    SetConsoleCP(CP_UTF8); // Poder colocar acentos

    int numero, sorteado = 42;

    do{
        std::cout<<"Advinhe: ";
        std::cin>>numero;
        if(numero < sorteado) std::cout<<"Maior!"<<std::endl;
        else if (numero != sorteado) std::cout<<"Menos!"<<std::endl;
    }while(numero != sorteado);

    std::cout<<"Acertou!!"<<std::endl;
    
    return 0;
}

