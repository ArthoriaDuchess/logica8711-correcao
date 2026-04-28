#include <iostream>
#include <vector>

int main(){

    std::vector<std::string>cars = {"Volvo", "BMW", "Mercedes"};
    
    cars.push_back("Mazda");

    for(std::string car : cars){
        std::cout<<car<<std::endl;
    }

    return 0;
}