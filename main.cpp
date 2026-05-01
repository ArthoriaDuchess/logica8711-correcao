#include <iostream>


int main() {

    int totalSeconds;

    std::cout<<"Enter total seconds: "<<std::endl;
    std::cin>>totalSeconds;

    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;

    std::cout<<"Time: "<<minutes<<" minutes and "<<seconds<<" seconds."<<std::endl;
    
    return 0;
}