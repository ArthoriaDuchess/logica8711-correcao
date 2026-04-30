#include <iostream>
#include <string>

int main() {

    int choice;
    float temp, converted;

    std::cout<<"---- Temperature Converter ----"<<std::endl;
    std::cout<<"1: Celsius to fahrenheit"<<std::endl;
    std::cout<<"2: Fahrenheit to celsius"<<std::endl;
    std::cout<<"Choose an option (1 or 2): "<<std::endl;
    std::cin>>choice;

    if(choice == 1){
        std::cout<<"Enter Temperature in celsius: "<<std::endl;
        std::cin>>temp;
        converted = (temp * 1.8) + 32;
        std::cout<<temp<<"C is "<<converted<<" F. "<<std::endl;
    }else if(choice == 2){
        std::cout<<"Enter temperature in fahrenheit: "<<std::endl;
        std::cin>>temp;
        converted = (temp - 32) / 1.8;
        std::cout<<temp<<"F is "<<converted<<" C. "<<std::endl;
    }else{
        std::cout<<"Invalid Option! Please restart the program and choose either 1 or 2."<<std::endl;

    }
    return 0;
}