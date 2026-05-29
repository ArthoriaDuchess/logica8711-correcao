#include <iostream>
#include <tuple>
#include <string>

int somarVetor(int vetor[], int indice){
    if(indice == 0){
        return vetor[0];
    }

    return vetor[indice] + somarVetor(vetor, indice - 1);
}

int main(){

   int numeros[5] = {10, 20, 30, 40, 50};

   std::cout<<"Soma recursiva: "<<somarVetor(numeros, 4)<<std::endl;

        return 0;
}