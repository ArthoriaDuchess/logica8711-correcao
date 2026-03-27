#include <iostream>

int main() {

    int a = 8;
    // int numero inteiro
    float b = 9.6;
    // float numero com ponto flutuante ocupa 4bytes (suporta 6-7 casas decimais) e tem menos precisão que o double
    double c = 4.6;
    // double ocupa 8bytes e tem mais precisão que o float (aproximadamente 15-16 casas decimais)


    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    return 0;
}