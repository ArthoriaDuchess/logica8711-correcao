#include <iostream>
#include <thread> //para lidar com o tempo de execucao
#include <chrono> //para definir unidaddes de tempo (ms, segundo)


int main(){
    
    for(int i = 10; i >= 0; i--){
        std::cout<<"A bomba ira explodir em.."<<i<<std::endl;

        std::this_thread::sleep_for(std::chrono::seconds(10));
        //seconds <-> milliseconds.
    }

        std::cout<<"Que pena a bomba explodiu!!!"<<std::endl;

    return 0;
}