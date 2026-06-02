#include <iostream>
#include <tuple>
#include <string>
#include <cctype>

bool ehPalindromo(std::string s, int inicio, int fim){
    if(inicio >= fim ){
        return true;
    }
    if(s[inicio] != s [fim]){
        return false;
    }
    return ehPalindromo(s, inicio + 1, fim -1);
}

int main(){
    std::string palavra;

    std::cout<<"Insira o palindromo: "<<std::endl;
    std::cin>>palavra;

    for(char &c : palavra){
        c = std::tolower(c);
    }
    if(ehPalindromo(palavra, 0, palavra.length() - 1)){
        std::cout<<"É palindromo!"<<std::endl;
    }else{
        std::cout<<"Não é palindromo!"<<std::endl;
    }

    return 0;
}