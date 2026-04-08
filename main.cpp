#include <iostream>
#include <cmath>

int main(){

    int a = 5;
    int b = 3;
    int c = 5;
    int d = 2;

    int maior1 = std::max(a, b);
    int maior2 = std::max(c, d);

    std::cout<<(maior1 > maior2)<<std::endl;


    return 0;
}