#include <iostream>
#include <iomanip>

int main() {

    int a = 8;
    // int numero inteiro
    float b = 9.67382938;
    // float numero com ponto flutuante ocupa 4bytes (suporta 6-7 casas decimais) e tem menos precisão que o double
    double c = 4.6999999999;
    // double ocupa 8bytes e tem mais precisão que o float (aproximadamente 15-16 casas decimais)

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    std::cout << std::fixed << std::setprecision(10)<<c<<std::endl; 
    // Configura a precisão para 10 casas decimais

    
    return 0;
}