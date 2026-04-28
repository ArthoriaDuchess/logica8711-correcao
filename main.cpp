#include <iostream>

int main(){

    int myNumbers[5] = {1, 2, 3, 4, 5};

    // for(int i = 0; i < 5; i++){
    //     std::cout<<myNumbers[i]<<std::endl;
    // }

    for(int num : myNumbers){
        std::cout<<num<<std::endl;
    }

    return 0;
}