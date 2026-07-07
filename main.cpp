#include <iostream>
#include <vector>

int main(){

    std::vector<int>numeros;

    std::cout<<"Contar ocorrências: "<<std::endl;

    numeros.push_back(5);
    numeros.push_back(10);
    numeros.push_back(5);
    numeros.push_back(15);
    numeros.push_back(15);
    numeros.push_back(5);
    numeros.push_back(15);

    std::cout<<"Vector: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }

    int contador = 0;
    for(int i = 0; i < numeros.size(); i++){
        if(numeros[i] == 5){
            contador++;
        }
    }
    std::cout<<"O número 5 aparece: "<<contador<<" vezes!"<<std::endl;

    return 0;
}