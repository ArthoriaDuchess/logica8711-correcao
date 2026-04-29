#include <iostream>
#include <string>

void minhaFuncao (std::string nome, int idade){
    std::cout<<"Meu nome é "<<nome<<" e tenho "<<idade<<" anos."<<std::endl;
}

int main(){

    minhaFuncao("Diego", 23);

    return 0;
}