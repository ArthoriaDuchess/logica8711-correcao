#include <iostream>

int main(){

    int soma = 0;

    for(int i = 1; i <= 5; i++){
        soma = soma + i;
    }

    std::cout<<"Soma é: "<<soma<<std::endl;

    return 0;
}