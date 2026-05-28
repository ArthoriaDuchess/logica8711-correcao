#include <iostream>
#include <tuple>
#include <string>

int fibonacci(int n){
    std::cout<<"Calculando fib("<< n<<")"<<std::endl;

    if(n == 0){
        std::cout<<"Fib(0) = 0 (PARADA)"<<std::endl;
        return 0;
    }
    if(n == 1){
        std::cout<<"Fib(1) = 1 (PARADA)"<<std::endl;
        return 1;
    }
    std::cout<<"Fib("<<n<<") = fib("<<(n-1)<<") + fib("<<(n-2)<<")\n";
    int resultado = fibonacci(n - 1) + fibonacci(n - 2);
    std::cout<<"Fib(" << n << ") = "<< resultado << "\n";
    return resultado;
}

int main(){

    fibonacci(4);

        return 0;
}