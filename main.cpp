#include <iostream>
#include <string>

int main(){

    std::string name = "Diego";

    std::cout<<name[0];
    std::cout<<name[2];
    std::cout<<name[name.length()-1]<<std::endl;
    name[0] = 'D';
    std::cout<<name<<std::endl;

    return 0;
}