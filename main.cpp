#include <iostream>
#include <string>

int dobro(int num){
    return num * 2;
}
int triplo(int num){
    return num * 3;
}


int main(){

    int zoio;

    std::cout<<"Vamos dobrar os seus zoios: "<<std::endl;
    std::cin>>zoio;
    std::cout<<"Você tem: "<<dobro(zoio)<<" zoios"<<std::endl;

    std::cout<<"Vamos triplicar os seus zoios: "<<std::endl;
    std::cin>>zoio;
    std::cout<<"Você tem: "<<triplo(zoio)<<" zoios"<<std::endl;

}