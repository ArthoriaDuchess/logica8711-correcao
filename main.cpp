#include <iostream>
#include <string>

int main(){

    std::string letras[2][4] = {
        {"a", "b", "c", "d"},
        {"e", "f", "g", "h"}
    };

    std::cout<<letras[1][0]<<std::endl; // Imprime "e"

    return 0;
}