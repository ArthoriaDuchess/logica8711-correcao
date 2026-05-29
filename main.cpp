#include <iostream>
#include <tuple>
#include <string>

int contarDigitos(int n){
    if(n == 0) 
    return 0;

    return 1 + contarDigitos(n/10);
}

int main(){

    int numeroUsuario;

    std::cout<<"Digite um numero inteiro: "<<std::endl;
    std::cin>>numeroUsuario;

    if(numeroUsuario == 0){
        std::cout<<"O numero 0 tem 1 digito.\n";
    }else{
        std::cout<<"O numero "<<numeroUsuario<<" tem "<<contarDigitos(numeroUsuario)<<" digitos.\n";
    }

    std::cout<<"O numero "<<numeroUsuario<<" tem "<<contarDigitos(numeroUsuario)<<" digitos.\n";

        return 0;
}