#include <iostream>
 
 int mdc(int a, int b){
    if(b == 0) return 0;
    return mdc(b, a % b);
 }

 int main(){
    std::cout<<"MDC(48, 18) = "<<mdc(48, 18)<<std::endl;
    std::cout<<"MDC(100, 50) = "<<mdc(100, 50)<<std::endl;

    return 0;
 }

