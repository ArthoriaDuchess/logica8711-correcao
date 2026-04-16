#include <iostream>

int main(){

    int myNumbers [5] = {10, 20, 30, 40, 50};
    // for(int num : myNumbers){
    //     std::cout<<num<<std::endl;
    for(int i = 0; i < 5; ++i){
        std::cout<<myNumbers[i]<<std::endl;
    }

    return 0;
}