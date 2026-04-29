#include <iostream>

int DoubleGame(int x){
    return x * 2;
}

int main(){

    for(int i = 1; i <= 5; i++){
        std::cout<<"O dobro de "<<i<<" é "<<DoubleGame(i)<<std::endl;
    }

    return 0;
}