#include <iostream>
#include <vector>

int main(){

    std::vector<int>numeros;

    std::cout<<" "<<std::endl;

    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
    numeros.push_back(40);
    numeros.push_back(50);


    std::cout<<"Original: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"Invertido: ";
    for(int i = numeros.size() -1; i >= 0; i--){
        std::cout<<numeros[i]<<" ";
    }
    std::cout<<std::endl;

    return 0;
}