#include <iostream>
#include <tuple>
#include <string>
#include <cctype>

bool ehPalindromo(std::string s){
    int inicio = 0;
    int fim = s.length() - 1;

    while(inicio < fim){
        if(s[inicio] != s [fim] ){
            return false;
        }
        inicio++;
        fim--;
    }
    return true;
}

int main(){
    std::string PalindromoDoido;

    std::cout<<"Insira o palindromo: "<<std::endl;
    std::cin>>PalindromoDoido;

    for(int i = 0; i < PalindromoDoido.length(); i++){
        PalindromoDoido[i] = std::tolower(PalindromoDoido[i]);
    }
    if(ehPalindromo(PalindromoDoido)){
        std::cout<<"É palindromo!"<<std::endl;
    }else{
        std::cout<<"Não é palíndromo!"<<std::endl;
    }

    return 0;
}