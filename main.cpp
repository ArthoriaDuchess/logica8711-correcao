#include <iostream>
#include <string>

int quadrado(int n){
    return n*n;

}
int cubo (int n){
    return n*n*n;

}
int main(){

    // calculo ao quadrado
    std::cout<<"Aqui estão os valores ao quadrado!"<<std::endl;

    std::cout<<"Quadrado de 5: "<<quadrado(5)<<std::endl;
    std::cout<<"Quadrado de 8: "<<quadrado(8)<<std::endl;
    std::cout<<"Quadrado de 10: "<<quadrado(10)<<std::endl;

    // calculo ao cubo
    std::cout<<"\nAqui estão os valores ao cubo!"<<std::endl;

    std::cout<<"Cubo de 5: "<<cubo(5)<<std::endl;
    std::cout<<"Cubo de 8: "<<cubo(8)<<std::endl;
    std::cout<<"Cubo de 10: "<<cubo(10)<<std::endl;
    
    return 0;
}

