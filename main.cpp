#include <iostream>

int main() {

   int num1 = 8;
   int num2 = 2;
   int soma, subtracao, multiplicacao, divisao;

   soma = num1 + num2;
   subtracao = num1 - num2;
   multiplicacao = num1 * num2;
   divisao = num1 / num2;

   std::cout << " 8+2= " << soma << std::endl;
   std::cout << " 8-2= " << subtracao << std::endl;
   std::cout << " 8*2= " << multiplicacao << std::endl;
   std::cout << " 8/2= " << divisao << std::endl;

    return 0;
}