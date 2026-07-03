#include <iostream>
#include <vector>

int main(){

    std::vector<int>numeros;

    std::cout<<"===== Maior e menor ====="<<std::endl;

    numeros.push_back(15);
    numeros.push_back(8);
    numeros.push_back(25);
    numeros.push_back(3);
    numeros.push_back(42);
    
    std::cout<<"Vector: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }
    std::cout<<std::endl;
    int maior = numeros[0];
    int menor = numeros[0];

    for(int i = 0; i < numeros.size(); i++){
        if(numeros[i] > maior){
            maior = numeros[i];
        }
        if(numeros[i] < menor){
            menor = numeros[i];
        }
    }
    std::cout<<"Maior: "<<maior<<std::endl;
    std::cout<<"Menor: "<<menor<<std::endl;

    return 0;
}