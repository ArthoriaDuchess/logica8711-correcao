#include <iostream>

int main() {

  int a;
  int b;
  // int a, b;

    std::cout << "digite um valor para a: "<<std::endl;
    std::cin >> a;

    std::cout << "digite um valor para b: "<<std::endl;
    std::cin >> b;

    std::cout << (a > b) << " o valor é maior "<< std::endl;
    std::cout << (a >= b) << " o valor é maior ou igual "<< std::endl;
    std::cout << (a < b) << " o valor é menor "<< std::endl;
    std::cout << (a <= b) << " o valor é menor ou igual "<< std::endl;
    std::cout << (a == b) << " os valores são iguais "<< std::endl;
    std::cout << (a != b) << " os valores são diferentes "<< std::endl;


    return 0;
}