#include <iostream>
#include <string>

int main(){

    std::string carros[5] = {"Volvo", "BMW", "Ford", "Chevrolet", "Fiat"};

    for(int i = 0; i < 5; i++){
        std::cout<<carros[i]<<std::endl;
    }

    return 0;
}