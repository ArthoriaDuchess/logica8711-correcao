#include <iostream>
#include <tuple>
#include <string>

void tabuada(int numero, int multiplicador){
    if(multiplicador == 0){
        return;
    }

    tabuada(numero, multiplicador - 1);

    std::cout<<numero<<" x "<<multiplicador<<" = "<<(numero * multiplicador)<<std::endl;

}

int main(){

   int numero;
   int multiplicador;

   std::cout<<"Insira um numero: "<<std::endl;
   std::cin>>numero;

   std::cout<<"Insira um multiplicador: "<<std::endl;
   std::cin>>multiplicador;

    tabuada(numero, multiplicador);
   

        return 0;
}