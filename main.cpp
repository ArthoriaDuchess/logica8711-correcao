#include <iostream>
#include <string>

int main(){

    std::string name = "Diego";

    std::cout<<name[0];
    std::cout<<name[2];
    std::cout<<name[name.length()-1]<<std::endl;
    name[0] = 'D';
    std::cout<<name<<std::endl;
    std::cout<<name.at(0)<<std::endl;
    name.at(0) = 'O';
    std::cout<<name;
    


    return 0;
}