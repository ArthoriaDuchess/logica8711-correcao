#include <iostream>
#include <string>

long long calcularFatorial(int n){
    long long resultado = 1;

    for(int i = 1; i <= n; i++){
        resultado *= i;
    }

    return resultado;
}
int main(){

    int numero;

    std::cout<<"Digite um numero para calcular fatorial: "<<std::endl;
    std::cin>>numero;
    if(numero < 0){
        std::cout<<"Erro: fatorial de um numero negativo nao existe!"<<std::endl;
    }else{
        long long fatorial = calcularFatorial(numero);
        std::cout<<numero<<"! = "<<fatorial<<std::endl;
    }
    
    return 0;
}

