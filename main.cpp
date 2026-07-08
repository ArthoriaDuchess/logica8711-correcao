#include <iostream>
#include <vector>

int main(){

    std::vector<int>numeros;

    std::cout<<" "<<std::endl;

    numeros.push_back(5);
    numeros.push_back(10);
    numeros.push_back(15);
    numeros.push_back(20);
    numeros.push_back(25);


    std::cout<<"Vector: ";
    for(int i = 0; i < numeros.size(); i++ ){
        std::cout<<numeros[i]<<" ";
    }

    std::cout<<std::endl;
    
    std::cout<<"Pares: ";
    for(int i = 0; i < numeros.size(); i++){
        if(numeros[i] % 2 == 0){
            std::cout<<numeros[i]<<" ";
        }
    }

    std::cout<<std::endl;

    std::cout<<"Impares: ";
    for(int i = 0; i < numeros.size(); i++){
       if(numeros[i] % 2 != 0){
            std::cout<<numeros[i]<<" ";
       }
    }
    

    return 0;
}