#include <iostream>


int main() {

    int num;

    std::cout<<"Enter a number: "<<std::endl;
    std::cin>>num;

    std::cout<<num%2<<std::endl;

    if(num % 2 == 0){
        std::cout<<"Este numero é par!"<<std::endl;

    }else{
        
        std::cout<<"O valor indicado é impar!"<<std::endl;
    }
    return 0;
}