#include <iostream>
#include <cmath>

int main(){

    double area, raio;

    // M_PI é uma constante definida na biblioteca cmath que representa o valor de pi (aproximadamente 3.14159).
    std::cout << "Digite o raio do circulo: ";
    std::cin >> raio;
    
    // A função std::pow é usada para calcular a potência de um número. Neste caso, ela é usada para calcular o quadrado do raio (raio elevado a 2).
    area = M_PI * std::pow(raio, 2);
    std::cout << "A area do circulo e: " << area << std::endl;

    // A função std::sqrt é usada para calcular a raiz quadrada de um número.
    //Neste caso, ela é usada para calcular o raio do círculo a partir da área, usando a fórmula inversa da área do círculo (raio = sqrt(area / pi)).
    raio = std::sqrt(area / M_PI);
    std::cout << "O raio do circulo e: " << raio << std::endl;



    return 0;
}